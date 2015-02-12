#ifndef __MASTER____
#define __MASTER____
#include <SDL/SDL.h>


//#define INTERNAL_BUFFER_SIZE 128*1024   
#define INTERNAL_BUFFER_SIZE 16*1024   
#define DEFAULTFREQ      44100
#define DEFAULTBITRATE   16
//#define DEFAULTSAMPLES   512
//#define DEFAULTSAMPLES   1024
//#define DEFAULTSAMPLES   128
#define DEFAULTCHANNELS  2
#define DEFAULTPOLYPHONY 16
#define DEFAULTFORMAT    AUDIO_S16

//#define SCREEN_WIDTH	320
//#define SCREEN_HEIGHT	240
//#define SCREEN_DEPTH	16

//#define WAVETABLE_SIZE  1024*16
#define WAVETABLE_SIZE  1024*16
//#define WAVETABLE_SIZE  1024
//#define WAVETABLE_SIZE  128
#define FPU 0

//#define MAX_PATTERN_BY_PROJECT 256
//#define MAX_PATTERN_BY_PROJECT 16
#define MAX_PATTERN_BY_PROJECT 256
#define MAX_BANK 256
#define TRACK_MAX 4

#define BUFFER_FRAME DEFAULTSAMPLES
//#define DEFAULT_FREQ 44100

#define DEFAULT_VOLUME   64


#define KEY_REPEAT_INTERVAL 400



#define DISABLEDBOX_COLOR   0x0AF0FE
#define BOX_COLOR           0xAECD15
#define TRIG_COLOR          0x0E4C15
#define NOTE_COLOR          0x46DC65
#define CURSOR_COLOR        0x1515CD
#define STEP_COLOR          0x242C45

#define SMALLBOX_COLOR      0x442233

#define DISABLE             0
#define ENABLE              1

#define MENU_OFF      0
#define MENU_ON_PAGE1 1
#define MENU_ON_PAGE2 2

//menu
/* enum { */
/*   MENU_OFF, */
/*   MENU_ON_PAGE1, */
/*   MENU_ON_PAGE2 */
/* }; */

#define CURSOR_LOADSAVE 0
#define CURSOR_SONG     1

/* enum { */
/*   CURSOR_LOADSAVE, */
/*   CURSOR_SONG */
/* }; */
  

//menu_cursor

#define GLOBALMENU_AD         0
#define GLOBALMENU_NOTE       1
#define GLOBALMENU_OSC        2
#define GLOBALMENU_VCO        3
#define GLOBALMENU_LFO        4
#define GLOBALMENU_FLTR       5

#define GLOBALMENU_LS         6
#define GLOBALMENU_BANK       7
#define GLOBALMENU_PSH        8
#define GLOBALMENU_MAC        9
#define GLOBALMENU_FX         10
#define GLOBALMENU_BPM        11


/* enum { */
/*   GLOBALMENU_AD,         // 0 */
/*   GLOBALMENU_NOTE,       // 1 */
/*   GLOBALMENU_OSC,        // 2  */
/*   GLOBALMENU_VCO,        // 3 */
/*   GLOBALMENU_LFO,        // 4 */
/*   GLOBALMENU_FLTR,       // 5 */

/*   GLOBALMENU_LS,         // 6 */
/*   GLOBALMENU_BANK,       // 7 */
/*   GLOBALMENU_PSH,        // 8 */
/*   GLOBALMENU_MAC,        // 9 */
/*   GLOBALMENU_FX,         // 10 */
/*   GLOBALMENU_BPM,        // 11 */

/* }; */


//menu_ad
enum {
  MENU_AD_AMP_ATTACK_RELEASE,
  MENU_AD_AMP_DECAY_SUSTAIN,
  MENU_AD_FLTR_ATTACK_RELEASE,
  MENU_AD_FLTR_DECAY_SUSTAIN,
  MENU_AD_TRIGTIME_AMP,
};

enum {
  MENU_FLTR_CUTOFF_RESONANCE,
  MENU_FLTR_ALGO_TYPE, 
};

enum {
  MENU_VCO_OSCMIX_PHASE,
  MENU_VCO_OSCAMP,
  MENU_VCO_FMTYPE
};


enum {
  MENU_LFO_LFOPITCH,
  MENU_LFO_PITCHBEND,
  MENU_LFO_TYPE,
};


enum {
  MENU_FX_DEPTH_SPEED
};

enum {
  MENU_LS_PATTERN,
  MENU_LS_SONG,
};



//INTERNAL

/* #define FILTER_TYPE_LOWPASS   0 */
/* #define FILTER_TYPE_BANDPASS  1 */
/* #define FILTER_TYPE_HIPASS    2 */

/* #define FILTER_ALGO_NOFILTER  0 */
/* #define FILTER_ALGO_BIQUAD    1 */
/* #define FILTER_ALGO_AMSYNTH   2 */



#ifdef OPENDINGUX
#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define SCREEN_DEPTH	16
#define SCREEN_MULT     1

#define KEY_REPEAT_INTERVAL_SMALLEST  4
#define KEY_REPEAT_INTERVAL_SMALL     8
#define KEY_REPEAT_INTERVAL_MIDDLE    32
#define KEY_REPEAT_INTERVAL_LONG      64
#define KEY_REPEAT_INTERVAL_LONGEST   128

#define DEFAULTSAMPLES   2048

// BEGIN DINGOO A320 SDL
#define BUTTON_B            SDLK_LALT
#define BUTTON_A            SDLK_LCTRL
#define BUTTON_X            SDLK_SPACE
#define BUTTON_Y            SDLK_LSHIFT

#define BUTTON_UP           SDLK_UP
#define BUTTON_DOWN         SDLK_DOWN
#define BUTTON_LEFT         SDLK_LEFT
#define BUTTON_RIGHT        SDLK_RIGHT

#define BUTTON_SELECT       SDLK_ESCAPE
#define BUTTON_START        SDLK_RETURN

#define BUTTON_POWER        SDLK_POWER
#define BUTTON_PAUSE        SDLK_PAUSE

#define KEYPRESSED          SDL_KEYDOWN
#define KEYRELEASED         SDL_KEYUP

// BEGIN DINGOO A320 SDL
#endif

#ifdef LINUX_DESKTOP
#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define SCREEN_DEPTH	16
#define SCREEN_MULT     2
// BEGIN DINGOO A320 SDL use by linux too

#define DEFAULTSAMPLES   2048

#define KEY_REPEAT_INTERVAL_SMALLEST  4
#define KEY_REPEAT_INTERVAL_SMALL     8
#define KEY_REPEAT_INTERVAL_MIDDLE    32
#define KEY_REPEAT_INTERVAL_LONG      64
#define KEY_REPEAT_INTERVAL_LONGEST   128



#define BUTTON_B            SDLK_LALT
#define BUTTON_A            SDLK_LCTRL
#define BUTTON_X            SDLK_SPACE
#define BUTTON_Y            SDLK_LSHIFT

#define BUTTON_UP           SDLK_UP
#define BUTTON_DOWN         SDLK_DOWN
#define BUTTON_LEFT         SDLK_LEFT
#define BUTTON_RIGHT        SDLK_RIGHT

#define BUTTON_SELECT       SDLK_ESCAPE
#define BUTTON_START        SDLK_RETURN



#define KEYPRESSED          SDL_KEYDOWN
#define KEYRELEASED         SDL_KEYUP

// BEGIN DINGOO A320 SDL
#endif


#ifdef PSP
#define SCREEN_MULT     1
#define SCREEN_WIDTH	480
#define SCREEN_HEIGHT	272
#define SCREEN_DEPTH	16

#define KEY_REPEAT_INTERVAL_SMALLEST  6
#define KEY_REPEAT_INTERVAL_SMALL     6
#define KEY_REPEAT_INTERVAL_MIDDLE    6
#define KEY_REPEAT_INTERVAL_LONG      160
#define KEY_REPEAT_INTERVAL_LONGEST   160

#define DEFAULTSAMPLES   2048

#define PSP_BUTTON_TRIANGLE 0 // X
#define PSP_BUTTON_CIRCLE   1 // A
#define PSP_BUTTON_CROSS    2 // B
#define PSP_BUTTON_SQUARE   3 // Y
#define PSP_BUTTON_L        4
#define PSP_BUTTON_R        5
#define PSP_BUTTON_DOWN     6
#define PSP_BUTTON_LEFT     7
#define PSP_BUTTON_UP       8
#define PSP_BUTTON_RIGHT    9
#define PSP_BUTTON_SELEC    10
#define PSP_BUTTON_START    11


// BEGIN PSP SDL 
#define BUTTON_B            PSP_BUTTON_CROSS
#define BUTTON_A            PSP_BUTTON_CIRCLE
#define BUTTON_X            PSP_BUTTON_TRIANGLE
#define BUTTON_Y            PSP_BUTTON_SQUARE

#define BUTTON_UP           PSP_BUTTON_UP
#define BUTTON_DOWN         PSP_BUTTON_DOWN
#define BUTTON_LEFT         PSP_BUTTON_LEFT
#define BUTTON_RIGHT        PSP_BUTTON_RIGHT

#define BUTTON_SELECT       PSP_BUTTON_SELEC
#define BUTTON_START        PSP_BUTTON_START

#define KEYPRESSED          SDL_JOYBUTTONDOWN
#define KEYRELEASED         SDL_JOYBUTTONUP
// BEGIN PSP SDL
#endif


#ifdef GP2X
#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define SCREEN_DEPTH	16
#define SCREEN_MULT     1

#define KEY_REPEAT_INTERVAL_SMALLEST  1
#define KEY_REPEAT_INTERVAL_SMALL     4
#define KEY_REPEAT_INTERVAL_MIDDLE    32
#define KEY_REPEAT_INTERVAL_LONG      64
#define KEY_REPEAT_INTERVAL_LONGEST   128

#define DEFAULTSAMPLES            256

#define GP2X_BUTTON_UP              0
#define GP2X_BUTTON_DOWN            4
#define GP2X_BUTTON_LEFT            2
#define GP2X_BUTTON_RIGHT           6
#define GP2X_BUTTON_UPLEFT          1
#define GP2X_BUTTON_UPRIGHT         7
#define GP2X_BUTTON_DOWNLEFT        3
#define GP2X_BUTTON_DOWNRIGHT       5
#define GP2X_BUTTON_CLICK           18
#define GP2X_BUTTON_A               12
#define GP2X_BUTTON_B               13
#define GP2X_BUTTON_X               14
#define GP2X_BUTTON_Y               15
#define GP2X_BUTTON_L               10
#define GP2X_BUTTON_R               11
#define GP2X_BUTTON_START           8
#define GP2X_BUTTON_SELECT          9
#define GP2X_BUTTON_VOLUP           16
#define GP2X_BUTTON_VOLDOWN         17

// BEGIN GP2X SDL 
#define BUTTON_B            GP2X_BUTTON_B
#define BUTTON_A            GP2X_BUTTON_A
#define BUTTON_X            GP2X_BUTTON_X
#define BUTTON_Y            GP2X_BUTTON_Y

#define BUTTON_UP           GP2X_BUTTON_UP
#define BUTTON_DOWN         GP2X_BUTTON_DOWN
#define BUTTON_LEFT         GP2X_BUTTON_LEFT
#define BUTTON_RIGHT        GP2X_BUTTON_RIGHT

#define BUTTON_SELECT       GP2X_BUTTON_SELECT
#define BUTTON_START        GP2X_BUTTON_START
// BEGIN GP2X SDL

#define KEYPRESSED          SDL_JOYBUTTONDOWN
#define KEYRELEASED         SDL_JOYBUTTONUP

#endif





enum 
  {
    FMTYPE_2_OP_FM,
    FMTYPE_2_OP_AM
  };

enum 
  {
    SYNTH_PICOSYNTH,
    SYNTH_OPL2,
    SYNTH_PICODRUM,
    SYNTH_PBSYNTH,
    SYNTH_CURSYNTH,
  };

enum 
  {
    PICO_WAVETABLE_SINE,
    PICO_WAVETABLE_SAW,
    PICO_WAVETABLE_PULSE,
    PICO_WAVETABLE_TRGL,
    PICO_WAVETABLE_NOISE,
    //PICO_WAVETABLE_ONE,
    PICO_WAVETABLE_SIZE
  };

enum 
  {
    PICO_DBOPL_SINE,
    PICO_DBOPL_HSIN,
    PICO_DBOPL_ABSIN,
    PICO_DBOPL_QSIN,
    PICO_DBOPL_EPSIN,
    PICO_DBOPL_ASIN,
    PICO_DBOPL_SQR,
    PICO_DBOPL_DSQR,
    PICO_DBOPL_SIZE
  };

enum
  {
    FILTER_TYPE_LP,
    FILTER_TYPE_BP,
    FILTER_TYPE_HP,
    FILTER_TYPE_SIZE
  };


enum
  {
    FILTER_ALGO_NOFILTER,
    FILTER_ALGO_BIQUAD,
    FILTER_ALGO_AMSYNTH,
    FILTER_ALGO_SIZE,
  };

enum
  {
    LFO_TYPE_PITCHLFO,
    LFO_TYPE_PITCHBEND,
    LFO_TYPE_SIZE,
  };


enum
  {
    FM_TYPE_AM,
    FM_TYPE_FM,
    FM_TYPE_SIZE,
  };





#endif
