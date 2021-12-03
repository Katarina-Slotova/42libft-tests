#include "ft_tests.h"
#include EVAL_DIR
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//For testing failure of memory alocaton (returns null)
/* char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	//len = ft_length(n);
	len = (size_t) -1;
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
	{
		str[0] = 0 + '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
} */

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;

	a = 123;
	b = -123;
	c = 2147483647;
	d = -2147483647;
	e = 0;
	f = 1000000000;
	g = 1;
	h = -1;

	if (ft_strncmp(ft_itoa(a), "123", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", a);
	else 
		printf("FAIL: %d was not transformed to a string.\n", a);

	if (ft_strncmp(ft_itoa(b), "-123", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", b);
	else 
		printf("FAIL: %d was not transformed to a string.\n", b);

	if (ft_strncmp(ft_itoa(c), "2147483647", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", c);
	else 
		printf("FAIL: %d was not transformed to a string.\n", c);

	if (ft_strncmp(ft_itoa(d), "-2147483647", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", d);
	else 
		printf("FAIL: %d was not transformed to a string.\n", d);
	
	if (ft_strncmp(ft_itoa(e), "0", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", e);
	else 
		printf("FAIL: %d was not transformed to a string.\n", e);
	
	if (ft_strncmp(ft_itoa(f), "1000000000", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", f);
	else 
		printf("FAIL: %d was not transformed to a string.\n", f);

	if (ft_strncmp(ft_itoa(g), "1", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", g);
	else 
		printf("FAIL: %d was not transformed to a string.\n", g);

	if (ft_strncmp(ft_itoa(h), "-1", 20) == 0)
		printf("SUCCESS: %d was trasformed to a string.\n", h);
	else 
		printf("FAIL: %d was not transformed to a string.\n", h);
	
	return (0);
}
