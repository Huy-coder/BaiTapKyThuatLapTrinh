#include<stdio.h>

int TichLe(int n)
{
  int nhan = 1;
  for (int i = 1; i <= n; i++ )
  {
    if(n % i == 0 && i % 2 != 0)
      nhan *= i;
  }
  return nhan;
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
  printf("Tich cac uoc so le bang : %d",TichLe(n));
  return 0;
}
