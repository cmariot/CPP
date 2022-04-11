/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:25:31 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 09:03:31 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class	AMateria;
class	IMateriaSource;

/* Interface : classe ne possedant que des methodes pures, implementees sur 0.
 * Une interface ne peut pas avoir d'attributs */

class	IMateriaSource
{
	public:

		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

} ;

#endif
