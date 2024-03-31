//Kiểm tra số  nguyên tố
#include<iostream>
using namespace std;

int main()
{

	int n;
	cout << " Nhap n = ";
	cin >> n;
	bool check = true;

	int dem = 0;
	if (n < 2)
	{
		check = false;
	}
	else //n >= 2
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				check = false;
				dem ++;
			}
		}
	
	}
	if (dem == 2)
	{
		cout << n << " No la so nguyen to ";
	}
	else//dem != 2
	{
		cout << n << " Khong phai la so nguyen to ";
	}


	return 0;
}