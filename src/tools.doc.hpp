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

