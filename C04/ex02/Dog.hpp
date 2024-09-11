/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pudry <pudry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:46:08 by pudry             #+#    #+#             */
/*   Updated: 2024/01/10 17:14:12 by pudry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__HPP
# define __DOG__HPP

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &src);

		Dog		&operator=(Dog const &src);
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif