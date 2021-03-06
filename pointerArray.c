#include <stdio.h>

int main(int argc, char *argv[])
{
  // a = &a[0]
  // a[0] = *a
  int a[3] = {1, 2, 3};
  int *p = a;

  int b[3][2] = {{1, 2},
                 {3, 4},
                 {5, 6}};

  // 2차원 배열의 포인터를 변수에 대입하는 방법
  // 자료형 (*배열 포인터 이름) [배열의 가로길이]
  int(*q)[2] = b;

  // 1차원 배열과 포인터
  // 1, 2, 3
  printf("%d %d %d \n", a[0], a[1], a[2]);

  // 1, 2, 3
  printf("%d %d %d \n", *a, *(a + 1), *(a + 2));

  // 1, 2, 3
  printf("%d %d %d \n", *p, *(p + 1), *(p + 2));

  // 1, 2, 3
  printf("%d %d %d \n", p[0], p[1], p[2]);

  // 2차원 배열과 포인터
  // 1, 2, 3, 4, 5, 6
  printf("%d %d %d %d %d %d \n", b[0][0], b[0][1], b[1][0], b[1][1], b[2][0], b[2][1]);

  // 1, 2, 3, 4, 5, 6
  printf("%d %d %d %d %d %d \n", q[0][0], q[0][1], q[1][0], q[1][1], q[2][0], q[2][1]);

  return 0;
}