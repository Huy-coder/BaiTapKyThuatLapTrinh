#include<stdio.h>
//tinh tong n/(n+1)
int TinhTong(float n)
{
	float Sum = 0;
	for (float i = 1; i <= n; i++)
		Sum = Sum + i/(i + 1);
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

