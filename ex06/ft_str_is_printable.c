/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:47:39 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:44:10 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_str_is_printable(char *str)
 * @brief Checks if a string contains only printable characters.
 * @details Evaluates characters to ensure they fall within the visible ASCII
 * range of space (32) to tilde (126).
 * @param str The string to evaluate.
 * @return 1 if the string is empty or completely printable, 0 otherwise.
 */
int	ft_str_is_printable(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
