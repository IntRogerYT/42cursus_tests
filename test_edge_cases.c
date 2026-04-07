#include "./ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	test_percent_s_null(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%s with NULL pointer\n");
	printf("Original: ");
	ret_orig = printf("%s", NULL);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%s", NULL);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_p_null(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%p with NULL pointer\n");
	printf("Original: ");
	ret_orig = printf("%p", NULL);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%p", NULL);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_c_null(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%c with NULL (0) character\n");
	printf("Original: ");
	ret_orig = printf("%c", '\0');
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%c", '\0');
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_c_with_text_and_null(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: Text with %%c containing NULL in middle\n");
	printf("Original: ");
	ret_orig = printf("Hello\0World", 'A'); // This won't work as expected, let's do it properly
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("Hello\0World", 'A'); // Same issue
	printf("\n");
	
	// Let's do a proper test with embedded null in format string
	printf("Original: ");
	ret_orig = printf("Hel%clo\0World", 'l');
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("Hel%clo\0World", 'l');
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void	test_percent_s_empty(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%s with empty string\n");
	printf("Original: ");
	ret_orig = printf("%s", "");
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%s", "");
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void test_percent_i_edge(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%i with INT_MIN\n");
	printf("Original: ");
	ret_orig = printf("%i", INT_MIN);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%i", INT_MIN);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void test_percent_i_zero(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%i with zero\n");
	printf("Original: ");
	ret_orig = printf("%i", 0);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%i", 0);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void test_percent_x_zero(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%x with zero\n");
	printf("Original: ");
	ret_orig = printf("%x", 0);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%x", 0);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void test_percent_X_zero(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%X with zero\n");
	printf("Original: ");
	ret_orig = printf("%X", 0);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%X", 0);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}

void test_percent_p_zero(void)
{
	int	ret_orig;
	int	ret_ft;

	printf("TEST: %%p with zero pointer\n");
	printf("Original: ");
	ret_orig = printf("%p", (void *)0);
	printf("\n");
	printf("ft_printf: ");
	ret_ft = ft_printf("%p", (void *)0);
	printf("\n");
	if (ret_orig == ret_ft)
		printf("\033[0;32mResult: [OK]\033[0m (Return: %d)\n\n", ret_orig);
	else
		printf("\033[0;31mResult: [KO]\033[0m (Orig: %d --- Mine: %d)\n\n", ret_orig, ret_ft);
}