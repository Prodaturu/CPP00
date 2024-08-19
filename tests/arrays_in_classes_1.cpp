/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays_in_classes_1.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:39:15 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/19 00:20:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Person
{
	private:
		std::string _name;
		int 		_age;

	public:
		void	set_name(std::string name)
		{
			_name = name;
		}

		void	set_age(int age)
		{
			_age = age;
		}

		void	display_info()
		{
			std::cout << "Name: " << _name << std::endl;
			std::cout << "Birth Year: " << _age << std::endl;
		}

		void	display_info(std::string message)
		{
			std::cout << message << std::endl;
			display_info();
		}
};

class	GroupOfPeople
{
	private:
		Person	_members[5]; // Array of Person Objects that 
		int		_member_count;

	public:

		// --- --- --- Constructors --- --- --- //

		// This constructor initializes the _member_count to 0
		// as soon as a 'GroupOfPeople' object is created
		GroupOfPeople() : _member_count(0)
		{
			// I don't need to do anything here
			// So I just leave it empty
		};
}

// class Contact {
// 	private:
// 		std::string firstName;
// 		std::string lastName;

// 	public:
// 		// Constructor
// 		Contact(std::string fName, std::string lName) : firstName(fName), lastName(lName) {
// 			std::cout << "Contact created: " << firstName << " " << lastName << std::endl;
// 		}

// 		// Destructor
// 		~Contact() {
// 			std::cout << "Contact destroyed: " << firstName << " " << lastName << std::endl;
// 		}

// 		void displayContact() {
// 			std::cout << "Name: " << firstName << " " << lastName << std::endl;
// 		}
// };

// class PhoneBook {
// 	private:
// 		Contact contacts[8];  // Array of Contact objects
// 		int contactCount;

// 	public:
// 		PhoneBook() : contactCount(0) {}

// 		void addContact(Contact newContact) {
// 			if (contactCount < 8) {
// 				contacts[contactCount] = newContact;
// 				contactCount++;
// 			} else {
// 				std::cout << "PhoneBook is full!" << std::endl;
// 			}
// 		}

// 		void displayContacts() {
// 			for (int i = 0; i < contactCount; i++) {
// 				contacts[i].displayContact();
// 			}
// 		}
// };


// class Person
// {
// 	private:
// 		std::string _name;
// 		int 		_age;

// 	public:
// 		void setName(std::string name) {
// 			_name = name;
// 		}

// 		void setage(int age) {
// 			_age = age;
// 		}

// 		void displayInfo() {
// 			std::cout << "Name: " << _name << std::endl;
// 			std::cout << "Birth Year: " << _age << std::endl;
// 		}

// 		void displayInfo(std::string message) {
// 			std::cout << message << std::endl;
// 			displayInfo();
// 		}
// }

// int	main(void)
// {
// 	Person person1;

// 	person1.setName("Jackie Chan");

// 	person1.setage(1954);

// 	person1.displayInfo("Person 1 Info: ");
// }
