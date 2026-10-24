#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "所有三位水仙花数：";
	for (int i = 100; i <= 999; i++) {
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;

		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}