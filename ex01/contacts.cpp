/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:43:17 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/17 17:55:22 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void Contacts::set_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contacts::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

std::string Contacts:: get_name(void)
{
	return (this->_first_name);
}
