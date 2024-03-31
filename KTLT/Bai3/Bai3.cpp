#include<iostream>
using namespace std;

int bai(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return bai(m - 1, 1);
	else if (m > 0 && n > 0)
		return bai(m - 1, bai(m, n - 1));
}
int main()
{
	int m, n;
	cout << " Nhap m = ";
	cin >> m;
	cout << " Nhap n = ";
	cin >> n;
	cout << " Bai 3 = " << bai(m,n);

	return 0;
}
