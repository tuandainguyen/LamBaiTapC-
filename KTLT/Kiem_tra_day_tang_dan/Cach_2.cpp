﻿#include<iostream>
using namespace std;

int ladaytang(int n, int a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu: a[" << i << "]: ";
		cin >> a[i];

	}

	return 1;
}
//kiểm tra theo kiểu bài toán thuận
bool check_ASC(int n, int a[])
{
	int dem = 0;
	
	for(int i = 0; i < n - 1 ;i++)
	{

		if (a[i + 1] < a[i]) //nếu pt sau >= pt trước
		{
			dem += 1;
			
		}
		

	}
	if (dem == n - 1)//nếu dem bằng n - 1
	{
		cout << "YES";
		
	}
	else //dem != n - 1
	{
		cout << "NO";
		
	}

	return ;//kết thúc sai
}
void xuat_mang(int n, int a[])
{
	cout << "Cac phan tu trong mang la: ";

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << "\n______________________________________\n";
}

int main()
{
	int n;
	int a[1000];
	cout << "Nhap so nguyen duong : n = ";
	cin >> n;
	ladaytang(n, a);
	xuat_mang(n, a);
	check_ASC(n, a);


	return 0;
}