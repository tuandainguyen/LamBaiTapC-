//Ham function
#include<iostream>

using namespace std;

int sum(int n, int a, int b, int c)
{
	if (n == 0)
		return a;
	else 
		return sum(n - 1, a, b, c) + b*n + c;

}

int main()
{
	int n, a, b, c;
	cout << "Nh?p s? n = ";
	cin >> n;
	cout << "Nh?p s? a = ";
	cin >> a;
	cout << "Nh?p s? b = ";
	cin >> b;
	cout << "Nh?p s? c = ";
	cin >> c;
	cout << "SUM = " << sum(n, a, b, c);

	return 0;
}