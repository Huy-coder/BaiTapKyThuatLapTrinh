#include<stdio.h>

void lietke(int n)
{
  for (int i = 1; i < n; i++)
  {
    if(n % i == 0 && i % 2 != 0)
      printf("%d ",i);
  }
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
  lietke(n);
  return 0;
}
