#include<stdio.h>
#include <math.h>
int TinhTongMu(int x,int n)
{
	int Sum = 0,Mu = 1;
	for (int i = 0; i <= n; i++)
		{
			Mu = pow(x,(2*i +1));
			Sum = Sum + Mu;
				}
	printf("ket qua la : %d",Sum);
	return 0;
}

int main()
{
	int n, x;
	printf("nhap so nguyen duong : ");
	scanf("%d",&x);
	printf("nhap so mu : ");
	scanf("%d",&n);
	TinhTongMu(x,n);
	return 0;
}

