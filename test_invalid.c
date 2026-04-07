#include "../ft_printf.h"
#include <stdio.h>

void	test_invalid_percent(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: Invalid format specifier %%z\n");
	printf("Original: ");
	ret_orig = printf("%z", 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%z", 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_multiple_invalid(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: Multiple invalid format specifiers %%z%%y\n");
	printf("Original: ");
	ret_orig = printf("%z%y", 42, 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%z%y", 42, 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_mixed_valid_invalid(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: Mixed valid and invalid %%d%%z%%s\n");
	printf("Original: ");
	ret_orig = printf("%d%z%s", 42, 42, "test");
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%d%z%s", 42, 42, "test");
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_with_n(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%n specifier (should not print anything but write count)\n");
	printf("Original: ");
	ret_orig = printf("%n", &ret_orig); // This is tricky, let's just see what happens
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%n", &ret_ft);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_star_width(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%*d with width specifier\n");
	printf("Original: ");
	ret_orig = printf("%*d", 5, 42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%*d", 5, 42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_star_precision(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%. *f with precision specifier\n");
	printf("Original: ");
	ret_orig = printf("%. *f", 3, 3.14159);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%. *f", 3, 3.14159);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_hash_x(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %#x with hash flag\n");
	printf("Original: ");
	ret_orig = printf("%#x", 255);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%#x", 255);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_hash_X(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %#X with hash flag\n");
	printf("Original: ");
	ret_orig = printf("%#X", 255);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%#X", 255);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_plus_space(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %+d and % d flags\n");
	printf("Original: ");
	ret_orig = printf("%+d % d", 42, -42);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%+d % d", 42, -42);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}