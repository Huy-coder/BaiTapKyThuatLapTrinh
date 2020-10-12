#include<stdio.h>
//tinh tong n^2
int TinhTong(int n)
{
	int Sum = 0;
	for(int i = 1; i <= n;i++)
		Sum = Sum + i*i;
	printf("ket qua la : %d",Sum);
	return 0;
}

int main()
{
	int n;
	printf("nhap so can tinh tong : ");
	scanf("%d",&n);
	TingTong(n);
	return 0;
	
}

