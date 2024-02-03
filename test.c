#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "./framework/includes/libunit.h"

//cc test.c -g -L ./framework -lunit  

int mock_test() {
  // int *n = NULL;
  // *n = 0;
  return (0);
}

int main() {
	t_unit_test *test_list = NULL;

  load_test(&test_list, "STRLEN", "test sdf", &mock_test);
  load_test(&test_list, "STRLEN", "2", &mock_test);
  load_test(&test_list, "STRLEN", "3", &mock_test);
  load_test(&test_list, "STRLEN", "4", &mock_test);
  launch_test(&test_list);
  return (0);
}