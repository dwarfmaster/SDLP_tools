#include "tools.hpp"

namespace sdl
{
	Liberator::Liberator()
	{}

	Liberator::Liberator(const Liberator& cp) throw()
	{}

	Liberator& Liberator::operator=(const Liberator& cp)
	{
		return *this;
	}

	Liberator& Liberator::operator()(SDL_Surface* surf)
	{
		if(surf!=NULL)
			SDL_FreeSurface(surf);
		return *this;
	}
};
