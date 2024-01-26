/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:47:26 by yachen            #+#    #+#             */
/*   Updated: 2024/01/26 17:34:05 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>

class Contact
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	dark_secret;
};

class PhoneBook
{
	public:
		void		add(Contact &list, int &nbcontact);
		void		search(Contact &list);
		void		exit(void);
	private:
		static int	nbcontact;
		Contact		contactsList[8];
};

#endif