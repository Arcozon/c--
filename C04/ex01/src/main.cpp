/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 15:25:48 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main(void)
{
	{
		Animal *Humain = new Animal();
		Animal *Hepha = new Cat();
		Animal *Yako = new Dog();

		std::cout << "Cute cat: " << Hepha->getType() << std::endl;
		std::cout << "Cute dog: " << Yako->getType() << std::endl;
		std::cout << "Cute animal: " << Humain->getType() << std::endl;

		Hepha->makeNoise();
		Yako->makeNoise();
		Humain->makeNoise();
		delete Humain;
		delete Hepha;
		delete Yako;
	}
	{
		std::cout << std::endl << std::endl;

		WrongAnimal	*WHepha = new WrongCat();
		WrongAnimal	*WHumain = new WrongAnimal();
		WrongCat	*WCat = new WrongCat();

		std::cout << "Weird cat: " << WHepha->getType() << std::endl;
		std::cout << "Weird animal: " << WHumain->getType() << std::endl;
		std::cout << "True weird cat: " << WCat->getType() << std::endl;

		WHepha->makeNoise();
		WHumain->makeNoise();
		WCat->makeNoise();

		delete WCat;
		delete WHepha;
		delete WHumain;
	}
	return (0);
}
