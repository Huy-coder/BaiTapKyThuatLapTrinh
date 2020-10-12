#include <stdio.h>
//tinh tong 1/(2n+1)
float TinhTong(float n)
{
	float Sum = 0;
	for (float i = 0; i <= n; i++)
		Sum = Sum + 1/(2*i + 1);
	printf("ket qua la : %0.3f",Sum);
	return 0;
}

int main()
{
	float n;
	printf("nhap so can tinh tong : ");
	scanf("%f",&n);
	TinhTong(n);
	return 0;	
}
