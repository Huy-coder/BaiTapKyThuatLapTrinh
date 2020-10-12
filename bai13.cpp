#include<stdio.h>
//tinh tong mu x^2n
int TinhTongMu(int x,int n)
{
	int Sum = 0,Mu = 1;
	for (int i = 1; i <= n; i++)
		{
		Mu = Mu*x*x;
		Sum = Sum + Mu;
		}
	printf("ket qua la : %d",Sum);
	return 0;
}

int main()
{
	int n,x;
	printf("nhap so nguyen duong : ");
	scanf("%d",&x);
	printf("nhap so mu : ");
	scanf("%d",&n);
	TinhTongMu(x,n);
	return 0;
}

