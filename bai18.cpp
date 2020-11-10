#include<stdio.h>
#include<math.h>

int Tinh(int x, int n)
{
	int GiaiThua = 1, Nhan = 1;
	float Sum = 1;
	for (int i = 1; i <= n; i++)
	{
		Nhan = i*2;
		printf("tai day i = %d \n",i);
		GiaiThua = GiaiThua*Nhan*(Nhan-1);
		printf("tai day giai thua = %d \n",GiaiThua);
		Sum += float( pow(x,i*2)/GiaiThua);
		printf("tai day tong = %0.1f \n\n",Sum);
	}
	printf("ket qua la : %0.1f",Sum);
	return 0;
}

int main ()
{
	int n,x;
	printf("nhap x: ");
	scanf("%d",&x);
	printf("nhap n : ");
	scanf("%d",&n);
	Tinh(x,n);
	return 0;
}
