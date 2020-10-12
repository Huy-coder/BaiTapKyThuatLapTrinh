#include<stdio.h>
#include<math.h>

int Tinh(int n, int x)
{
	float Sum = 0, Divide = 0;
	for (int i = 1; i <= n; i++)
		{
			Sum += i;
			Divide += float(pow(x,i) / Sum );

		}
	printf("ket qua la : %0.2f",Divide);
	return 0;
}

int main()
{
	int n, x;
	printf("nhap x : ");
	scanf("%d",&x);
	printf("nhap n : ");
	scanf("%d",&n);
	Tinh(n,x);
	return 0;
}