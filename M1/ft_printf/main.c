/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:04:35 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/27 11:34:12 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf_Retry3/ft_printf.h"
#include <pthread.h>
#include <stdatomic.h> // per variable atòmica (opcional, però segura)


#define VERD "\033[0;32m"
#define VERMELL "\033[;31m"
#define RESET "\033[0m"


atomic_int carregant = 1;  // Variable global que indica si s'està carregant

// Funció que executa el thread de l'animació
void* animacio_carregant(void* arg) {
    const char spinner[] = {'|', '/', '-', '\\'};
    int i = 0;
    while (carregant) {
        printf("\033[9999HLoading... %c", spinner[i % 4]);  // \033[9999H mou a una línia molt baixa (efectivament l'última)
        fflush(stdout);
        i++;
        usleep(200000);  // 0.2 segons (200000 microsegons)
    }
    printf("\033[9999H\033[2K");  // Neteja la línia al final
    fflush(stdout);
    return NULL;
}

void	tests_otext(int n)
{
	if (n == 1)
	{
		// Doing Title
		printf("=== STARTING TESTS ===\n\n");
		printf("--- PART1: ONLY TEXT ---\n\n");
		printf("======================================\n");
		printf("TEST1-NORMAL TEXT\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("Hello, how are you?");
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("Hello, how are you?");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 2)
	{
		// Doing title
		printf("======================================\n");
		printf("TEST2-Only text with unused argument\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int mi_ret = ft_printf("Hello, world!", NULL);
		printf("\n");

		// Execcuting Original printf
		printf("Original: ");
		fflush(stdout);
		int ret_orig = printf("Hello, world!", NULL);
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
		printf("======================================\n");
	}
	else if (n == 3)
	{
		// Doing title
		printf("TEST3-Text with '%%' at the end\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int mi_ret = ft_printf("Percentage = %");
		printf("\n");

		// Execcuting Original printf
		printf("Original: ");
		fflush(stdout);
		int ret_orig = printf("Percentage = %");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
}

void	tests_char(int n)
{
	if (n == 4)
	{
		// Doing Title
		printf("======================================\n");
		printf("\n=== PART2: CHAR (%%c) ===\n\n");
		printf("======================================\n");
		printf("TEST1-Only 1 char arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("%c", 'A');
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("%c", 'A');
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 5)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST2-Text with 1 char arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("Hol%c, mundo!", 'a');
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("Hol%c, mundo!", 'a');
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 6)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST3-Various char args without text\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("%c%c%c", 'a', 'b', 'c');
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("%c%c%c", 'a', 'b', 'c');
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 7)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST4-Various char args with text\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("First %c, then %c, and finally %c", 'a', 'b', 'c');
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("First %c, then %c, and finally %c", 'a', 'b', 'c');
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 8)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST5-Various char arguments and text with '\\0' at middle\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("First %c, then \0%c, and finally %c", 'a', 'b', 'c');
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("First %c, then \0%c, and finally %c", 'a', 'b', 'c');
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 9)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST6-Various char args an text with 1 NULL arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("First %c, then %c, and finally %c", 'a', 'b', 0);
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("First %c, then %c, and finally %c", 'a', 'b', 0);
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
}

void	tests_str(int n)
{
	if (n == 10)
	{
		// Doing Title
		printf("======================================\n");
		printf("\n=== PART3: STRING (%%s) ===\n\n");
		printf("======================================\n");
		printf("TEST1-Only 1 string without args\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("Hola, mundo!");
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("Hola, mundo!");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);

	}
	else if (n == 11)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST2-Only 1 string arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("%s", "Hola, mundo!");
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("%s", "Hola, mundo!");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 12)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST3-string with 1 arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("%s, mundo!", "Hola");
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("%s, mundo!", "Hola");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 13)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST4-String with NULL arg\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("Hola, %s!", NULL);
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("Hola, %s!", NULL);
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
	else if (n == 14)
	{
		// Doing Title
		printf("======================================\n");
		printf("TEST5-Various string args\n\n");

		// Executing My ft_printf
		printf("ft_printf: ");
		fflush(stdout);
		int	mi_ret = ft_printf("%s, %s!", "Hola", "Mundo");
		printf("\n");

		// Executing Original printf
		printf("Original: ");
		fflush(stdout);
		int	ret_orig = printf("%s, %s!", "Hola", "mundo");
		printf("\n");

		// Comparing Results
		if (ret_orig == mi_ret)
			printf(VERD "Result: [OK]" RESET " (Return: %d)\n", ret_orig);
		else
			printf(VERMELL "Result: [KO]" RESET " (Orig: %d --- Mine: %d)\n", ret_orig, mi_ret);
	}
}

void	tests_manage(int n)
{
	if (n >= 1 && n <= 3)
		tests_otext(n);
	else if (n >= 4 && n <= 9)
		tests_char(n);
	else if (n >= 10 && n <= 14)
		tests_str(n);
}

int main() {
    pthread_t thread_animacio;

    // Crea el thread de l'animació
    pthread_create(&thread_animacio, NULL, animacio_carregant, NULL);

    // Aquí fas la tasca llarga (exemple: simulem un càlcul)
    printf("===STARTING TESTS===\n");
    for (int i = 1; i <= 20; i++) {
        usleep(500000);  // Simula treball
		tests_manage(i);
    }

    // Quan acabes la tasca...
    carregant = 0;  // Atura l'animació
    pthread_join(thread_animacio, NULL);  // Espera que acabi el thread
	printf("Done!");
    return 0;
}
