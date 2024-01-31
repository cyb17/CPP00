/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:53:06 by yachen            #+#    #+#             */
/*   Updated: 2024/01/31 12:39:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// int	main(int argc, char **argv)
// {
// 	std::string	command;
// 	PhoneBook	phonebook;
	
// 	if (argc != 1)
// 	{
// 		(void)argv;
// 		std::cout << "Error: do not execute the program whith arguments." << std::endl;
// 		return (0);
// 	}
// 	while (1)
// 	{
// 		std::cout << "Please, enter a command :" << std::endl;
// 		std::cin >> command;
// 		if (command == "EXIT")
// 			break;
// 		else if (command == "ADD")
// 			phonebook.add();
// 		else if (command == "SEARCH")
// 			phonebook.search();
// 		else
// 			std::cout << "Command not valid, try again." << std::endl;
// 	}
// 	return (0);
// }

int	main()
{
	Contact	contact;
	
	contact.fill_contact_info();
	contact.display_contact_name(0);
	contact.display_contact_info();
	return (0);
}