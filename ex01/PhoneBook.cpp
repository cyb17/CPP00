/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/02/02 15:08:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	list[count % 8].fillContactInfo();
		count++;
	std::cout << "New contact added successfully !" << std::endl;
}

int	PhoneBook::isIndex(std::string &line) const
{	
	if (line.empty() || line.length() > 1 || std::isdigit(line[0]) == false
		|| line[0] - 48 > 7)
		return (false);
	return (true);
}

void	PhoneBook::search()
{
	std::string	line;
	int			index;
	
	for (int i = 0; i < 8; i++)
		list[i].displayContactName(i);
	std::cout << std::endl;
	std::cout << "Enter contact's index to display it : ";
	std::getline(std::cin, line);
	std::cout << std::endl;
	while (!isIndex(line))
	{
		line.clear();
		std::cout << "Index must be a number between 0-7, try again.\n" << "Enter a index : ";
		std::getline(std::cin, line);
	}
	index = line[0] - 48;
	list[index].displayContactInfo();
}