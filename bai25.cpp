#include<stdio.h>

int Tong(int n)
{
  int Sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if(n % i == 0 && i % 2 == 0)
        Sum += i;
  }
  return Sum;
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
  printf("tong uoc so chan bang : %d",Tong(n));
  return 0;

}
