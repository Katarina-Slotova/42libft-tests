#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main () {
   char src[50] = "This is source";
   char dest[50] = "This is destination";
   char src1[50] = "     ";
   char dest1[50] = "This is destination";
   char src2[50] = "This is destination";
   char dest2[50] = "     ";

	if (ft_strcat(dest, src) == strcat(dest, src))
		printf("SUCCESS: My function and original function give the same output: <<This is destinationThis is source>>. Dest string and src string before strcat: <<This is destination>> & <<This is source>>\n");
	else
		printf("FAIL: My function and original function do not give the same expected output: <<This is destinationThis is source>>. Dest string and src string before strcat: <<This is destination>> & <<This is source>>\n");
	
	if (ft_strcat(dest1, src1) == strcat(dest1, src1))
		printf("SUCCESS: My function and original function give the same output: <<This is destination     >>. Dest string and src string before strcat: <<This is destination>> & <<     >>\n");
	else
		printf("FAIL: My function and original function do not give the same expected output: <<This is destination     >>. Dest string and src string before strcat: <<This is destination>> & <<     >>\n");

	if (ft_strcat(dest2, src2) == strcat(dest2, src2))
		printf("SUCCESS: My function and original function give the same output: <<     This is destination>>. Dest string and src string before strcat: <<     >> & <<This is destination>>\n");
	else
		printf("FAIL: My function and original function do not give the same expected output: <<     This is destination>>. Dest string and src string before strcat: <<     >> & <<This is destination>>\n");
   
   return(0);
}

/* int main () {
   char src[50] = "This is source";
   char dest[50] = "This is destination";
   char src1[50] = "     ";
   char dest1[50] = "This is destination";

   ft_strcat(dest, src);
   printf("Final destination string : |%s|\n", dest);
   ft_strcat(dest1, src1);
   printf("Final destination string : |%s|\n", dest1);
   
   return(0);
} */