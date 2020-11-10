#include<stdio.h>
#include<math.h>

void nhap(int &x, int &n)
{
  printf("nhap x : ");
  scanf(" %d", &x);
  printf("nhap n : ");
  scanf(" %d", &n);
}

float chiaGTle(int x, int n)
{
  int GiaiThua = 1,nhan = 1;
  float Sum = 1 + x;
  for(int  i = 1; i<=n; i++)
  {
    nhan = i*2 + 1;
    GiaiThua = GiaiThua*nhan*(nhan - 1);
    Sum = Sum + float(pow(x,2*n + 1)/GiaiThua);
  }
    return Sum;
  }
int main()
{
  int x,n;
  nhap(x,n);
  printf("tong la : %0.2f",chiaGTle(x,n));
  return 0;
}
