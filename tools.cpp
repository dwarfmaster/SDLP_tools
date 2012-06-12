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

	std::string itoa(int nb)
	{
		std::ostringstream oss;
		oss << nb;
		return oss.str();
	}

	int itoa(std::string nb)
	{
		std::istringstream iss(nb);
		int nombre;
		iss >> nombre;
		return nombre;
	}
};
