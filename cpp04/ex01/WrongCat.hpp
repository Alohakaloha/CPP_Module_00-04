#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat const &);
		~WrongCat();
		WrongCat& operator=(WrongCat const &);
		void		setType();
		std::string	getType()const;
		void		makeSound()const;
};
#endif

