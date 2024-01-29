/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:14:38 by yachen            #+#    #+#             */
/*   Updated: 2024/01/29 18:41:37 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::fill_contact_info()
{
	Contact	new_contact;

	std::cout << "Please, enter informations of new contact" << std::endl;
	std::cout << "First name : ";
	std::cin >> new_contact.firstname;
	std::cout << "Last name : ";
	std::cin >> new_contact.lastname;
	std::cout << "Nick name : ";
	std::cin >> new_contact.nickname;
	std::cout << "Phone number : ";
	std::cin >> new_contact.phonenumber;
	std::cout << "Darkest secret : ";
	std::cin >> new_contact.dark_secret;
}

void	PhoneBook::add(Contact &ref_contact)
{
	ref_contact.fill_contact_info();
}
