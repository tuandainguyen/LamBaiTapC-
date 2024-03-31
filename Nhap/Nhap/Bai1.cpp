#include<iostream>
using namespace std;

int main()
{
  // tu a -> b xuat ra so chan 
	int a;
	int b;
	cout << "Nhap so nguyen duong: a = ";
	cin >> a;
	cout << "Nhap so nguyen duong: b = ";
	cin >> b;
	int dem_chan = 0;
	int dem_le = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0 && i != 0)
		{
			dem_chan = dem_chan + 1;
	
		}
		if (i % 2 != 0)
		{
			dem_le += 1;
			
		}
		
	}
	cout << "\n Co " << dem_le << " so le";
	cout << "\n Cac so le la: ";
	for (int i = a; i <= b; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
		}
	}
	cout << "\n Co " << dem_chan << " so chan";
	cout << "\n Cac sp chan la: ";
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0 && i != 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}