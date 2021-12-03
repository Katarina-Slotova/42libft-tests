#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int  main(void)
{
	int length;
	int length1;
	int length2;
	int length3;

	length = ft_strlen("bla bla bla");
	length1 = ft_strlen("");
	length2 = ft_strlen("belloooooo oooo ooo");
	length3 = ft_strlen("        ");

	if (length == 11)
		printf("SUCCESS: Length of string is correct. Tested string: <<bla bla bla>>. Expected output: 11. Output: %d.\n", length);
	else
		printf("FAIL: Length of string is not correct. Tested string: <<bla bla bla>>. Expected output: 11. Output: %d.\n", length);
	
	if (length1 == 0)
		printf("SUCCESS: Length of string is correct. Tested string: <<>>. Expected output: 0. Output: %d.\n", length1);
	else
		printf("FAIL: Length of string is not correct. Tested string: <<>>. Expected output: 0. Output: %d.\n", length1);
	
	if (length2 == 19)
		printf("SUCCESS: Length of string is correct. Tested string: <<belloooooo oooo ooo>>. Expected output: 19. Output: %d.\n", length2);
	else
		printf("FAIL: Length of string is not correct. Tested string: <<belloooooo oooo ooo>>. Expected output: 19. Output: %d.\n", length2);
	
	if (length3 == 8)
		printf("SUCCESS: Length of string is correct. Tested string: <<        >>. Expected output: 8. Output: %d.\n", length3);
	else
		printf("FAIL: Length of string is not correct. Tested string: <<        >>. Expected output: 8. Output: %d.\n", length3);

	return (0);
}

/* int  main(void)
{
	int length;
	int length1;
	int length2;
	int length3;

	length = ft_strlen("bla bla bla");
	length1 = ft_strlen("");
	length2 = ft_strlen("belloooooo oooo ooo");
	length3 = ft_strlen("        ");

	printf("Tested string: <<bla bla bla>>. Expected output: 11. Output: %d.\n", length);
	printf("Tested string: <<>>. Expected output: 0. Output: %d.\n", length1);
	printf("Tested string: <<belloooooo oooo ooo>>. Expected output: 19. Output: %d.\n", length2);
	printf("Tested string: <<        >>. Expected output: 8. Output: %d.\n", length3);
} */