#include "ft_tests.h"
#include EVAL_DIR
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	src_ft[100] = "test1 test2 test3";
	char	dst_ft[100] = "aaaaaaaaaaaaaaaaaaaaa";
	char	src[100] = "test1 test2 test3";
	char	dst[100] = "aaaaaaaaaaaaaaaaaaaaa";
	char	src_ft1[100] = "test basic du memccpy !";
	char	dst_ft1[100];
	char	src1[100] = "test basic du memccpy !";
	char	dst1[100];
	char	src_ft2[100] = "string with\200inside !";
	char	dst_ft2[100] = "abcdefghijklmnopqrstuvwxyz";
	char	src2[100] = "string with\200inside !";
	char	dst2[100] = "abcdefghijklmnopqrstuvwxyz";
		
	if (ft_strcmp(ft_memccpy(dst_ft, src_ft, '2', 30), memccpy(dst, src, '2', 30)) == 0)
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Source: <<%s>>, destination: <<aaaaaaaaaaaaaaaaaaaaa>>, character: 2.\n", dst_ft, src_ft);
	else 
		printf("FAIL: My function and original function do not give the same expected output: <<test1 test2aaaaaaaaaa>>. Source: <<%s>>, destination: <<aaaaaaaaaaaaaaaaaaaaa>>, character: 2.\n", src_ft);
	
	if (ft_strcmp(ft_memccpy(dst_ft1, src_ft1, 'm', 22), memccpy(dst1, src1, 'm', 22)) == 0)
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Source: <<%s>>, destination: <<>>, character: m.\n", dst_ft1, src_ft1);
	else 
		printf("FAIL: My function and original function do not give the same expected output: <<test basic du m>>. Source: <<%s>>, destination: <<>>, character: m.\n", src_ft1);

	if (ft_strcmp(ft_memccpy(dst_ft2, src_ft2, '\200', 21), memccpy(dst2, src2, '\200', 21)) == 0)
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Source: <<%s>>, destination: <<abcdefghijklmnopqrstuvwxyz>>, special character: \\200.\n", dst_ft2, src_ft2);
	else 
		printf("FAIL: My function and original function do not give the same expected output: <<string with�mnopqrstuvwxyz>>. Source: <<%s>>, destination: <<abcdefghijklmnopqrstuvwxyz>>, special character: \\200.\n", src_ft2);
	
	return (0);
}

/* int		main(void)
{
	char	src_ft[100] = "string with\200inside !";
	char	dst_ft[100] = "abcdefghijklmnopqrstuvwxyz";
	char	src[100] = "string with\200inside !";
	char	dst[100] = "abcdefghijklmnopqrstuvwxyz";
	
	ft_memccpy(dst_ft, src_ft, '\200', 21);
	memccpy(dst, src, '\200', 21);
	printf("dst: %s\nsrc: %s\ndst_ft: %s\nsrc_ft: %s", dst, src, dst_ft, src_ft);
	return (0);
} */

/* #include <string.h>
#include <stdio.h>

int		main(void)
{
	char	src_ft[100] = "test basic du memccpy !";
	char	dst_ft[100];
	char	src[100] = "test basic du memccpy !";
	char	dst[100];
	
	ft_memccpy(dst_ft, src_ft, 'm', 22);
	memccpy(dst, src, 'm', 22);
	printf("dst: %s\nsrc: %s\ndst_ft: %s\nsrc_ft: %s", dst, src, dst_ft, src_ft);
	return (0);
}  */

/* int		main(void)
{
	char	src_ft[100] = "string with\200inside !";
	char	dst_ft[100] = "abcdefghijklmnopqrstuvwxyz";
	char	src[100] = "string with\200inside !";
	char	dst[100] = "abcdefghijklmnopqrstuvwxyz";
	
	ft_memccpy(dst_ft, src_ft, '\200', 21);
	memccpy(dst, src, '\200', 21);
	printf("dst: %s\nsrc: %s\ndst_ft: %s\nsrc_ft: %s", dst, src, dst_ft, src_ft);
	return (0);
} */