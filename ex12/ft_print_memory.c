/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:35:24 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 16:13:24 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn static void ft_print_addr(unsigned long addr, const char *hex)
 * @brief Prints a memory address in 16-character hexadecimal format.
 * @param addr The memory address to print.
 * @param hex A constant string containing the hexadecimal alphabet.
 */
static void	ft_print_addr(unsigned long addr, const char *hex)
{
	char	buffer[16];
	int		i;

	i = 16;
	while (--i >= 0)
	{
		buffer[i] = hex[addr % 16];
		addr /= 16;
	}
	write(1, buffer, 16);
}

/**
 * @fn static void ft_print_data(unsigned char *c, int size, const char *hex)
 * @brief Prints the hexadecimal content and printable characters.
 * @param c Pointer to the memory chunk cast to unsigned char.
 * @param size Number of bytes to print (up to 16).
 * @param hex A constant string containing the hexadecimal alphabet.
 */
static void	ft_print_data(unsigned char *c, int size, const char *hex)
{
	int		i;

	i = -1;
	while (++i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < size)
		{
			write(1, &hex[c[i] / 16], 1);
			write(1, &hex[c[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
	}
	write(1, " ", 1);
	i = -1;
	while (++i < size)
	{
		if (c[i] >= ' ' && c[i] <= '~')
			write(1, &c[i], 1);
		else
			write(1, ".", 1);
	}
}

/**
 * @fn void *ft_print_memory(void *addr, unsigned int size)
 * @brief Displays a memory area on screen.
 * @details Prints memory in 16-byte chunks per line, showing the hex memory
 * address, the raw hex data, and the printable characters.
 * @param addr The starting memory address to display.
 * @param size The number of bytes to display.
 * @return The starting memory address (addr).
 */
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	offset;
	unsigned int	chunk_size;
	const char		*hex;

	if (!addr || size == 0)
		return (addr);
	hex = "0123456789abcdef";
	offset = 0;
	while (offset < size)
	{
		if (size - offset >= 16)
			chunk_size = 16;
		else
			chunk_size = size - offset;
		ft_print_addr((unsigned long)addr + offset, hex);
		write(1, ":", 1);
		ft_print_data((unsigned char *)addr + offset, chunk_size, hex);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
