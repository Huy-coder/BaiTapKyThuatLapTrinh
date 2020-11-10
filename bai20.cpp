#include<stdio.h>

int Uoc(int n)
{
  for (int i = 1; i < n; i++)
    if(n % i == 0)
      printf("%d ",i);
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
  Uoc(n);
  return 0;
}
