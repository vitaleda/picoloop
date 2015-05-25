#include "sound.h"
#include <stdio.h>

using namespace gambatte;

#define SIZE 2
#define NUM  1024

int main()
{
  int i=0;
  int j=0;
  uint_least32_t buf[SIZE];
  FILE * F;
  for (i=0;i<SIZE;i++)
    {
      buf[i]=0;
    }

  printf("hello %d\n",sizeof(uint_least32_t));
  PSG psg;
  psg.init(true);
  psg.setEnabled(true);
  psg.setBuffer(buf);
  psg.set_so_volume(0x01);
  psg.map_so(0xFF);
  //  psg.reset();

  psg.set_nr10(0x76); // NR10 FF10 -PPP NSSS    Sweep period, negate, shift
  psg.set_nr11(0x14); // NR11 FF11 DDLL LLLL    Duty, Length load (64-L)
  psg.set_nr12(0x17); // NR12 FF12 VVVV APPP    Starting volume, Envelope add mode, period
  psg.set_nr13(0x45); // NR13 FF13 FFFF FFFF    Frequency LSB
  psg.set_nr14(0xF1); // NR14 FF14 TL-- -FFF    Trigger, Length enable, Frequency MSB

  F=fopen("audioout","w+");
  for (i=0;i<NUM;i++)
    {
      psg.generate_samples(SIZE*1,0);
      psg.fillBuffer();  
      for (j=0;j<SIZE;j++)
	{
	  buf[j]=buf[j] >> 16;
	  printf("%d ",buf[j] );
	}
      
      fwrite(buf,sizeof(uint_least32_t),SIZE,F);
      psg.set_nr14(0x61);
    }


  //  for (i=0;i<SIZE;i++)
  //    {

      //printf("%.4d ",buf[i]);
  //    }
    fclose(F);
  
}
