#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"
#include "./strlen/strlen.h"

int	main(void)
{
	printf("~~~\t0 = OK | -1 = KO\t~~~\n");
	printf("Big string test\t\t\t: %i\n", big_string_test());
	printf("Basic OK test\t\t\t: %i\n", basic_test());
	printf("Basic KO test\t\t\t: %i\n", ko_test());
	printf("Bus Error test\t\t\t: %i\n", sigbus_test());
	return (0);
}
