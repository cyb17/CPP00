/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/01/30 11:42:30 by yachen           ###   ########.fr       */
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

void	Contact::display_contact_name()
{
	std::cout << firstname << "|" << lastname << "|" << nickname << "|" <<std::endl;
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
	int	i;
	for (i = 0; i < 8; i++)
	{
		std::cout << i << "|";
		list[i].display_contact_name();
	}
	std::cout << "Please, enter the contact index to display: ";
	std::cin >> i;
	list[i].display_contact_info();
	
}