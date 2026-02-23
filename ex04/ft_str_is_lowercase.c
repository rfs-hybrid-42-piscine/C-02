/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:02:21 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:43:51 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_str_is_lowercase(char *str)
 * @brief Checks if a string contains only lowercase alphabetical characters.
 * @details Evaluates each character against the ASCII boundaries 'a' and 'z'.
 * @param str The string to evaluate.
 * @return 1 if the string is empty or completely lowercase, 0 otherwise.
 */
int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
