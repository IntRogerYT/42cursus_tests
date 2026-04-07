#include "../ft_printf.h"
#include <stdio.h>

void	test_percent_dot_precision_s(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%.3s precision for string\n");
	printf("Original: ");
	ret_orig = printf("%.3s", "Hello World");
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%.3s", "Hello World");
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_dot_precision_i(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%.5d precision for integer\n");
	printf("Original: ");
	ret_orig = printf("%.5d", 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%.5d", 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_dot_precision_x(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%.4x precision for hexadecimal\n");
	printf("Original: ");
	ret_orig = printf("%.4x", 255);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%.4x", 255);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_width_minus(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %-10d left-justified\n");
	printf("Original: ");
	ret_orig = printf("%-10d", 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%-10d", 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_width_zero_padding(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %010d zero-padded\n");
	printf("Original: ");
	ret_orig = printf("%010d", 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%010d", 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_complex_format(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: Complex format %+010.5d\n");
	printf("Original: ");
	ret_orig = printf("%+010.5d", -42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%+010.5d", -42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}