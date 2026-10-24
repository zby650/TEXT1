#include<iostream>
using namespace std;

int main() {
	int n, a;
	cout << "请输入两个正整数n和a：";
	cin >> n >> a;

	long long term = 0;
	long long sum = 0;

	for (int i = 1;i <= n;i++) {
		term = term * 10 + a;
		sum += term;
	}

	cout << "数列所有项的和为：" << sum << endl;
	return 0;
}