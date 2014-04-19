//
//  Biquad.h
//
//  Created by Nigel Redmon on 11/24/12
//  EarLevel Engineering: earlevel.com
//  Copyright 2012 Nigel Redmon
//
//  For a complete explanation of the Biquad code:
//  http://www.earlevel.com/main/2012/11/25/biquad-c-source-code/
//
//  License:
//
//  This source code is provided as is, without warranty.
//  You may copy and distribute verbatim copies of this document.
//  You may modify and use this source code to create binary code
//  for your own purposes, free or commercial.
//

#include <stdint.h>
#include <stdio.h>
//#define  DECAL 32768
//#define  DECAL 2147483648
#define  DECAL 16777216
               
#ifndef Biquad_h
#define Biquad_h

enum {
    bq_type_lowpass = 0,
    bq_type_highpass,
    bq_type_bandpass,
    bq_type_notch,
    bq_type_peak,
    bq_type_lowshelf,
    bq_type_highshelf
};

class Biquad {
public:
    Biquad();
    Biquad(int type, float Fc, float Q, float peakGainDB);
    ~Biquad();
    void reset();
    void setType(int type);
    void setQ(float Q);
    void setFc(float Fc);
    void setPeakGain(float peakGainDB);
    void setBiquad(int type, float Fc, float Q, float peakGain);
    //  float process(float in);
    int16_t process(int16_t in);
    
protected:
    void calcBiquad(void);

    int type;
    float a0, a1, a2, b1, b2;
    float Fc, Q, peakGain;
    float z1, z2;

    int64_t   i_a0, i_a1, i_a2, i_b1, i_b2;
    int64_t   i_Fc, i_Q,  i_peakGain;
    int64_t   i_z1, i_z2;

};
/*
inline float Biquad::process(float in) {
    float out = in * a0 + z1;
    z1 = in * a1 + z2 - b1 * out;
    z2 = in * a2 - b2 * out;
    return out;
}
*/

inline int16_t Biquad::process(int16_t in) 
{
  int64_t i_in;
  int64_t i_out;
  int16_t out;
  
  //  i_in=in*DECAL;

  i_in=in;
  i_in=i_in*DECAL;
  
  //  i_out = i_in   * i_a0   + i_z1;
  //  i_z1  = i_in   * i_a1   + i_z2    - i_b1   * i_out;
  //  i_z2  = i_in   * i_a2   - i_b2    * i_out;
  

  
  i_out = i_in / i_a0   + i_z1;
  if (i_out==0) i_out=1;

  i_z1  = i_in / i_a1   + i_z2    - i_b1 / i_out;
  i_z2  = i_in / i_a2             - i_b2 / i_out;
  

  i_out=i_out/DECAL;
  out=i_out;

  return out;
}


#endif // Biquad_h
