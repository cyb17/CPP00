/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:53:06 by yachen            #+#    #+#             */
/*   Updated: 2024/01/31 14:22:04 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string	command;
	PhoneBook	phonebook;
	
	if (argc != 1)
	{
		(void)argv;
		std::cout << "Error: do not execute the program whith arguments." << std::endl;
		return (0);
	}
	std::cout << "Welcome to my awesome PhoneBook !" << std::endl;
	std::cout << "Usable commands : ADD, SEARCH, EXIT" <<std::endl; 
	while (1)
	{
		std::cout << "\nPlease, enter a command : ";
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "Exit successfully !" << std::endl;
			break;
		}
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Command not exist, try again." << std::endl;
		command.clear();
	}
	return (0);
}
