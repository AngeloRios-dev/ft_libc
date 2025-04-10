#include "libft.h"
#include <stdio.h>

void	test_ft_isdigit(void)
{
	printf("\nIs digit:\n");
	printf("ft_isdigit('%c') = %d\n", '1', ft_isdigit('1'));
	printf("ft_isdigit('%c') = %d\n", 'a', ft_isdigit('a'));
}