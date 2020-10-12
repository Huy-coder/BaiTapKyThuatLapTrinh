#include <stdio.h>
// ting tong cac so nguyen duong n
int TinhTong(int n)
{
	int Sum = 0;
	for (int i = 0;i <= n; i++)
			Sum+=i;
	printf("ket qua la : %d",Sum);
	return 0;
}

int main()
{
	int n;
	printf("nhap so can tinh tong : ");
	scanf("%d",&n);
	TinhTong(n);
	return 0;
}

