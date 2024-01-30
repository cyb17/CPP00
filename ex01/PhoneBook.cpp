/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/01/30 12:52:57 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::fill_contact_info()
{
	std::cout << "Please, enter informations of new contact." << std::endl;
	std::cout << "First name : ";
	std::cin >> firstname;
	std::cout << "Last name : ";
	std::cin >> lastname;
	std::cout << "Nick name : ";
	std::cin >> nickname;
	std::cout << "Phone number : ";
	std::cin >> phonenumber;
	std::cout << "Darkest secret : ";
	std::cin >> dark_secret;
}

void	Contact::display_point(std::string &str) const
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".";
}

void	Contact::display_name(std::string &str) const
{
	for (int i = 0; i < 10; i++)
		std::cout << str[i];
}

void	Contact::display_contact_name(int index)
{
	std::cout << index << "|";
	if (firstname.length() > 10)
		display_point(firstname);
	else
		display_name(firstname);
	std::cout << "|";
	if (firstname.length() > 10)
		display_point(lastname);
	else
		display_name(lastname);
	std::cout << "|";
	if (firstname.length() > 10)
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
	std::cout << "Darkest secret : " << dark_secret << std::endl;
}

void	PhoneBook::add()
{
	list[count++].fill_contact_info();
	if (count > 7)
		count = oldone++;
	if (oldone == 8)
		oldone = 0;
}

void	PhoneBook::search()
{
	std::string	index;
	for (int i = 0; i < 8; i++)
		list[i].display_contact_name(i);
	std::cout << "Please, enter the contact index to display: ";
	std::cin >> index;
	if ()
	list[index].display_contact_info();
}