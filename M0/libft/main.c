/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:46:41 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/22 14:53:35 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdio.h>
#include <string.h>

void	test_isalpha(void)
{
	int	correct = 0;
	int	test1 = ft_isalpha('a');
	int	test2 = ft_isalpha('B');
	int	test3 = ft_isalpha('1');
	int	test4 = ft_isalpha('@');

	if (test1 == 'a'){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 == 'B'){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_isdigit(void)
{
	int	correct = 0;
	int	test1 = ft_isdigit('1');
	int	test2 = ft_isdigit('a');
	int	test3 = ft_isdigit('@');
	int	test4 = ft_isdigit(0);

	if (test1 != 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_isalnum(void)
{
	int	correct = 0;
	int	test1 = ft_isalnum('1');
	int	test2 = ft_isalnum('a');
	int	test3 = ft_isalnum('A');
	int	test4 = ft_isalnum('@');

	if (test1 != 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 != 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 != 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");

}
void	test_isascii(void)
{
	int	correct = 0;
	int	test1 = ft_isascii(1);
	int	test2 = ft_isascii(88);
	int	test3 = ft_isascii(127);
	int	test4 = ft_isascii(0);

	if (test1 == 1){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 == 88){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 == 127){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_isprint(void)
{
	int	correct = 0;
	int	test1 = ft_isprint(' ');
	int	test2 = ft_isprint('~');
	int	test3 = ft_isprint(128);
	int	test4 = ft_isprint(0);

	if (test1 != 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 != 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_strlen(void)
{
	int	correct = 0;
	int	test1 = ft_strlen("Hola");
	int	test2 = ft_strlen("Hola, mundo");
	int	test3 = ft_strlen(" ");
	int	test4 = ft_strlen("");

	if (test1 == 4){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (test2 == 11){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (test3 == 1){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (test4 == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_memset(void)
{
	int		correct = 0;
	char	str1[20] = "Hello, World!";
	char	str2[20] = "Buenos, dias!";
	char	str3[20] = "Hola amigos";
	char	str4[20] = "@Amigos";
	char	*test1 = ft_memset(str1, 'A', 5);
	char	*test2 = ft_memset(str2, 'B', 6);
	char	*test3 = ft_memset(str3, ' ', 5);
	char	*test4 = ft_memset(str4, '@', 6);

	if (strncmp(test1, "AAAAA", 5) == 0) { printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (strncmp(test2, "BBBBBB", 6) == 0) { printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (strncmp(test3, "     ", 5) == 0) { printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (strncmp(test4, "@@@@@@", 6) == 0) { printf("TEST1: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
/*
void	test_bzero(void)
{
	int	correct = 0;
	char	str1[20] = "Hello, World!";
	char	str2[20] = "Buenos, dias!";
	char	str3[20] = "Hola amigos";
	char	str4[20] = "@Amigos";
	ft_bzero(str1, 5);
	ft_bzero(str2, 6);
	ft_bzero(str3, 5);
	ft_bzero(str4, 6);
	if (str1[4] == 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (str2[5] == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (str3[4] == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (str4[5] == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
*/
void	test_memcpy(void)
{
	int		correct = 0;
	char	str1[20] = "Hello, World!";
	char	str2[20] = "Buenos, dias!";
	char	str3[20] = "Hola amigos";
	char	str4[20] = "@Amigos";
	char	dest1[20] = "Holaa, mundo!";
	char	dest2[20] = "Hello, world!";
	char	dest3[20] = "@Amigos";
	char	dest4[20] = "Hola amigos";

	ft_memcpy(dest1, str1, 5);
	ft_memcpy(dest2, str2, 6);
	ft_memcpy(dest3, str3, 10);
	ft_memcpy(dest4, str4, 11);
	if (strncmp(dest1, str1, 5) == 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (strncmp(dest2, str2, 6) == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (strncmp(dest3, str3, 10) == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (strncmp(dest4, str4, 11) == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_memmove(void)
{
	int     correct = 0;
	char    str1[20] = "Hello, World!";
	char    str2[20] = "Buenos, dias!";
	char    str3[20] = "Hola amigos";
	char    str4[20] = "@Amigos";
	char    dest1[20] = "Holaa, mundo!";
	char    dest2[20] = "Hello, world!";
	char    dest3[20] = "@Amigos";
	char    dest4[20] = "Hola amigos";

	ft_memmove(dest1, str1, 5);
	ft_memmove(dest2, str2, 6);
	ft_memmove(dest3, str3, 10);
	ft_memmove(dest4, str4, 11);
	if (strncmp(dest1, str1, 5) == 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (strncmp(dest2, str2, 6) == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (strncmp(dest3, str3, 10) == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (strncmp(dest4, str4, 11) == 0){ printf("TEST4: OK\n"); correct++;} else printf("TEST4: ERROR\n");
	if (correct == 4) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");

}
void	test_strlcpy(void)
{
	int		correct = 0;
	char	src1[20] = "Hola, mundo";
	char	dest1[20] = "Hello, world!";
	char	src2[20] = "Hola amigos";
	char	dest2[20] = "Amigos Hola";
	char	src3[20] = "Buenas";
	char	dest3[20] = "Amigos";

	ft_strlcpy(dest1, src1, 14);
	ft_strlcpy(dest2, src2, 12);
	ft_strlcpy(dest3, src3, 7);
	if (strcmp(dest1, src1) == 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (strcmp(dest2, src2) == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (strcmp(dest3, src3) == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (correct == 3) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_strlcat(void)
{
	int	correct = 0;
	char	src1[25] = "Hola, mundo";
	char	dst1[25] = "Hello, world";
	char	src2[25] = "Hola amigos";
	char	dst2[25] = "Amigos hola";
	char	src3[25] = "amigos!";
	char	dst3[25] = "Buenas, ";
	
	ft_strlcat(dst1, src1, 24);
	ft_strlcat(dst2, src2, 23);
	ft_strlcat(dst3, src3, 16);
	if (strcmp(dst1, "Hello, worldHola, mundo") == 0){ printf("TEST1: OK\n"); correct++;} else printf("TEST1: ERROR\n");
	if (strcmp(dst2, "Amigos holaHola amigos") == 0){ printf("TEST2: OK\n"); correct++;} else printf("TEST2: ERROR\n");
	if (strcmp(dst3, "Buenas, amigos!") == 0){ printf("TEST3: OK\n"); correct++;} else printf("TEST3: ERROR\n");
	if (correct == 3) printf("Resultado: CORRECTO!!!"); else printf("Resultado: INCORRECTO...");
}
void	test_strchr(void)
{
	int			correct = 0;
	correct++;
	const char	*str = "tripouille";
	printf("%s", ft_strchr(str, 'l'));
}
void	test_split(void)
{
	char	*str = "Hola que tal";
	char	c = ' ';
	char	**matrix = ft_split(str, c);
	size_t	i = 0;

	while (matrix[i] != NULL)
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}
void	test_substr(void)
{
	char	*str = "dsadasdadsadsadadsadadsadasadasdsadsadasdsada";
	size_t start = 0;
	size_t len = 1;

	ft_substr(str, start, len);
}
int	main(int argc, char **argv)
{
	char	*nombre_archivo;

	nombre_archivo = argv[1];
	if (argc != 2)
	{
		printf("Error! Tienes que indicar un unico archivo para testear, ni mas ni menos!");
		return(0);
	}
	if (strcmp(nombre_archivo, "ft_isalpha.c") == 0)
		test_isalpha();
	else if (strcmp(nombre_archivo, "ft_isdigit.c") == 0)
		test_isdigit();
	else if (strcmp(nombre_archivo, "ft_isalnum.c") == 0)
		test_isalnum();
	else if (strcmp(nombre_archivo, "ft_isascii.c") == 0)
		test_isascii();
	else if (strcmp(nombre_archivo, "ft_isprint.c") == 0)
		test_isprint();
	else if (strcmp(nombre_archivo, "ft_strlen.c") == 0)
		test_strlen();
	else if (strcmp(nombre_archivo, "ft_memset.c") == 0)
		test_memset();
	//else if (strcmp(nombre_archivo, "ft_bzero.c") == 0)
	//	test_bzero();
	else if (strcmp(nombre_archivo, "ft_memcpy.c") == 0)
		test_memcpy();
	else if (strcmp(nombre_archivo, "ft_memmove.c") == 0)
		test_memmove();
	else if (strcmp(nombre_archivo, "ft_strlcpy.c") == 0)
		test_strlcpy();
	else if (strcmp(nombre_archivo, "ft_strlcat.c") == 0)
		test_strlcat();
	else if (strcmp(nombre_archivo, "ft_strchr.c") == 0)
		test_strchr();
	else if (strcmp(nombre_archivo, "ft_split.c") == 0)
		test_split();
	else if (strcmp(nombre_archivo, "ft_substr.c") == 0)
		test_substr();
	return (0);
}
