#include <stdio.h>
#include <strings.h>  // to use bzero
#include <string.h>   // to use memcmp
#include "libft.h"

void	test_ft_bzero(void)
{
	printf("\nTEST: ft_bzero vs bzero");
	printf("\n* ************************************************************************** *\n");
	char buffer1[10];
	char buffer2[10];

	// Test 1: Delete 0 bytes
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_bzero(buffer1, 0);
	bzero(buffer2, 0);
	printf("Test 1: %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");
	

	// Test 2: Delete 3 bytes
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_bzero(buffer1, 3);
	bzero(buffer2, 3);
	printf("Test 2: %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 3: Delete all bytes
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_bzero(buffer1, 10);
	bzero(buffer2, 10);
	printf("Test 3: %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 4: Delete 1 byte
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_bzero(buffer1, 1);
	bzero(buffer2, 1);
	printf("Test 4: %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 5: Buffer already at zero
	memset(buffer1, 0, 10);
	memset(buffer2, 0, 10);
	ft_bzero(buffer1, 5);
	bzero(buffer2, 5);
	printf("Test 5: %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");
}

