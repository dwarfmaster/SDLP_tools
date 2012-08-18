
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
 * \file tools.hpp
 * \brief Définit la classe Liberator et autres outils.
 * \author Luc Chabassier
 */

#ifndef DEF_SDLP_TOOLS
#define DEF_SDLP_TOOLS

#include <SDL/SDL.h>
#include <string>
#include <sstream>

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

	std::string itoa(int nb);
	int atoi(std::string nb);
};

#endif//DEF_SDLP_TOOLS
