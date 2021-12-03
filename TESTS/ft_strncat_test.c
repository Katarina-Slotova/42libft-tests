#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void) 
{
   char src[50];
   char dest[50];
   char src1[50];
   char dest1[50];
   char src2[50];
   char dest2[50];
   char src3[50];
   char dest3[50];
   char src4[50];
   char dest4[50];
   char src5[50];
   char dest5[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strcpy(src1,  "This is source");
   ft_strcpy(dest1, "This is destination");
   ft_strcpy(src2,  "   ");
   ft_strcpy(dest2, "This is destination");
   ft_strcpy(src3,  "   ");
   ft_strcpy(dest3, "This is destination");
   ft_strcpy(src4,  " ***");
   ft_strcpy(dest4, "This is destination");
   ft_strcpy(src5,  " ***");
   ft_strcpy(dest5, "This is destination");

	if (ft_strcmp(ft_strncat(dest, src, 5), strncat(dest1, src1, 5)) == 0)
		printf("SUCCESS: My function and original function gave the same output: <<%s>>. Src string: <<This is source>>, dest string: <<This is destination>>, appended chars: 5.\n", dest);
	else
		printf("FAIL: My function and original function did not give the same output. Src string: <<This is source>>, dest string: <<This is destination>>, appended chars: 5. Expected output: <<This is destinationThis >>, actual output: <<%s>>\n", dest);
  
	if (ft_strcmp(ft_strncat(dest2, src2, 5), strncat(dest3, src3, 5)) == 0)
		printf("SUCCESS: My function and original function gave the same output: <<%s>>. Src string: <<   >>, dest string: <<This is destination>>, appended chars: 5.\n", dest2);
	else
		printf("FAIL: My function and original function did not give the same output. Src string: <<   >>, dest string: <<This is destination>>, appended chars: 5. Expected output: <<This is destination   >>, actual output: <<%s>>\n", dest2);
	
	if (ft_strcmp(ft_strncat(dest4, src4, 5), strncat(dest5, src5, 5)) == 0)
		printf("SUCCESS: My function and original function gave the same output: <<%s>>. Src string: << ***>>, dest string: <<This is destination>>, appended chars: 5.\n", dest4);
	else
		printf("FAIL: My function and original function did not give the same output. Src string: << ***>>, dest string: <<This is destination>>, appended chars: 5. Expected output: <<This is destination ***>>, actual output: <<%s>>\n", dest4);
   
   return(0);
}

/* int main(void) 
{
   char src[50];
   char dest[50];
   char src1[50];
   char dest1[50];
   char src2[50];
   char dest2[50];
   char src3[50];
   char dest3[50];
   char src4[50];
   char dest4[50];
   char src5[50];
   char dest5[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strcpy(src1,  "This is source");
   ft_strcpy(dest1, "This is destination");
   ft_strcpy(src2,  "   ");
   ft_strcpy(dest2, "This is destination");
   ft_strcpy(src3,  "   ");
   ft_strcpy(dest3, "This is destination");
   ft_strcpy(src4,  " >>>");
   ft_strcpy(dest4, "This is destination");
   ft_strcpy(src5,  " >>>");
   ft_strcpy(dest5, "This is destination");

   ft_strncat(dest, src, 5);
   strncat(dest1, src1, 5);
   ft_strncat(dest2, src2, 5);
   strncat(dest3, src3, 5);
   ft_strncat(dest4, src4, 5);
   strncat(dest5, src5, 5);

   printf("<<MY F>> Final destination string: |%s|\n", dest);
   printf("<<OG F>> Final destination string: |%s|\n", dest1);
   printf("<<MY F>> Final destination string: |%s|\n", dest2);
   printf("<<OG F>> Final destination string: |%s|\n", dest3);
   printf("<<MY F>> Final destination string: |%s|\n", dest4);
   printf("<<OG F>> Final destination string: |%s|\n", dest5);
   
   return(0);
} */