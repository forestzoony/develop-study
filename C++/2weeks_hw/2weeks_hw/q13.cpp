#include <iostream>
#include <cstring>
using namespace std;

bool checkError() {
	if (cin.fail()) { 
		cin.ignore(100, '\n');
		cout << "입력 오류" << endl;
		return true; // 오류 있음
	}
	else
		return false; // 오류 없음
}

int main() {
	int menu; // 1~4
	int num; // 몇인분

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> menu;
		if (checkError()) continue; 

		if (menu < 1 || menu > 4) {
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
		else if (menu == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			return 0;
		}

		// 입력 정상
		cout << "몇인분?";
		cin >> num;
		if (checkError()) continue; 
		if (num < 1) {
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
		switch (menu) {
		case 1:
			cout << "짬뽕 " << num << "인분 나왔습니다" << endl;
			break;
		case 2:
			cout << "짜장 " << num << "인분 나왔습니다" << endl;
			break;
		case 3:
			cout << "군만두 " << num << "인분 나왔습니다" << endl;
			break;
		}
	}
}