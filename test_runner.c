#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

// Forward declarations of test functions from test_basic.c
void	test_basic_percent_c(void);
void	test_basic_percent_s(void);
void	test_basic_percent_p(void);
void	test_basic_percent_i(void);
void	test_basic_percent_d(void);
void	test_basic_percent_x(void);
void	test_basic_percent_X(void);
void	test_basic_percent_percent(void);

// Forward declarations of test functions from test_edge_cases.c
void	test_percent_s_null(void);
void	test_percent_p_null(void);
void	test_percent_c_null(void);
void	test_percent_c_with_text_and_null(void);
void	test_percent_s_empty(void);
void test_percent_i_edge(void);
void test_percent_i_zero(void);
void test_percent_x_zero(void);
void test_percent_X_zero(void);
void test_percent_p_zero(void);

// Forward declarations of test functions from test_invalid.c
void	test_invalid_percent(void);
void	test_multiple_invalid(void);
void	test_mixed_valid_invalid(void);
void	test_percent_with_n(void);
void	test_percent_star_width(void);
void	test_percent_star_precision(void);
void	test_percent_hash_x(void);
void	test_percent_hash_X(void);
void	test_percent_plus_space(void);

// Forward declarations of test functions from test_precision.c
void	test_percent_dot_precision_s(void);
void	test_percent_dot_precision_i(void);
void	test_percent_dot_precision_x(void);
void	test_percent_width_minus(void);
void	test_percent_width_zero_padding(void);
void	test_percent_complex_format(void);

int	main(void)
{
	printf("=== STARTING FT_PRINTF TESTS ===\n\n");
	
	// Basic format specifiers
	test_basic_percent_c();
	test_basic_percent_s();
	test_basic_percent_p();
	test_basic_percent_i();
	test_basic_percent_d();
	test_basic_percent_x();
	test_basic_percent_X();
	test_basic_percent_percent();
	
	// Edge cases
	test_percent_s_null();
	test_percent_p_null();
	test_percent_c_null();
	test_percent_c_with_text_and_null();
	test_percent_s_empty();
	test_percent_i_edge();
	test_percent_i_zero();
	test_percent_x_zero();
	test_percent_X_zero();
	test_percent_p_zero();
	
	// Invalid format specifiers
	test_invalid_percent();
	test_multiple_invalid();
	test_mixed_valid_invalid();
	test_percent_with_n();
	test_percent_star_width();
	test_percent_star_precision();
	test_percent_hash_x();
	test_percent_hash_X();
	test_percent_plus_space();
	
	// Precision and width tests
	test_percent_dot_precision_s();
	test_percent_dot_precision_i();
	test_percent_dot_precision_x();
	test_percent_width_minus();
	test_percent_width_zero_padding();
	test_percent_complex_format();
	
	printf("=== ALL TESTS COMPLETED ===\n");
	return (0);
}