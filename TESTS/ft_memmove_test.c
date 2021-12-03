#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main (void) {
   char dest1[100] = "That's why they callin us -- victorious!";
   char src1[100]  = "Chillin on top of the list.";
   char dest2[100] = "Smol dest string.";
   char src2[100]  = "A bit bigger src one.";
 
	if (ft_memmove(dest1, src1, 10) == memmove(dest1, src1, 10))
		printf("SUCCESS: My function and original function give the same output. Before memmove dest: <<That's why they callin us -- victorious!>>, src: <<Chillin on top of the list.>> After memmove dest: %s, src: %s\n", dest1, src1);
	else
		printf("FAIL: My function and original function do not give the same output. Before memmove dest: <<That's why they callin us -- victorious!>>, src: <<Chillin on top of the list.>> After memmove dest: %s, src: %s\n", dest1, src1);

	if (ft_memmove(dest2, src2, 21) == memmove(dest2, src2, 21))
		printf("SUCCESS: My function and original function give the same output. Before memmove dest: <<Smol dest string.>>, src: <<A bit bigger src one.>> After memmove dest: %s, src: %s\n", dest2, src2);
	else
		printf("FAIL: My function and original function do not give the same output. Before memmove dest: <<Smol dest string.>>, src: <<A bit bigger src one.>> After memmove dest: %s, src: %s\n", dest2, src2);

   return(0);
}

/* int main (void) {
   char dest[100] = "That's why they callin us -- victorious!";
   char src[100]  = "Chillin on top of the list.";
   char dest1[100] = "That's why they callin us -- victorious!";
   char src1[100]  = "Chillin on top of the list.";
   char dest2[100] = "Smol dest string.";
   char src2[100]  = "A bit bigger src one.";
   char dest3[100] = "Smol dest string.";
   char src3[100]  = "A bit bigger src one.";

   printf("Before memmove dest: %s, src: %s\n", dest, src);
   ft_memmove(dest, src, 10);
   printf("After memmove dest: %s, src: %s\n", dest, src);
   printf("Before memmove dest: %s, src: %s\n", dest1, src1);
   memmove(dest1, src1, 10);
   printf("After memmove dest: %s, src: %s\n", dest1, src1);
   printf("\n");

   printf("Before memmove dest: %s, src: %s\n", dest2, src2);
   ft_memmove(dest2, src2, 20);
   printf("After memmove dest: %s, src: %s\n", dest2, src2);
   printf("Before memmove dest: %s, src: %s\n", dest3, src3);
   memmove(dest3, src3, 20);
   printf("After memmove dest: %s, src: %s\n", dest3, src3);

   return(0);
} */