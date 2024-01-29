/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:34:05 by yachen            #+#    #+#             */
/*   Updated: 2024/01/29 13:42:50 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			i = 0;
			while ((*argv)[i])
			{
				(*argv)[i] = toupper((*argv)[i]);
				i++;
			}
			std::cout << *argv++;
			if (*argv)
				std::cout << ' ';
			else 
				std::cout << '\n';
		}
	}
	return (0);
}