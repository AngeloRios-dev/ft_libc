#include "libft.h"

int	main(void)
{
	char buffer[10] = "hola mundo";
	printf("Cadena original: %s\n", buffer);
	ft_memset(buffer, 'a', 4);
	printf("Cadena modificada: %s\n", buffer);
	return (0);
}