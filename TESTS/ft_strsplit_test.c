#include <stdio.h>
#include "ft_tests.h"
#include EVAL_DIR

int main(void)
{
	char str1[] = "      split       this for   me  !       ";
	char str2[] = "*****hello*******fellow****bee********";
	char c1 = ' ';
	char c2 = '*';
	char **array1;
	char **array2;
	int	i;
	int j;

	array1 = ft_strsplit(str1, c1);
	array2 = ft_strsplit(str2, c2);
	i = 0;
	j = 0;

	if (ft_strncmp(array1[i], "split", 6) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. First word is <<%s>>.\n", str1, array1[i]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. First word should be <<split>>, but it is <<%s>>.\n", str1, array1[i]);
	
	if (ft_strncmp(array1[i + 1], "this", 5) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. Second word is <<%s>>.\n", str1, array1[i + 1]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. Second word should be <<this>>, but it is <<%s>>.\n", str1, array1[i + 1]);

	if (ft_strncmp(array1[i + 2], "for", 4) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. Third word is <<%s>>.\n", str1, array1[i + 2]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. Third word should be <<for>>, but it is <<%s>>.\n", str1, array1[i + 2]);

	if (ft_strncmp(array1[i + 3], "me", 3) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. Fourth word is <<%s>>.\n", str1, array1[i + 3]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. Fourth word should be <<me>>, but it is <<%s>>.\n", str1, array1[i + 3]);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if (ft_strncmp(array2[j], "hello", 6) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. First word is <<%s>>.\n", str2, array2[j]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. First word should be <<hello>>, but it is <<%s>>.\n", str2, array2[j]);
	
	if (ft_strncmp(array2[j + 1], "fellow", 7) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. Second word is <<%s>>.\n", str2, array2[j + 1]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. Second word should be <<fellow>>, but it is <<%s>>.\n", str2, array2[j + 1]);

	if (ft_strncmp(array2[j + 2], "bee", 4) == 0)
		printf("SUCCESS: String <<%s>> got split correctly. Third word is <<%s>>.\n", str2, array2[j + 2]);
	else
		printf("FAIL: String <<%s>> did not get split correctly. Third word should be <<bee>>, but it is <<%s>>.\n", str2, array2[j + 2]);
	
	return (0);
}

/* int main(void)
{
	char str[] = "      split       this for   me  !       ";
	char c = ' ';
	char **array;
	int	i;

	array = ft_strsplit(str, c);
	i = 0;	
	while (i != 4)
	{
		printf("%s", array[i]);
		i++;
	}
	return (0);
}*/

/* #include <stdio.h>
#include <stdlib.h>

static void	free_all(char **memory, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(memory[i++]);
	free(memory);
}

static size_t	arrlen(char **arr)
{
	size_t	len;

	len = 0;
	while (*arr++)
		len++;
	return (len);
}

static int	ft_test(const char *str, const char chr, char **ref)
{
	char	**splits;
	size_t	i;
	size_t	count;

	count = arrlen(ref);
	splits = ft_strsplit(str, chr);
	if (!splits)
	{
		printf("Memory allocation error.\n");
		return (1);
	}
	i = 0;
	while (splits[i] && ref[i])
	{
		if (strcmp(splits[i], ref[i]))
		{
			free_all(splits, count);
			return (1);
		}
		i++;
	}
	if (splits[i] && splits[i] != ref[i])
	{
		free_all(splits, count);
		return (1);
	}
	else if (splits[0])
		free_all(splits, count);
	else
		free(splits);
	return (0);
}

static int	ft_test_either(const char *str, const char chr, char **ref1,
	char **ref2)
{
	return (!(!ft_test(str, chr, ref1)
			|| !ft_test(str, chr, ref2)));
}

int	main(void)
{
	if (ft_test_either("", '\0',
			(char *[]){"", NULL}, (char *[]){NULL})
		|| ft_test_either("", '*',
			(char *[]){"", NULL}, (char *[]){NULL})
		|| ft_test_either("*", '*',
			(char *[]){"", NULL}, (char *[]){NULL})
		|| ft_test_either("******", '*',
			(char *[]){"", NULL}, (char *[]){NULL})
		|| ft_test("***a***", '*',
			(char *[]){"a", NULL})
		|| ft_test("*hello*fellow***students*", '*',
			(char *[]){"hello", "fellow", "students", NULL})
		|| ft_test("hi*", '*',
			(char *[]){"hi", NULL})
		|| ft_test("*hi", '*',
			(char *[]){"hi", NULL})
		|| ft_test("hi", '*',
			(char *[]){"hi", NULL}))
	{
		printf("KO: ft_strsplit\n");
		return (1);
	}
	printf("OK: ft_strsplit\n");
	return (0);
} */