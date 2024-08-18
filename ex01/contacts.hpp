/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:39:23 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/17 17:52:21 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include<iostream>

class Contacts
{
	// Its good practice  to use _ starting for variable names in private
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		int			_index;
	
	public:
		// setter
		void	set_name(std::string first_name);
		void	set_last_name(std::string last_name);

		// getter
		std::string get_name();
		std::string get_last_name();
		
}

#endif

// first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.
