/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:01 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 18:30:23 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{

	public:

		MateriaSource(void);												// Constructeur par default
		MateriaSource(MateriaSource const & copy);							// Constructeur par copie
		~MateriaSource(void);												// Destructeur
		MateriaSource const &	operator = (MateriaSource const & rhs);		// Surcharge d'opérateur d’affectation

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	private:

		AMateria*	_materia_source[4];


} ;

#endif

