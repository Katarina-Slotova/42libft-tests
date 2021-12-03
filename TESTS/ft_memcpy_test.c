#include "ft_tests.h"
#include EVAL_DIR
#include <string.h>
#include <stdio.h>

int main(void)
{
	const char src[100] = "This is the source string, copied to the dest string.";
	char dst[100] = "This is the destination string.";
	const char src1[100] = "This is the source string, copied to the dest string.";
	char dst1[100] = "This is the destination string.";
	const char src2[100] = "    ";
	char dst2[100] = "This is the destination string.";
	const char src3[100] = "    ";
	char dst3[100] = "This is the destination string.";
	const char src4[100] = "";
	char dst4[100] = "This is the destination string.";
	const char src5[100] = "";
	char dst5[100] = "This is the destination string.";

	if (ft_strcmp(ft_memcpy(dst, src, strlen(src)+1), memcpy(dst1, src1, strlen(src1)+1)) == 0)
		printf("SUCCESS: My function and original function give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy: <<%s>>.\n", dst);
	else 
		printf("FAIL: My function and original function do not give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy shoud be <<This is the source string, copied to the dest string.>>\n.");

	if (ft_strcmp(ft_memcpy(dst2, src2, strlen(src2)+1), memcpy(dst3, src3, strlen(src3)+1)) == 0)
		printf("SUCCESS: My function and original function give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy: <<%s>>.\n", dst2);
	else 
		printf("FAIL: My function and original function do not give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy shoud be <<    >>\n.");

	if (ft_strcmp(ft_memcpy(dst4, src4, strlen(src4)+1), memcpy(dst5, src5, strlen(src5)+1)) == 0)
		printf("SUCCESS: My function and original function give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy: <<%s>>.\n", dst4);
	else 
		printf("FAIL: My function and original function do not give the same output. Dest before memcpy: <<This is the destination string.>>. Dest after memcpy shoud be <<>>\n.");

	/* printf("Dest before memcpy: %s\n", dst);
	ft_memcpy(dst, src, strlen(src)+1);
	printf("Dest after memcpy: %s\n", dst);
	printf("\n");
	printf("Dest before memcpy: %s\n", dst1);
	memcpy(dst1, src1, strlen(src1)+1);
	printf("Dest after memcpy: %s\n", dst1);
	printf("\n");
	
	printf("Dest before memcpy: %s\n", dst2);
	ft_memcpy(dst2, src2, strlen(src2)+1);
	printf("Dest after memcpy: %s\n", dst2);
	printf("\n");
	printf("Dest before memcpy: %s\n", dst3);
	memcpy(dst3, src3, strlen(src3)+1);
	printf("Dest after memcpy: %s\n", dst3);

	printf("Dest before memcpy: %s\n", dst4);
	ft_memcpy(dst4, src4, strlen(src4)+1);
	printf("Dest after memcpy: %s\n", dst4);
	printf("\n");
	printf("Dest before memcpy: %s\n", dst5);
	memcpy(dst5, src5, strlen(src5)+1);
	printf("Dest after memcpy: %s\n", dst5); */

	return (0);
}