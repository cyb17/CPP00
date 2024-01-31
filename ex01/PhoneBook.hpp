/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:47:26 by yachen            #+#    #+#             */
/*   Updated: 2024/01/31 14:53:01 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>

class Contact
{
	public:
		bool		is_empty(std::string str);
		std::string	get_info(std::string str); 
		void		name_format(std::string str) const;
		void		fill_contact_info();
		void		display_contact_name(int index) const;
		void		display_contact_info();
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		int			is_index(std::string &line) const;
		void		add();
		void		search();
	private:
		Contact		list[8];
		int			count;
		int			oldone;
};

#endif