#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_strlen(void)
{
	char s1[] = "hello";
	char s2[] = "hello world";
	char s3[] = "oh yeah this is a test!";
	printf("\n\nTEST: tf_strlen");
	printf("\n* ************************************************************************** *\n");
	printf("\t('%s') = %lu : %d\n", s1, strlen(s1), ft_strlen(s1));
	printf("\t('%s') = %lu : %d\n", s2, strlen(s2), ft_strlen(s2));
	printf("\t('%s') = %lu : %d\n", s3, strlen(s3), ft_strlen(s3));
}
