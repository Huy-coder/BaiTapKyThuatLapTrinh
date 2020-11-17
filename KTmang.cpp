#include<stdio.h>

void Nhap(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
}

void Xuat(int a[], int n)
{
  printf("\nmang vua nhap la : ");
  for(int i = 0; i < n; i++)
    printf("%d ",a[i]);
}

int SNT(int n)
{
  if(n < 1)
    return 0;
  if(n == 2)
    return 1;
  for(int i = 2; i < n; i++)
    if(n % i == 0)
      return 0;
  return 1;
}

/*int KTmang(int a[], int n) //cach 1
{
  int dem = 0;
  for(int i = 0; i < n; i++)
  {
    if(SNT(a[i]))
      dem += 1;
  }
  if(dem == n)
    printf("mang toan so nguyen to");
  else
    printf("mang khong hoan toan la so nguyen to");
  return 0;
}
*/


/*int KTmang(int a[], int n) //cach 2
{
  int dem = 0;
  for(int i = 0; i < n; i++)
  {
    if(SNT(a[i]) == 0)
      dem = 0;
    else dem+= 1;
  }
  if(dem == 0)
    printf("mang khong hoan toan la so nguyen to");
  else
    printf("mang hoan toan la so nguyen to");
  return 0;
}*/

int KTmang(int a[], int n) // cach 3
{
  int dem = 0;
  for(int i = 0; i < n; i++)
    {
      if(SNT(a[i]) == 0)
        return printf("mang khong hoan toan la so nguyen to");
    }
    return printf("mang toan so nguyen to");
}
int main()
{
  int a[100], n;
  printf("Nhap so phan tu mang : ");
  scanf("%d",&n);
  Nhap(a,n);
  KTmang(a,n);
  Xuat(a,n);
  return 0;
}
