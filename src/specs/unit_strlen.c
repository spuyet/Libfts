#include <stdio.h>
#include <string.h>
#include "libfts.h"
#include "unit_strlen.h"

void	unit_strlen(void)
{
  size_t   r;

  puts("Unit tests for STRLEN\n---------------------");
  puts("TEST #1: ");
  r = unit_strlen_test("TEST 1");
  puts("TEST #2: ");
  r += unit_strlen_test(";fljgrwelk;hgljkrehkgrhlkjershgkjrejkghrlekjh");
  puts("TEST #3: ");
  r += unit_strlen_test("");
  puts("TEST #4: ");
  r += unit_strlen_test("42 school");
  printf("[%zu] Tests failed !\n---------------------\n", r);
}

size_t		unit_strlen_test(char *s)
{
	if (ft_strlen(s) != strlen(s))
  	{
    	printf("\033[0;31mFailure\n\e[0m");
    	return (1);
  	}
  	printf("\033[0;32mSuccess\n\e[0m");
  	return (0);
}