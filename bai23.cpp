#include<stdio.h>

int dem(int n)
{
  int dem = 0;
  for(int i = 1; i < n; i++)
    if(n % i == 0)
      dem +=1;
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
  printf("so luong uoc cua n la : %d",dem(n));
  return 0;
}
