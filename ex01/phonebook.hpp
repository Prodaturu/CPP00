/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:10:58 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/21 12:22:05 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include<string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_Contact[8];
		int			_index;
		int			_contact_count;
	
	public:
		// --- --- --- Constructor --- --- --- //
		PhoneBook();

		// --- --- --- Destructor --- --- --- //
		~PhoneBook()
		{
			std::cout << "PhoneBook object destroyed" << std::endl;
		};

		// --- --- --- Setter functions --- --- --- //
		void		add_contact();
		void		search_contact();
		void		display_contact();
		void		display_all_Contact();

		// --- --- --- Getter functions --- --- --- //
		int			get_index() const;
		int			get_contact_count() const;
		Contact	get_contact(int index) const;
		Contact*	get_Contact();
};

#endif
