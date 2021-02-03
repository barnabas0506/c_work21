#include <stdio.h>


int e2e(int n) 
{
  if (n == 0)  // 0승은 무조건 1
    return 1;
  else {
     return 2 * e2e(n - 1);  // 2 * 2^(n-1) * 2^(n-2) * ... * 2^0
  }
}

int main(void) 
{
  int a;
  printf("input");
  scanf("%d", &a);
  printf("%d\n", e2e(a));
  return 0;
}
