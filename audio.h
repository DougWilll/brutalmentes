//lista dos sons
#include <string>
class Audio
{

 private:
	 char*  track1= "snd/Brutalmentes_theme_sample_-_29_04_16_11.wav";
	Mix_Chunk* gScratch = NULL;
         
 public:
       Audio();
       int threadFunction( void*data);
       int loadAudio();
       static int thread_func_wrapper(void *data);
};