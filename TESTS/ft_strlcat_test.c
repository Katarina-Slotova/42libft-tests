#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main (void) 
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
   char src6[50];
   char dest6[50000];
   char src7[50];
   char dest7[50000];
   int i;

   i = 0;

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
   strcpy(src1,  "This is source");
   strcpy(dest1, "This is destination");
   strcpy(src2,  "   ");
   strcpy(dest2, "This is destination");
   strcpy(src3,  "   ");
   strcpy(dest3, "This is destination");
   strcpy(src4,  "6564635");
   strcpy(dest4, "This is destination");
   strcpy(src5,  "6564635");
   strcpy(dest5, "This is destination");
   strcpy(src6,  "");
   strcpy(dest6, "This is destination");
   strcpy(src7,  "");
   strcpy(dest7, "This is destination");

	if (ft_strlcat(dest, src, 50) == strlcat(dest1, src1, 50))
		printf("SUCCESS: Src string <<%s>> appended to the dest string <<This is destination>> as expected: <<%s>>\n", src, dest);
	else
		printf("FAIL: Src string <<%s>> not appended to the dest string <<This is destination>> as expected: <<%s>>\n", src, dest);
	
	if (ft_strlcat(dest2, src2, 50) == strlcat(dest3, src3, 50))
		printf("SUCCESS: Src string <<%s>> appended to the dest string <<This is destination>> as expected: <<%s>>\n", src2, dest2);
	else
		printf("FAIL: Src string <<%s>> not appended to the dest string <<This is destination>> as expected: <<%s>>\n", src2, dest2);
	
	if (ft_strlcat(dest4, src4, 50) == strlcat(dest5, src5, 50))
		printf("SUCCESS: Src string <<%s>> appended to the dest string <<This is destination>> as expected: <<%s>>\n", src4, dest4);
	else
		printf("FAIL: Src string <<%s>> not appended to the dest string <<This is destination>> as expected: <<%s>>\n", src4, dest4);
	
	if (ft_strlcat(dest6, src6, 50) == strlcat(dest7, src7, 50))
		printf("SUCCESS: Src string <<%s>> appended to the dest string <<This is destination>> as expected: <<%s>>\n", src6, dest6);
	else
		printf("FAIL: Src string <<%s>> not appended to the dest string <<This is destination>> as expected: <<%s>>\n", src6, dest6);

   return(0);
}

/* int main (void) 
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
   char src6[50];
   char dest6[50000];
   char src7[50];
   char dest7[50000];
   int i;

   i = 0;

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
   strcpy(src1,  "This is source");
   strcpy(dest1, "This is destination");
   strcpy(src2,  "   ");
   strcpy(dest2, "This is destination");
   strcpy(src3,  "   ");
   strcpy(dest3, "This is destination");
   strcpy(src4,  "6564635");
   strcpy(dest4, "This is destination");
   strcpy(src5,  "6564635");
   strcpy(dest5, "This is destination");
   strcpy(src6,  "");
   strcpy(dest6, "This is destination");
   strcpy(src7,  "");
   strcpy(dest7, "This is destination");

   ft_strlcat(dest, src, 50);
   printf("Final string: |%s|\n", dest);
   strlcat(dest1, src1, 50);
   printf("Final string: |%s|\n", dest1);
   printf("\n");
   ft_strlcat(dest2, src2, 50);
   printf("Final string: |%s|\n", dest2);
   strlcat(dest3, src3, 50);
   printf("Final string: |%s|\n", dest3);
   printf("\n");
   ft_strlcat(dest4, src4, 50);
   printf("Final string: |%s|\n", dest4);
   strlcat(dest5, src5, 50);
   printf("Final string: |%s|\n", dest5);
   printf("\n");
   ft_strlcat(dest6, src6, 50000);
   printf("Final string: |%s|\n", dest6);
   strlcat(dest7, src7, 50000);
   printf("Final string: |%s|\n", dest7);
   return(0);
} */