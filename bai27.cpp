#include<stdio.h>

int dem(int n)
{
  int dem = 0;
  for (int i = 1; i <= n; i++)
    if(n % i == 0 && i % 2 == 0)
      dem += 1;
  return dem;
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
  printf("Co %d uoc so chan.",dem(n));
  return 0;
}
