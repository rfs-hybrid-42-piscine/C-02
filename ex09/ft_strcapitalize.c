/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:37:21 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:58:31 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn static int ft_isupper(char c)
 * @brief Checks if a character is an uppercase letter.
 * @param c The character to evaluate.
 * @return 1 (true) if uppercase, 0 (false) otherwise.
 */
static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * @fn static int ft_islower(char c)
 * @brief Checks if a character is a lowercase letter.
 * @param c The character to evaluate.
 * @return 1 (true) if lowercase, 0 (false) otherwise.
 */
static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * @fn static int ft_isdigit(char c)
 * @brief Checks if a character is a numeric digit.
 * @param c The character to evaluate.
 * @return 1 (true) if a digit ('0' to '9'), 0 (false) otherwise.
 */
static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * @fn static int ft_isalnum(char c)
 * @brief Checks if a character is alphanumeric.
 * @details Returns true if the character is an uppercase letter, lowercase
 * letter, or a numeric digit.
 * @param c The character to evaluate.
 * @return 1 (true) if alphanumeric, 0 (false) otherwise.
 */
static int	ft_isalnum(char c)
{
	return (ft_isupper(c) || ft_islower(c) || ft_isdigit(c));
}

/**
 * @fn char *ft_strcapitalize(char *str)
 * @brief Capitalizes the first letter of each word in a string.
 * @details A word is defined as a string of alphanumeric characters. Modifies
 * the first character of each word to uppercase and the rest to lowercase.
 * Safely handles empty strings to avoid out-of-bounds memory access.
 * @param str The string to be modified.
 * @return A pointer to the modified string.
 */
char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !(ft_isalnum(str[i - 1])))
		{
			if (ft_islower(str[i]))
				str[i] -= 'a' - 'A';
		}
		else
		{
			if (ft_isupper(str[i]))
				str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
