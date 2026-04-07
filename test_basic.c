#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	test_basic_percent_c(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%c - Single character\n");
	printf("Original: ");
	ret_orig = printf("%c", 'A');
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%c", 'A');
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_s(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%s - Single string\n");
	printf("Original: ");
	ret_orig = printf("%s", "Hello World");
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%s", "Hello World");
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_p(void)
{
	int	ret_orig;
	int	ret_ft;
	void	*ptr = (void *)0x12345678;

	printf("TEST: %%p - Pointer\n");
	printf("Original: ");
	ret_orig = printf("%p", ptr);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%p", ptr);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_i(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%i - Integer\n");
	printf("Original: ");
	ret_orig = printf("%i", 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%i", 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_d(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%d - Decimal\n");
	printf("Original: ");
	ret_orig = printf("%d", -42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%d", -42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_x(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%x - Lowercase hex\n");
	printf("Original: ");
	ret_orig = printf("%x", 255);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%x", 255);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_X(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%X - Uppercase hex\n");
	printf("Original: ");
	ret_orig = printf("%X", 255);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%X", 255);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_basic_percent_percent(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%%- Percent sign\n");
	printf("Original: ");
	ret_orig = printf("Percentage: %%");
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("Percentage: %%");
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}