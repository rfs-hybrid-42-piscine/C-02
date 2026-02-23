/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:02:29 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:43:41 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_str_is_numeric(char *str)
 * @brief Checks if a string contains only numeric digits.
 * @details Evaluates each character to ensure it falls within the ASCII
 * range of '0' to '9'.
 * @param str The string to evaluate.
 * @return 1 if the string is empty or completely numeric, 0 otherwise.
 */
int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
