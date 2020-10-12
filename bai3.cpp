#include<stdio.h>
//tinh tong 1/n
int main()
{
	float i,n,Sum = 0;
	printf("nhap so can tinh tong : ");
	scanf("%f",&n);
	
	for(i = 1; i<= n; i++)
		Sum = Sum + 1/i;
	
	printf("ket qua la : %0.2f",Sum);
	return 0;
}

