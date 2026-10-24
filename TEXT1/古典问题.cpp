#include<iostream>
using namespace std;

int main() {
	long long month1 = 1;
	long long month2 = 1;
	long long current;

	cout << "前20个月每个月的兔子总数如下：" << endl;
	cout << "第1个月：" << month1 << "对" << endl;
	cout << "第2个月：" << month2 << "对" << endl;

	for (int i = 3;i <= 20;i++) {
		current = month1 + month2;
		cout << "第" << i << "个月" << current << "对" << endl;

		month1 = month2;
		month2 = current;
	}
	return 0;
}