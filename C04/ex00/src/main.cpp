/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 10:16:53 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

int main(void)
{
	Animal *Humain = new Animal();
	Animal *Hepha = new Cat();
	Animal *Jano = new Dog();

	std::cout << "Cute animal: " << Humain->getType() << std::endl;
	std::cout << "Cute cat: " << Hepha->getType() << std::endl;
	std::cout << "Cute dog: " << Jano->getType() << std::endl;

	delete Humain;
	delete Hepha;
	delete Jano;
	return (0);
}
