/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:25:54 by sprodatu          #+#    #+#             */
/*   Updated: 2024/08/18 08:09:54 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	/**
	 * check if there is no argument => print * LOUD AND UNBEARABLE FEEDBACK NOISE *
	 * else if there is any, loop through the arguments and print them in uppercase
	 */
	if (argc == 1)
	{
		// endl is prefered over '\n' especially when using variables
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
        }
		std::cout << std::endl;
	}
	return (0);
}
