#include <stdio.h>

int main(int argc, char *argv[])
{
  // 데이터타입 정의
  int i = 3;
  double d = 5;
  float t = 2.32;
  char c = 'A';
  char s[] = "Hello";

  printf("%d\n", i);
  printf("%d\n", d);
  printf("%f\n", t);
  printf("%c\n", c);
  printf("%s", s);

  return 0;
}