/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:53:12 by yachen            #+#    #+#             */
/*   Updated: 2024/02/02 15:07:57 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::isEmpty(std::string str)
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

std::string	Contact::getInfo(std::string str)
{
	std::string	line;
	
	std::getline(std::cin, line);
	while (isEmpty(line))
	{
		std::cout << "Information added can't be empty, try again." << std::endl;
		std::cout << str;
		std::getline(std::cin, line);
	}
	return (line);
}
void	Contact::fillContactInfo()
{	
	std::cout << "\nEnter informations of new contact.\n" << std::endl;
	std::cout << "First name : ";
	firstName = getInfo("First name : ");
	std::cout << "Last name : ";
	lastName = getInfo("Last name : ");
	std::cout << "Nick name : ";
	nickName = getInfo("Nick name : ");
	std::cout << "Phone number : ";
	phoneNumber = getInfo("Phone number : ");
	std::cout << "Darkest secret : ";
	darkestSecret = getInfo("Darkest secret : ");
}

void	Contact::nameFormat(std::string str) const
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

void	Contact::displayContactName(int index) const
{
	std::cout << index << "|";
	nameFormat(firstName);
	std::cout << "|";
	nameFormat(lastName);
	std::cout << "|";
	nameFormat(nickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayContactInfo()
{
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << lastName << std::endl;
	std::cout << "Nick name : " << nickName << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "Darkest secret : " << darkestSecret << std::endl;
	std::cout << std::endl;
}
