#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isprint(void)
{
	printf("\n\nTEST: tf_isprint");
	printf("\n* ************************************************************************** *\n");
	printf("\t(' ') = %d : %d\n", isprint(' '), ft_isprint(' '));
	printf("\t('2') = %d : %d\n", isprint('2'), ft_isprint('2'));
	printf("\t(':') = %d : %d\n", isprint(':'), ft_isprint(':'));
	printf("\t('=') = %d : %d\n", isprint('='), ft_isprint('='));
	printf("\t('A') = %d : %d\n", isprint('A'), ft_isprint('A'));
	printf("\t('b') = %d : %d\n", isprint('b'), ft_isprint('b'));
	printf("\t('|') = %d : %d\n", isprint('|'), ft_isprint('|'));
	printf("\t('\t') = %d : %d\n", isprint('\t'), ft_isprint('\t'));
	printf("\t('\n') = %d : %d\n", isprint('\n'), ft_isprint('\n'));
}