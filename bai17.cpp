#include<stdio.h>
#include<math.h>
int Tinh(int x, int n)
{
	float Sum = 0, GiaiThua = 1;
	for (int i = 1; i <= n; i++)
	{
		GiaiThua = GiaiThua*i;
		Sum += float( pow(x,i) / GiaiThua);
	}
	printf("ket qua la : %f",Sum);
	return 0;
}


int main()
{
	int n, x;
	printf("nhap x : ");
	scanf("%d",&x);
	printf("nhap n : ");
	scanf("%d",&n);
	Tinh(x,n);

	return 0;
}
