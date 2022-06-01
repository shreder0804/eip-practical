#include <stdio.h>

int main(int argc, char *argv[])
{
  int a = 10;
  int *b = &a;

  // *를 붙여야 값이 출력됨
  printf("%d\n", *b); // 포인터 b가 가리키는 a의 값
  printf("%d\n", &a); // a의 주소값
  printf("%d\n", b);  // 포인터 b가 가리키는 a의 주소값
  printf("%d\n", &b); // 포인터 b의 주소값

  return 0;
}