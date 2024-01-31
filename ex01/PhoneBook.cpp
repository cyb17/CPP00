/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/01/31 17:52:17 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	Contact::is_empty(std::string str)
{
	int	i = 0;
	
	if (str.empty())
		return (true);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (false);
		i++;
	}
	return (true);
}

std::string	Contact::get_info(std::string str)
{
	std::string	line;
	
	std::getline(std::cin, line);
	while (is_empty(line))
	{
		std::cout << "Information added can't be empty, try again." << std::endl;
		std::cout << str;
		std::getline(std::cin, line);
	}
	return (line);
}
void	Contact::fill_contact_info()
{	
	std::cout << "\nEnter informations of new contact.\n" << std::endl;
	std::cout << "First name : ";
	firstname = get_info("First name : ");
	std::cout << "Last name : ";
	lastname = get_info("Last name : ");
	std::cout << "Nick name : ";
	nickname = get_info("Nick name : ");
	std::cout << "Phone number : ";
	phonenumber = get_info("Phone number : ");
	std::cout << "Darkest secret : ";
	darkestsecret = get_info("Darkest secret : ");
}

void	Contact::name_format(std::string str) const
{
	std::string	extract;
	
	if (str.length() > 10)
	{
		extract = str.substr(0, 9);
		std::cout << std::setw(9) << std::right << extract << ".";
	}
	else
	{
		extract = str.substr(0, str.length());
		std::cout << std::setw(10) << std::right << extract;
	}
}

void	Contact::display_contact_name(int index) const
{
	std::cout << index << "|";
	name_format(firstname);
	std::cout << "|";
	name_format(lastname);
	std::cout << "|";
	name_format(nickname);
	std::cout << "|" << std::endl;
}

void	Contact::display_contact_info()
{
	std::cout << "First name : " << firstname << std::endl;
	std::cout << "Last name : " << lastname << std::endl;
	std::cout << "Nick name : " << nickname << std::endl;
	std::cout << "Phone number : " << phonenumber << std::endl;
	std::cout << "Darkest secret : " << darkestsecret << std::endl;
	std::cout << std::endl;
}

PhoneBook::PhoneBook() : count(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	list[count % 8].fill_contact_info();
		count++;
	std::cout << "New contact added successfully !" << std::endl;
}

int	PhoneBook::is_index(std::string &line) const
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
		list[i].display_contact_name(i);
	std::cout << std::endl;
	std::cout << "Enter contact's index to display it : ";
	std::getline(std::cin, line);
	std::cout << std::endl;
	while (!is_index(line))
	{
		line.clear();
		std::cout << "Index must be a number between 0-7, try again.\n" << "Enter a index : ";
		std::getline(std::cin, line);
	}
	index = line[0] - 48;
	list[index].display_contact_info();
}