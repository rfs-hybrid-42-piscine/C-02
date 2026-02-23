/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:48:03 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:43:27 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_str_is_alpha(char *str)
 * @brief Checks if a string contains only alphabetical characters.
 * @details Evaluates each character against the ASCII boundaries for upper
 * and lowercase letters. Includes a check against NULL pointers.
 * @param str The string to evaluate.
 * @return 1 if the string is empty or completely alphabetical, 0 otherwise.
 */
int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
