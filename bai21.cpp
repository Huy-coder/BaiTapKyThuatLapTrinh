#include <stdio.h>

int TongUoc(int n)
{
  int sum = 0;
  for(int i = 1; i < n; i++)
    if(n % i == 0)
      sum += i;
  return sum;
}

void nhap(int &n)
{
  printf("nhap n : ");
  scanf("%d",&n);
}

int main()
{
  int n;
  nhap(n);
  printf("tong gia tri la : %d",TongUoc(n));
  return 0;
}
