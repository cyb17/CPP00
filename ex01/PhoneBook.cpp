/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/01/31 12:44:03 by yachen           ###   ########.fr       */
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
	std::cout << "Please, enter informations of new contact.\n" << std::endl;
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

void	Contact::display_point(std::string str)
{
	std::string	extract = str.substr(0, 9);
	std::cout << std::setw(10) << std::right << extract << ".";
}

void	Contact::display_name(std::string str)
{
	std::string	extract = str.substr(0, str.length());
	std::cout << std::setw(10) << std::right << extract;
}

void	Contact::display_contact_name(int index)
{
	std::cout << index << "|";
	if (firstname.length() > 10)
		display_point(firstname);
	else
		display_name(firstname);
	std::cout << "|";
	if (lastname.length() > 10)
		display_point(lastname);
	else
		display_name(lastname);
	std::cout << "|";
	if (nickname.length() > 10)
		display_point(nickname);
	else
		display_name(nickname);
	std::cout << "|" << std::endl;
}

void	Contact::display_contact_info()
{
	std::cout << "First name : " << firstname << std::endl;
	std::cout << "Last name : " << lastname << std::endl;
	std::cout << "Nick name : " << nickname << std::endl;
	std::cout << "Phone number : " << phonenumber << std::endl;
	std::cout << "Darkest secret : " << darkestsecret << std::endl;
}

// PhoneBook::PhoneBook()
// {
// 	count = 0;
// 	oldone = 0;
// }

// PhoneBook::~PhoneBook()
// {
// }

void	PhoneBook::add()
{
	list[this->count++].fill_contact_info();
	if (this->count > 7)
		this->count = this->oldone++;
	if (this->oldone == 8)
		this->oldone = 0;
}

// void	PhoneBook::search()
// {
// 	// std::string	index;
// 	for (int i = 0; i < 8; i++)
// 		list[i].display_contact_name(i);
// 	// std::cout << "Please, enter the contact index to display: ";
// 	// std::cin >> index;
// 	// if ()
// 	// list[index].display_contact_info();
// }