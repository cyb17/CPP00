/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:53:17 by yachen            #+#    #+#             */
/*   Updated: 2024/02/02 15:07:14 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>

class Contact
{
	public:
		bool		isEmpty(std::string str);
		std::string	getInfo(std::string str); 
		void		nameFormat(std::string str) const;
		void		fillContactInfo();
		void		displayContactName(int index) const;
		void		displayContactInfo();
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif