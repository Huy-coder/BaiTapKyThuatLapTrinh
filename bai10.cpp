#include<stdio.h>
//tinh tich x^n
int TinhMu(int x,int n)
{
	int KetQua = 1;
	for (int i = 1; i <= n; i++)
		KetQua = KetQua*x;
	printf("ket qua la : %d",KetQua);
	return 0;
}

int main()
{
	int n,x;
	printf("nhap so nguyen duong : ");
	scanf("%d",&x);
	printf("nhap so mu : ");
	scanf("%d",&n);
	TinhMu(x,n);
	return 0;
}

