#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isdigit(void)
{
	printf("\n\nTEST: tf_isdigit");
	printf("\n* ************************************************************************** *\n");
	printf("Is digit:\n");
	printf("\t('1') = %d : %d\n", isdigit('1'), ft_isdigit('1'));
	printf("\t('2') = %d : %d\n", isdigit('2'), ft_isdigit('2'));
	printf("\t('3') = %d : %d\n", isdigit('3'), ft_isdigit('3'));
	printf("\t('4') = %d : %d\n", isdigit('4'), ft_isdigit('4'));
	printf("\t('5') = %d : %d\n", isdigit('5'), ft_isdigit('5'));
	printf("\t('6') = %d : %d\n", isdigit('6'), ft_isdigit('6'));
	printf("\t('7') = %d : %d\n", isdigit('7'), ft_isdigit('7'));
	printf("\t('8') = %d : %d\n", isdigit('8'), ft_isdigit('8'));
	printf("\t('9') = %d : %d\n", isdigit('9'), ft_isdigit('9'));
	printf("\t('0') = %d : %d\n", isdigit('0'), ft_isdigit('0'));

	printf("\nNot digit:\n");
	printf("\t('a') = %d : %d\n", isdigit('a'), ft_isdigit('a'));
	printf("\t('x') = %d : %d\n", isdigit('x'), ft_isdigit('x'));
	printf("\t('!') = %d : %d\n", isdigit('!'), ft_isdigit('!'));
	printf("\t('-') = %d : %d\n", isdigit('-'), ft_isdigit('-'));
	printf("\t('}') = %d : %d\n", isdigit('}'), ft_isdigit('}'));
	printf("\t(']') = %d : %d\n", isdigit(']'), ft_isdigit(']'));
	printf("\t(')') = %d : %d\n", isdigit(')'), ft_isdigit(')'));
	printf("\t('-') = %d : %d\n", isdigit('-'), ft_isdigit('-'));
	printf("\t('.') = %d : %d\n", isdigit('.'), ft_isdigit('.'));
	printf("\t(',') = %d : %d\n", isdigit(','), ft_isdigit(','));
}
