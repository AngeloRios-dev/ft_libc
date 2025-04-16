#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isalpha(void)
{
	printf("\n\nTEST: tf_isalpha (Original : My function)");
	printf("\n* ************************************************************************** *\n");
	printf("Positive cases:\n");
	printf("\t('A') = %d : %d\n", isalpha('A'), ft_isalpha('A'));
	printf("\t('Z') = %d : %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("\t('a') = %d : %d\n", isalpha('a'), ft_isalpha('a'));
	printf("\t('z') = %d : %d\n", isalpha('z'), ft_isalpha('z'));

	printf("\nNegative cases:\n");
	printf("\t('1') = %d : %d\n", isalpha('1'), ft_isalpha('1'));
	printf("\t(' ') = %d : %d\n", isalpha(' '), ft_isalpha(' '));
	printf("\t('@') = %d : %d\n", isalpha('@'), ft_isalpha('@'));
	printf("\t('[') = %d : %d\n", isalpha('['), ft_isalpha('['));
	printf("\t('`') = %d : %d\n", isalpha('`'), ft_isalpha('`'));
	printf("\t('}') = %d : %d\n", isalpha('}'), ft_isalpha('}'));
	printf("\t('\\n') = %d : %d\n", isalpha('\n'), ft_isalpha('\n'));
	printf("\t(0) = %d : %d\n", isalpha(0), ft_isalpha(0));
	printf("\t(127) = %d : %d\n", isalpha(127), ft_isalpha(127));
}