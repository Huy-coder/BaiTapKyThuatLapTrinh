#include<stdio.h>

int SoHoanThien(int n)
{
  int sum = 0;
  for (int i = 1; i < n; i++)
    if(n % i == 0)
      sum += i;
  if(sum == n)
    return printf("%d la so hoan thien",n);
  else
    return printf("%d khong phai la so hoan thien",n);
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
  SoHoanThien(n);
  return 0;
}
