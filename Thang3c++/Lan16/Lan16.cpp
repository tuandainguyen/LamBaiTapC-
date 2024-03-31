//Kiểm tra số nguyên tố
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i;
	cout << "Nhap i = ";
	cin >> i;

	if (i < 2)
	{
		cout << i << " Khong phai so nguyen to!";
	}
	else
	{
		for (int a = 2; a <= sqrt(i); a++)
		{
			if (i % a == 0)
			{
				cout << i << " Khong phai so nguyen to!";
				return 0;
			}
		}
		cout << i << " No la so nguyen to!";
	}



	return 0;
}