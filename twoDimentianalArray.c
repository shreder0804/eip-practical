#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int i, j;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}