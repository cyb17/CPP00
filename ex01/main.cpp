/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:53:06 by yachen            #+#    #+#             */
/*   Updated: 2024/01/29 18:56:42 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	int			i = 0;
	int			oldone = 0;
	std::string	command;
	PhoneBook	phonebook;
	
	if (argc != 1)
	{
		std::cout << "Error: do not execute the program whith arguments." << std::endl;
		return (0);
	}
	while (1)
	{
		std::cout << "Please, enter a command" << std::endl;
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			phonebook.add(phonebook.list[i++]);
			if (i > 7)
				i = oldone++;
			if (oldone == 8)
				oldone = 0;
		}
		//else if (command == "SEARCH")
		//	search(Contact &list);
	}
	return (0);
}
