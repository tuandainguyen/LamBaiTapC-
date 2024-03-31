#include<iostream>
using namespace std;

class stack {
private:
	int n = 0;
	int a[100];
public:
	int size() {
		return this->n;
	}

	bool isEmpty() {
		if (this->n == 0) return true;
		return false;
	}

	int top() {
		return this->a[this->n - 1];
	}

	void push(int x) {
		this->a[this->n] = x;
		this->n++;
	}

	void pop() {
		this->n--;
	}
};

int main() {
	stack st;
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(6);
	cout << st.size();
	cout << endl;
	while (!st.isEmpty()) {
		cout << st.top() << " ";
		st.pop();
	}


	return 0;
}