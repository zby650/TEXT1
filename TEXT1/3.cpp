#include<iostream>
using namespace std;

int main() {
	int n, temp, reversed = 0;
	cout << "输入一个整数：";
	cin >> n;

	temp = n;
	while (temp != 0) {
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	if (n == reversed) {
		cout << n << "是回文数" << endl;
	}
	else {
		cout << n << "不是回文数" << endl;
	}
	return 0;
}