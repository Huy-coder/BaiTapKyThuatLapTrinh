#include<stdio.h>
//tinh tich 1+1.2+1.2.3...
int TinhTongTich(int n)
{
	int Mutiple = 1, Sum = 0;
	for (int i = 1; i <= n; i++)
		{
		Mutiple = Mutiple * i ;
		Sum = Sum + Mutiple ;
		}
	printf("ket qua la : %d",Sum);
	return 0;
}

int main()
{
	int n;
	printf("nhap so nguyen duong : ");
	scanf("%d",&n);
	TinhTongTich(n);
	return 0;
}

