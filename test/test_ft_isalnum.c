#include "libft.h"
#include <stdio.h>

void test_ft_isalnum(void)
{
	printf("\n\nTEST: tf_isalnum");
	printf("\n* ************************************************************************** *\n");
	printf("Is Alpha Numeric, True:\n");
	printf("ft_isalnum('%c') = %d\n",'A', ft_isalnum('A'));
	printf("ft_isalnum('%c') = %d\n",'b', ft_isalnum('b'));
	printf("ft_isalnum('%c') = %d\n",'c', ft_isalnum('c'));
	printf("ft_isalnum('%c') = %d\n",'1', ft_isalnum('1'));
	printf("ft_isalnum('%c') = %d\n",'0', ft_isalnum('2'));
	printf("ft_isalnum('%c') = %d\n",'0', ft_isalnum('0'));
	printf("\nIs Alpha Numeric, False:\n");
	printf("ft_isalnum('%c') = %d\n",'-', ft_isalnum('-'));
	printf("ft_isalnum('%c') = %d\n",'}', ft_isalnum('}'));
	printf("ft_isalnum('%c') = %d\n",'!', ft_isalnum('!'));
	printf("ft_isalnum('%c') = %d\n",' ', ft_isalnum(' '));
}