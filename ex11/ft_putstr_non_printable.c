/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:11:41 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 15:58:12 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn static void ft_xdigit(unsigned char c)
 * @brief Helper function to print a character in hexadecimal format.
 * @param c The character to convert and print.
 */
static void	ft_xdigit(unsigned char c)
{
	char	*xdigit;

	xdigit = "0123456789abcdef";
	write(1, &xdigit[c / 16], 1);
	write(1, &xdigit[c % 16], 1);
}

/**
 * @fn void ft_putstr_non_printable(char *str)
 * @brief Displays a string, replacing non-printable characters with hex.
 * @details Iterates through the string. If a character falls outside the
 * printable ASCII range, it prints a backslash followed by its lowercase
 * hexadecimal value (e.g., '\0a' for newline).
 * @param str The string to display.
 */
void	ft_putstr_non_printable(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			write(1, "\\", 1);
			ft_xdigit((unsigned char)*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
