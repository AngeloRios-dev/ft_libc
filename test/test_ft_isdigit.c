#include "libft.h"
#include <stdio.h>

void	test_ft_isdigit(void)
{
	printf("\nIs digit:\n");
	printf("ft_isdigit('%c') = %d\n", '1', ft_isdigit('1'));
	printf("ft_isdigit('%c') = %d\n", '2', ft_isdigit('2'));
	printf("ft_isdigit('%c') = %d\n", '3', ft_isdigit('3'));
	printf("ft_isdigit('%c') = %d\n", '4', ft_isdigit('4'));
	printf("ft_isdigit('%c') = %d\n", '5', ft_isdigit('5'));
	printf("ft_isdigit('%c') = %d\n", '6', ft_isdigit('6'));
	printf("ft_isdigit('%c') = %d\n", '7', ft_isdigit('7'));
	printf("ft_isdigit('%c') = %d\n", '8', ft_isdigit('8'));
	printf("ft_isdigit('%c') = %d\n", '9', ft_isdigit('9'));
	printf("ft_isdigit('%c') = %d\n", '0', ft_isdigit('0'));

	printf("\nNot digit:\n");
	printf("ft_isdigit('%c') = %d\n", 'a', ft_isdigit('a'));
	printf("ft_isdigit('%c') = %d\n", 'x', ft_isdigit('x'));
	printf("ft_isdigit('%c') = %d\n", '!', ft_isdigit('!'));
	printf("ft_isdigit('%c') = %d\n", '-', ft_isdigit('-'));
	printf("ft_isdigit('%c') = %d\n", '}', ft_isdigit('}'));
	printf("ft_isdigit('%c') = %d\n", ']', ft_isdigit(']'));
	printf("ft_isdigit('%c') = %d\n", ')', ft_isdigit(')'));
	printf("ft_isdigit('%c') = %d\n", '-', ft_isdigit('-'));
	printf("ft_isdigit('%c') = %d\n", '.', ft_isdigit('.'));
	printf("ft_isdigit('%c') = %d\n", ',', ft_isdigit(','));
}