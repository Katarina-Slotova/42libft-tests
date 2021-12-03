#include <stdio.h>
#include <string.h>
#include "ft_tests.h"
#include EVAL_DIR

int main(void)
{
	char str1[] = "I am the destination string, I will be replaced by source string.";
	char str2[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str3[] = "I am the destination string, I will be replaced by source string.";
	
	char str5[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char str6[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str7[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	
	char str9[] = "I am the destination string, I will be replaced by source string.";
	char str10[] = "";
	char str11[] = "I am the destination string, I will be replaced by source string.";
	
	int n = 20;

	if (ft_strcmp(ft_strncpy(str1, str2, n), strncpy(str3, str2, n)) == 0)
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<I am the destination string, I will have 20 chars bytes replaced by source string.>>\n", ft_strncpy(str1, str2, n));
	else
		printf("FAIL: My function and original function do not give the same output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<I am the destination string, I will have 20 chars bytes replaced by source string.>>\n", ft_strncpy(str1, str2, n));
	
	if (ft_strcmp(ft_strncpy(str5, str6, n), strncpy(str7, str6, n)) == 0)
		printf("SUCCESS: SMy function and original function give the same output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa>>\n", ft_strncpy(str5, str6, n));
	else
		printf("FAIL: My function and original function do not give the same output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa>>\n", ft_strncpy(str5, str6, n));

	if (ft_strcmp(ft_strncpy(str9, str10, n), strncpy(str11, str10, n)) == 0)
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Src: <<>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strncpy(str9, str10, n));
	else
		printf("FAIL: My function and original function do not give the same output: <<%s>>. Src: <<>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strncpy(str9, str10, n));

	return (0);
}

/* 

int        main(void)
{
    char src[] = "hello	+-/";
    char dest[20];
    char rest[20];
    size_t n;

    n = 10;
    ft_strncpy(dest, src, n);
    printf("%s", dest);
    strncpy(rest, src, n);
    printf("%c", '\n');
    printf("%s", rest);
    printf("%c", '\n');
    return (0);
} */
