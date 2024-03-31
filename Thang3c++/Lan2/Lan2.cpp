#include<iostream>
using namespace std;

int main()
{

	int n;
	cout << "Nhap so nguyen n = ";
	cin >> n;


	int dem = 0;

	if (n < 2)
	{
		cout << n << " Khong phai so nguyen to";
	}
	else //n >= 2
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				dem++;
			}
		}

		if (dem == 2)
		{
			cout << n << " No la so nguyen to";
		}
		else
		{
			cout << n << " Khong phai la so nguyen to";
		}
	}



	return 0;
}