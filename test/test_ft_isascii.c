#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isascii(void)
{
	printf("\n\nTEST: tf_isascii");
	printf("\n* ************************************************************************** *\n");
	printf("Is Alpha Numeric, True:\n");
	printf("\tOriginal : my_fn = %d : %d\n", isascii('A'), ft_isascii('A'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('b'), ft_isascii('b'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('c'), ft_isascii('c'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('1'), ft_isascii('1'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('0'), ft_isascii('2'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('0'), ft_isascii('0'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('-'), ft_isascii('-'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('}'), ft_isascii('}'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii('!'), ft_isascii('!'));
	printf("\tOriginal : my_fn = %d : %d\n", isascii(' '), ft_isascii(' '));
}