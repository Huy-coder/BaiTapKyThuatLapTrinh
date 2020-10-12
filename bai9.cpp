#include<stdio.h>
//tinh tich 1*2*3*n
int TinhTich(int n)
{
	int Mutiple = 1;
	for (int i = 1; i <= n; i++)
		Mutiple = Mutiple*i;
	printf("ket qua la : %d",Mutiple);
	return 0;
}

int main()
{
	int n;
	printf("nhap so nguyen duong : ");
	scanf("%d",&n);
	TinhTich(n);
	return 0;
}

