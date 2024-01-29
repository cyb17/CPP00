/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:47:26 by yachen            #+#    #+#             */
/*   Updated: 2024/01/29 18:58:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>

class Contact
{
	public: 
		void	fill_contact_info();
	protected:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	dark_secret;
};

class PhoneBook :// public Contact
{
	public:
		void		add(Contact &ref_contact);
		// void		search(Contact &list);
	private:
		Contact		list[8];
};

#endif