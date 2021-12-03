#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

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
	

	if (ft_strcmp(ft_strcpy(str1, str2), strcpy(str3, str2)) == 0)
		printf("SUCCESS: Source was copied to the destination, output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strcpy(str1, str2));
	else
		printf("FAIL: Source was not copied to the destination, output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strcpy(str1, str2));
	
	if (ft_strcmp(ft_strcpy(str5, str6), strcpy(str7, str6)) == 0)
		printf("SUCCESS: Source was copied to the destination, output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa>>\n", ft_strcpy(str5, str6));
	else
		printf("FAIL: Source was not copied to the destination, output: <<%s>>. Src: <<hhhhhhhhhhhhhhhhhhhhhhhhhhhhh>>, dest: <<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa>>\n", ft_strcpy(str5, str6));

	if (ft_strcmp(ft_strcpy(str9, str10), strcpy(str11, str10)) == 0)
		printf("SUCCESS: Source was copied to the destination, output: <<%s>>. Src: <<>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strcpy(str9, str10));
	else
		printf("FAIL: Source was not copied to the destination, output: <<%s>>. Src: <<>>, dest: <<I am the destination string, I will be replaced by source string.>>\n", ft_strcpy(str9, str10));

	return (0);
}

/* 
int main(void)
{
	char str1[] = "I am the destination string, I will be replaced by source string.";
	char str2[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str3[] = "I am the destination string, I will be replaced by source string.";
	char str4[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str5[] = "";
	char str6[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str7[] = "";
	char str8[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str9[] = "I am the destination string, I will be replaced by source string.";
	char str10[] = "";
	char str11[] = "I am the destination string, I will be replaced by source string.";
	char str12[] = "";

	printf("Original string: %s\n", str1);   
	ft_strcpy(str1, str2); 
	printf("String copied into the original one: %s\n", str1);

	printf("Original string: %s\n", str3);   
	strcpy(str3, str4); 
	printf("String copied into the original one: %s\n", str3);

	printf("Original string: %s\n", str5);   
	ft_strcpy(str5, str6); 
	printf("String copied into the original one: %s\n", str5);

	printf("Original string: %s\n", str7);   
	strcpy(str7, str8); 
	printf("String copied into the original one: %s\n", str7);

	printf("Original string: %s\n", str9);   
	ft_strcpy(str9, str10); 
	printf("String copied into the original one: %s\n", str9);

	printf("Original string: %s\n", str11);   
	strcpy(str11, str12); 
	printf("String copied into the original one: %s\n", str11);
	return (0);
} */


/* int main(void)
{
	char str1[] = "I am the destination string, I will be replaced by source string.";
	char str2[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str3[] = "I am the destination string, I will be replaced by source string.";
	char str4[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str5[] = "";
	char str6[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str7[] = "";
	char str8[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	char str9[] = "I am the destination string, I will be replaced by source string.";
	char str10[] = "";
	char str11[] = "I am the destination string, I will be replaced by source string.";
	char str12[] = "";

	printf("Original string: %s\n", str1);   
	ft_strcpy(str1, str2); 
	printf("String copied into the original one: %s\n", str1);

	printf("Original string: %s\n", str3);   
	strcpy(str3, str4); 
	printf("String copied into the original one: %s\n", str3);

	printf("Original string: %s\n", str5);   
	ft_strcpy(str5, str6); 
	printf("String copied into the original one: %s\n", str5);

	printf("Original string: %s\n", str7);   
	strcpy(str7, str8); 
	printf("String copied into the original one: %s\n", str7);

	printf("Original string: %s\n", str9);   
	ft_strcpy(str9, str10); 
	printf("String copied into the original one: %s\n", str9);

	printf("Original string: %s\n", str11);   
	strcpy(str11, str12); 
	printf("String copied into the original one: %s\n", str11);
	return (0);
}
  */