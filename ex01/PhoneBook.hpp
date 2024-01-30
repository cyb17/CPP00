/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:47:26 by yachen            #+#    #+#             */
/*   Updated: 2024/01/30 12:50:43 by yachen           ###   ########.fr       */
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
		void	display_point(std::string &str) const;
		void	display_name(std::string &str) const;
		void	display_contact_name(int index) const;
		void	display_contact_info();
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	dark_secret;
};

class PhoneBook
{
	public:
		void		add();
		void		search();
	private:
		Contact		list[8];
		static int	count;
		static int	oldone;
};

#endif