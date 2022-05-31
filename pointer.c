#include <stdio.h>

int main(int argc, char *argv[])
{
  int a = 10;
  int *b = &a;

  // *를 붙여야 값이 출력됨
  printf("%d", *b);

  return 0;
}