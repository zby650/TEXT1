#include<iostream>
using namespace std;

int main() {
    int score;
    cout << " 请输入电影打分: ";
    cin >> score;

    if (score >= 9 && score <= 10) {
        cout << " 经典 "<< endl;
    }
    else if (score >= 7) {
        cout << " 非常好 " << endl;
    }
    else if (score >= 5) {
        cout << " 一般 " << endl;
    }
    else if (score < 5) {
        cout << " 烂片 " << endl;
    }
    return 0;
}
