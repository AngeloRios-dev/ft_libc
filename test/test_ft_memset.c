#include <stdio.h>
#include <string.h>  // Para memset y memcmp
#include "libft.h"   // Asegúrate de incluir tu ft_memset aquí

void	test_ft_memset(void)
{
	printf("\nTEST: ft_memset");
	printf("\n* ************************************************************************** *\n");

	char buffer1[10];
	char buffer2[10];

	// Test 1: Set 1 bytes
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_memset(buffer1, 'x', 1);
	memset(buffer2, 'x', 1);
	printf("Test 1 (set 1 bytes to 'x'): %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 2: Set first 3 bytes to 'A'
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_memset(buffer1, 'A', 3);
	memset(buffer2, 'A', 3);
	printf("Test 2 (set 3 bytes to 'A'): %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 3: Set all bytes to 0
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_memset(buffer1, 0, 10);
	memset(buffer2, 0, 10);
	printf("Test 3 (set all to 0): %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");

	// Test 4: Set last 4 bytes to '#'
	strcpy(buffer1, "abcdefghi");
	strcpy(buffer2, "abcdefghi");
	ft_memset(buffer1 + 6, '#', 4);
	memset(buffer2 + 6, '#', 4);
	printf("Test 4 (set last 4 bytes to '#'): %s\n", memcmp(buffer1, buffer2, 10) == 0 ? "Pass" : "FAIL");
}
