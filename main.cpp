#include <iostream>
#include <stack>
using namespace std;

int main() {
	int in;
	stack<int> c;
	cout << "enter in 10 numbers" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> in;
		c.push(in);
	}

	cout << " we will print your number backwards" << endl;
	for (int j = 0; j < 10; j++) {
		cout << c.top() << endl;
		c.pop();
	}






}
