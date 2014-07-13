#include "AudioDriverSDL.h"



AudioDriver::AudioDriver()
{
  sdlAudioSpecWanted   = (SDL_AudioSpec *) malloc(sizeof(SDL_AudioSpec));  
  sdlAudioSpecObtained = (SDL_AudioSpec *) malloc(sizeof(SDL_AudioSpec));

  sdlAudioSpecWanted->freq = 48000;
  sdlAudioSpecWanted->format = AUDIO_S16;
  sdlAudioSpecWanted->channels = 2;    /* 1 = mono, 2 = stereo */
  sdlAudioSpecWanted->samples = BUFFER_FRAME;  /* Good low-latency value for callback */
  //sdlAudioSpecWanted->callback = fakesdlcallback;
  //sdlAudioSpecWanted->userdata = this;
}


int AudioDriver::startAudio()
{
  SDL_PauseAudio(0);
}

int AudioDriver::stopAudio()
{
  SDL_PauseAudio(1);
}

int AudioDriver::openAudio()
{
  SDL_InitSubSystem(SDL_INIT_AUDIO);
  if ( SDL_OpenAudio(sdlAudioSpecWanted, sdlAudioSpecObtained) < 0 ) 
    {
      fprintf(stderr, "Couldn't open audio: %s\n", SDL_GetError());
      return(-1);
    }
}


int AudioDriver::closeAudio()
{
  //SDL_CloseAudio();
  //  SDL_QuitSubSystem(SDL_INIT_AUDIO);
}
