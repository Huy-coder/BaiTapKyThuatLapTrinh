#include <stdio.h>

int Tinh(int n)
{
	int Sum = 0;
	float Divide = 0;
	for (int i = 1; i <= n;i++)
	{
		Sum = Sum + i;
		Divide =Divide + 1/float(Sum);
	}
	printf("Ket qua la : %0.2f",Divide);
	return 0;
}

int main()
{
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	Tinh(n);

	return 0;
}