#include <stdio.h>

int main(int argc, char *argv[])
{
  // 1차원 배열 문자열 선언
  char a[7] = "hello";

  // 2차원 배열 문자열 선언
  char b[2][8] = {"hello", "world"};

  printf("%s\n", a);

  printf("%s\n", a + 1);

  a[4] = NULL;

  printf("%s\n", a + 1);

  printf("%s\n", b[0]);
  printf("%s\n", b[1]);

  b[0][4] = NULL;

  printf("%s\n", b[0] + 2);
  printf("%s\n", b[1] + 3);

  return 0;
}