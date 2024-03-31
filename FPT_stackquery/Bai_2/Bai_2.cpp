#include<iostream>
using namespace std;

class queue {
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

	int front() {
		return this->a[0];
	}

	int back() {
		return this->a[this->n - 1];
	}

	void push(int x) {
		this->a[this->n] = x;
		this->n++;
	}

	void pop() {
		for (int i = 0; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		this->n--;
	}
};

int main() {

	queue q;
	q.push(2);
	q.push(3);

	cout << q.size() << endl;
	while (!q.isEmpty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;
	cout << q.size() << endl;


	return 0;
}