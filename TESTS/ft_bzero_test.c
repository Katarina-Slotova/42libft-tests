#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <strings.h>

/* int main(void)
{
	char s[100] = "This is the *** string that is replaced with zeroes.";
	char str[100] = "This is the *** string that is replaced with zeroes.";
	char a[100] = "";
	char b[100] = "";
	char c[100] = "    ";
	char d[100] = "    ";

	if (ft_bzero(s, 7) != bzero(str, 7))
		printf("FAIL: ft_bzero and bzero do not give the same output on <<%s>>.", s);
	else
		printf("SUCCESS");

	if (ft_bzero(a, 7) != bzero(b, 7))
		printf("FAIL: ft_bzero and bzero do not give the same output on <<%s>>.", a);
	else
		printf("SUCCESS");
	
	if (ft_bzero(c, 7) != bzero(d, 7))
		printf("FAIL: ft_bzero and bzero do not give the same output on <<%s>>.", c);
	else
		printf("SUCCESS");
		
	return (0);
} */

int main(void)
{
	char s[100] = "This is the *** string that is replaced ith zeroes.";
	char str[100] = "This is the *** string that is replaced ith zeroes.";
	printf("This is the original string: %s\n", s);
	ft_bzero(s, 7);
	printf("This is the ft_bzeroed string: %s\n", s);
	bzero(str, 7);
	printf("This is the bzeroed string: %s\n", str);

	char a[100] = "";
	char b[100] = "";
	printf("This is the original string: %s\n", a);
	ft_bzero(a, 7);
	printf("This is the ft_bzeroed string: %s\n", a);
	bzero(b, 7);
	printf("This is the bzeroed string: %s\n", b);
	
	char c[100] = "    ";
	char d[100] = "    ";
	printf("This is the original string: %s\n", c);
	ft_bzero(c, 7);
	printf("This is the ft_bzeroed string: %s\n", c);
	bzero(d, 7);
	printf("This is the bzeroed string: %s\n", d);
	return (0);
}
