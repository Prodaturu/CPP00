/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays_in_classes_2.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:31:51 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/19 16:51:00 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Car class (without the '_' prefix)
class	Car
{

	private:
		std::string	make;
		std::string	model;
		std::string	year;

	public:
		void	displayCarInfo()
		{
			std::cout << "Car Make : " << make << "\t Model : " << model << "\t Year : " << year << std::endl;
		};

		// --- --- --- Setters / setter methods --- --- --- //

		void 	setMakeTwo(std::string str)
		{
			make = str;
		};
		
		void	setMake(std::string make)
		{
			this->make = make;
		};

		void	setModel(std::string model)
		{
			this->model = model;
		};

		void	setYear(std::string year)
		{
			this->year = year;
		};

		// --- --- --- Getters / getter methods --- --- --- //
		
		std::string	getMake()
		{
			return (this->make);
		};

		std::string	getModel()
		{
			return (model);
		};

		std::string	getYear()
		{
			return (year);
		};
};

// Garage class (with the '_' prefix)
class	Garage
{
	Car	_cars[5];	// array of Car objects (stores max of 5 car objects)
	int	_carCount;	// to keep track of number of cars in the garage

	private:
		void	display_car_info(Car	car)
		{
			std::cout << "Car Make : " << car.getMake();
			std::cout << "\t Model : " << car.getModel();
			std::cout << "\t Year : " << car.getYear();
			std::cout << std::endl;
		}

	public:

		// Constructor: Initialized _carCount to 0
		// Garage() : _carCount(0) {}
		Garage() : _carCount(0)
		{
			std::cout << "Garage opened" << std::endl;
		}

		// Destructor class : Display message when garage is closed
		~Garage()
		{
			std::cout << "Garage closed" << std::endl;
		}
		
		void	addCar(Car car)
		{
			if (_carCount < 5)
				_cars[_carCount++] = car;
			else
				std::cout << "Garage full!!, Find anothe Garage" << std::endl;
		}
		
		void	displayCar(int index)
		{
			if (index < _carCount)
				display_car_info(_cars[index]);
			else
				std::cout << "Invalid index" << std::endl;
		}
}
