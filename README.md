# 42libft-tests
My test files for testing 42libft functions.
All the test files inlcude if/else statements (except putstr, putnbr, putendl and their fd counterarts - tests for these are included but must be run separately to test the functions). Bash script will compile all the test functions and run them. It is possible to add grep FAIL to see only the functions that fail the tests, or grep SUCCESS to see only the funtions that work.
Usage once in 42libft-tests: 
- to see all the test results: ./test_script.sh 
- to see only the failed tests: ./test_script.sh | grep FAIL
- to see only the successful tests: ./test_script.sh | grep SUCCESS
