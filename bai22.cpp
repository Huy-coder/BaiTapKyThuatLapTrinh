#include<stdio.h>

int Tich(int n)
{
  int nhan = 1;
  for(int i = 1; i < n; i++)
  {
      if(n % i == 0)
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
  printf("tich uoc cua n la : %d",Tich(n));
  return 0;
}
