
/*
 * Copyright (C) 2012 Chabassier Luc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/*!
 * \file tools.cpp
 * \brief Implémente les fonctions de tools.hpp
 */

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

	int atoi(std::string nb)
	{
		std::istringstream iss(nb);
		int nombre;
		iss >> nombre;
		return nombre;
	}
};
