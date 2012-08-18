
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
 * \file tools.doc.hpp
 * \brief Fichier servant à la doc du fichier tools.hpp.
 */

/*!
 * \namespace sdl
 * \brief Contient les fonctions des bibliothèques SDLP_qqchose.
 */

/*!
 * \class sdl::Liberator
 * \brief Foncteur servant à libérer les SDL_Surface* pour boost::smart_ptr.
 */

/*!
 * \fn Liberator& sdl::Liberator::operator()(SDL_Surface* surf);
 * \brief Libère la surface passée en paramètre.
 * \param surf Surface à libérer.
 */

/*!
 * \fn std::string sdl::itoa(int nb);
 * \brief Convertit un int en std::string.
 * \param nb Le nombre à convertir.
 * \return La string contenant le nombre.
 */

/*!
 * \fn int sdl::atoi(std::string nb);
 * \brief Convertit un std::string en int.
 * \param nb La chaine à convertir.
 * \return Le nombre contenu par la string.
 */

