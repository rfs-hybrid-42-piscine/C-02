/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:11:13 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 16:11:15 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX00
# define EX01
# define EX02
# define EX03
# define EX04
# define EX05
# define EX06
# define EX07
# define EX08
# define EX09
# define EX10
# define EX11
# define EX12
#endif

/* --- Prototypes --- */
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);

/* --- Main Testing Function --- */
int	main(void)
{
#ifdef EX00
	char dest0[20];
	char src0[] = "Hello World!";
	printf("--- EX00: ft_strcpy ---\n");
	ft_strcpy(dest0, src0);
	printf("Copied: %s\n\n", dest0);
#endif

#ifdef EX01
	char dest1[20] = "XXXXXXXXXXXXX";
	char src1[] = "Hello";
	printf("--- EX01: ft_strncpy ---\n");
	ft_strncpy(dest1, src1, 3);
	printf("Copied 3 chars: %s\n", dest1);
	ft_strncpy(dest1, src1, 10);
	printf("Copied 10 chars (padded): %s\n\n", dest1);
#endif

#ifdef EX02
	printf("--- EX02: ft_str_is_alpha ---\n");
	printf("'Hello' -> %d (Expected 1)\n", ft_str_is_alpha("Hello"));
	printf("'Hello42' -> %d (Expected 0)\n\n", ft_str_is_alpha("Hello42"));
#endif

#ifdef EX03
	printf("--- EX03: ft_str_is_numeric ---\n");
	printf("'12345' -> %d (Expected 1)\n", ft_str_is_numeric("12345"));
	printf("'123a5' -> %d (Expected 0)\n\n", ft_str_is_numeric("123a5"));
#endif

#ifdef EX04
	printf("--- EX04: ft_str_is_lowercase ---\n");
	printf("'hello' -> %d (Expected 1)\n", ft_str_is_lowercase("hello"));
	printf("'Hello' -> %d (Expected 0)\n\n", ft_str_is_lowercase("Hello"));
#endif

#ifdef EX05
	printf("--- EX05: ft_str_is_uppercase ---\n");
	printf("'HELLO' -> %d (Expected 1)\n", ft_str_is_uppercase("HELLO"));
	printf("'HELLo' -> %d (Expected 0)\n\n", ft_str_is_uppercase("HELLo"));
#endif

#ifdef EX06
	printf("--- EX06: ft_str_is_printable ---\n");
	printf("'Hello' -> %d (Expected 1)\n", ft_str_is_printable("Hello"));
	printf("'Hello\\n' -> %d (Expected 0)\n\n", ft_str_is_printable("Hello\n"));
#endif

#ifdef EX07
	char str7[] = "hello 42 world!";
	printf("--- EX07: ft_strupcase ---\n");
	printf("Before: %s\n", str7);
	printf("After : %s\n\n", ft_strupcase(str7));
#endif

#ifdef EX08
	char str8[] = "HELLO 42 WORLD!";
	printf("--- EX08: ft_strlowcase ---\n");
	printf("Before: %s\n", str8);
	printf("After : %s\n\n", ft_strlowcase(str8));
#endif

#ifdef EX09
	char str9[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("--- EX09: ft_strcapitalize ---\n");
	printf("Before: %s\n", str9);
	printf("After : %s\n\n", ft_strcapitalize(str9));
#endif

#ifdef EX10
	char dest10[20] = "XXXXXXXXXXXXX";
	char src10[] = "Hello World!";
	printf("--- EX10: ft_strlcpy ---\n");
	unsigned int len = ft_strlcpy(dest10, src10, 6);
	printf("Copied with size 6: '%s'\n", dest10);
	printf("Returned Length: %u (Expected length of src: 12)\n\n", len);
#endif

#ifdef EX11
	char str11[] = "Coucou\ntu vas bien ?";
	printf("--- EX11: ft_putstr_non_printable ---\n");
	printf("Expected: Coucou\\0atu vas bien ?\n");
	printf("Result  : ");
	ft_putstr_non_printable(str11);
	printf("\n\n");
#endif

#ifdef EX12
	char str12[] = "Bonjour les aminches\t\n\tc  est fou\ntout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	printf("--- EX12: ft_print_memory ---\n");
	ft_print_memory(str12, 92);
	printf("\n");
#endif

	return (0);
}
