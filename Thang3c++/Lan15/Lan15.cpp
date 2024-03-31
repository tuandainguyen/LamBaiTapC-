//Kiểm tra số nguyên tố
#include<iostream>

using namespace std;

int main()
{

	int i;
	cout << "Nhap bien i = ";
	cin >> i;

	int dem = 0;

	if (i < 2)
	{
		cout << i << " Khong phai so nguyen to";

	}


	else
	{
		for (int a = 1; a <= i; a++) {
			if (i % a == 0)
			{
				dem++;

			}
		}
		if (dem == 2)
		{
			cout << i << " No la so ngyuen to";
		}
		else
		{
			cout << i << " Khong phai so nguyen to";
		}
	}

	return 0;
}