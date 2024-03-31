//Kiểm tra số nguyên tố
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	if (n < 2)
	{
		cout << n << "Khong phai so nguyen to";
		return 0;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				cout << n << " Khong phai so nguyen to";
				return 0;
			}
		}


		cout << n << " No la so nguyen to";
	}


	return 0;
}