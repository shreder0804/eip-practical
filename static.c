#include <stdio.h>
void increase()
{
  // static 변수는 프로그램이 종료하기 전까지 변수가 사라지지 않고 계속 유지됨
  // increase 함수 호출 시 count는 static 변수이기 때문에 처음 한 번만 count 값이 0으로 초기화되고
  // increase 함수를 두 번 호출할 때 static int count = 0을 만나더라도 초기화되지 않음
  static int count = 0;

  printf("count=%d\n", count);
  count++;
}

int main(int argc, char *argv[])
{
  increase();
  increase();
  return 0;
}