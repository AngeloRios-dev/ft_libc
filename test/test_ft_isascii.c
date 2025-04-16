#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isascii(void)
{
	printf("\n\nTEST: tf_isascii");
	printf("\n* ************************************************************************** *\n");
	printf("\t('A') = %d : %d\n", isascii('A'), ft_isascii('A'));
	printf("\t('b') = %d : %d\n", isascii('b'), ft_isascii('b'));
	printf("\t('c') = %d : %d\n", isascii('c'), ft_isascii('c'));
	printf("\t('1') = %d : %d\n", isascii('1'), ft_isascii('1'));
	printf("\t('0') = %d : %d\n", isascii('0'), ft_isascii('2'));
	printf("\t('0') = %d : %d\n", isascii('0'), ft_isascii('0'));
	printf("\t('-') = %d : %d\n", isascii('-'), ft_isascii('-'));
	printf("\t('}') = %d : %d\n", isascii('}'), ft_isascii('}'));
	printf("\t('!') = %d : %d\n", isascii('!'), ft_isascii('!'));
	printf("\t(' ') = %d : %d\n", isascii(' '), ft_isascii(' '));
}
