#include <iostream>

using namespace std;
void nhapmang(int a[], int n) 
{
	if (n == 0)
	{
		return;
	}
	else
		nhapmang(a, n - 1);
	cout << "phan tu thu " << n - 1 << " : ";
		cin >> a[n - 1];
}
int tongmang(int a[],int n) 
{
	if (n == 0)
	{
		return 0;
	}
	else 
	{
		int s;
		s = tongmang(a, n - 1);
		s = s + a[n - 1];
		return s;
	}
}
int main()
{
	int n = 8;
	int a[10];
	nhapmang(a,n);
	cout << tongmang(a, n);

}