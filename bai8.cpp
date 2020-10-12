#include<stdio.h>
//tinh tong n/(n+1)
int TinhTong(float n)
{
	float Sum = 0;
	for (float i = 0; i <= n; i++)
		Sum = Sum + (2*i+1)/(2*i+2);
	printf("ket qua la : %0.2f",Sum);
	return 0;
}

int main()
{
	float n;
	printf("nhap so nguyen duong : ");
	scanf("%f",&n);
	TinhTong(n);
	return 0;
}

