#include "libft.h"
#include <stdio.h>

void	test_ft_isalpha(void)
{
	printf("Positive cases:\n");
	printf("ft_isalpha('%c') = %d\n",'A', ft_isalpha('A'));
	printf("ft_isalpha('%c') = %d\n",'Z', ft_isalpha('Z'));
	printf("ft_isalpha('%c') = %d\n",'a', ft_isalpha('a'));
	printf("ft_isalpha('%c') = %d\n",'z', ft_isalpha('z'));

	printf("\nNegative cases:\n");
	printf("ft_isalpha('%c') = %d\n", '1', ft_isalpha('1'));
	printf("ft_isalpha('%c') = %d\n", ' ', ft_isalpha(' '));
	printf("ft_isalpha('%c') = %d\n", '@', ft_isalpha('@'));
	printf("ft_isalpha('%c') = %d\n", '[', ft_isalpha('['));
	printf("ft_isalpha('%c') = %d\n", '`', ft_isalpha('`'));
	printf("ft_isalpha('%c') = %d\n", '}', ft_isalpha('}'));
	printf("ft_isalpha('%c') = %d\n", '\n', ft_isalpha('\n'));
	printf("ft_isalpha(0) = %d\n", ft_isalpha(0));
	printf("ft_isalpha(127) = %d\n", ft_isalpha(127));
}