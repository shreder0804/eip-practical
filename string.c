#include <stdio.h>

int main(int argc, char *argv[])
{
  // 1차원 배열 문자열 선언
  char a[7] = "hello";

  // 2차원 배열 문자열 선언
  char b[2][8] = {"hello", "world"};

  printf("%s\n", a);

  printf("%s\n", a + 1);

  /*

  char 자료형에 b[5] = NULL; 이라고 넣게 되면

  assignment makes integer from pointer without a cast라는 warining이 뜨게 된다.
  컴파일러가 NULL을 (void*)0 으로 인식하는데 말그대로 포인터가 casting없이 인티저로 된다는 것 같다.

  b[5] = '\0'; 로 입력하면 warning 문구가 사라진다.

  */
  a[4] = '\0';

  printf("%s\n", a + 1);

  printf("%s\n", b[0]);
  printf("%s\n", b[1]);

  b[0][4] = '\0';

  printf("%s\n", b[0] + 2);
  printf("%s\n", b[1] + 3);

  return 0;
}