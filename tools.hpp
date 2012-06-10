#ifndef DEF_SDLP_TOOLS
#define DEF_SDLP_TOOLS

#include <SDL/SDL.h>

namespace sdl
{
	class Liberator // Classe servant à libérer les SDL_Surface pour les shared_ptr de boost
	{
		public:
			Liberator();
			Liberator(const Liberator& cp) throw();
			Liberator& operator=(const Liberator& cp);
			Liberator& operator()(SDL_Surface* surf);
	};
};

#endif//DEF_SDLP_TOOLS
