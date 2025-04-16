#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isalnum(void)
{
	printf("\n\nTEST: tf_isalnum");
	printf("\n* ************************************************************************** *\n");
	printf("Is Alpha Numeric, True:\n");
	printf("\t('A') = %d : %d\n", isalnum('A'), ft_isalnum('A'));
	printf("\t('b') = %d : %d\n", isalnum('b'), ft_isalnum('b'));
	printf("\t('c') = %d : %d\n", isalnum('c'), ft_isalnum('c'));
	printf("\t('1') = %d : %d\n", isalnum('1'), ft_isalnum('1'));
	printf("\t('0') = %d : %d\n", isalnum('0'), ft_isalnum('2'));
	printf("\t('0') = %d : %d\n", isalnum('0'), ft_isalnum('0'));
	printf("\nIs Alpha Numeric, False:\n");
	printf("\t('-') = %d : %d\n", isalnum('-'), ft_isalnum('-'));
	printf("\t('}') = %d : %d\n", isalnum('}'), ft_isalnum('}'));
	printf("\t('!') = %d : %d\n", isalnum('!'), ft_isalnum('!'));
	printf("\t(' ') = %d : %d\n", isalnum(' '), ft_isalnum(' '));
}
