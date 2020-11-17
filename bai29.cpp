#include<stdio.h>

int UocSoLeLonNhat(int n)
{
  int max;
  if(n % 2 != 0)
    return n;
  for(int i = 1; i < n; i++)
    {
      if(n % i == 0 && i % 2 != 0)
        max = i;
    }
    return max;
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
  printf("uoc so le lon nhat la : %d",UocSoLeLonNhat(n));
  return 0;
}
