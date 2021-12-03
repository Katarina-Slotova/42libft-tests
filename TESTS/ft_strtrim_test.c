#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "       g */+-    ";
	char *s3 = "";
	char *ret = ft_strtrim(s1);
	char *ret2 = ft_strtrim(s2);
	char *ret3 = ft_strtrim(s3);

	if (!ft_strcmp(ret, ""))
		printf("SUCCESS: Original string full of tabs, spaces and newlines <<%s>> was trimmed correctly. Exepected output: <<>>, actual output: <<%s>>\n", s1, ret);
	else
		printf("FAIL: Original string full of tabs, spaces and newlines <<%s>> was not trimmed correctly. Exepected output: <<>>, actual output: <<%s>>\n", s1, ret);

	if (!ft_strcmp(ret2, "g */+-"))
		printf("SUCCESS: Original string <<%s>> was trimmed correctly. Exepected output: <<g */+->>, actual output: <<%s>>\n", s2, ret2);
	else
		printf("FAIL: Original string f<<%s>> was not trimmed correctly. Exepected output: <<g */+->>, actual output: <<%s>>\n", s2, ret2);
	
	if (!ft_strcmp(ret3, ""))
		printf("SUCCESS: Original empty string <<%s>> was trimmed correctly. Exepected output: <<>>, actual output: <<%s>>\n", s3, ret3);
	else
		printf("FAIL: Original empty string f<<%s>> was not trimmed correctly. Exepected output: <<>>, actual output: <<%s>>\n", s3, ret3);

	return (0);
}

/* int main(void)
{
	//char str[] = "       g    ";
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!ft_strcmp(ret, s2))
		return (1);
	return (0);

	//printf("%s", ft_strtrim(str));
	//printf("%s", ft_strtrim(s1));
	//printf("%s", ft_strtrim(s2));
	return (0);
} */


/* #include <stdio.h>

int main(void)
{
	//char str[] = "       g    ";
	char *s1 = "";
	//char *s1 = "";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (strcmp(ret, s2))
		return (printf("fail"));
	else if (*ret != '\0')
		return (printf("partial fai"));
	return (printf("success"));

	//printf("%s", ft_strtrim(str));
	//printf("%s", ft_strtrim(s1));
	//printf("%s", ft_strtrim(s2));
	return (0);
}  */