#include <iostream>
#include <string> //string 함수를 받기 위한 전처리기 포함.
using namespace std;

int main() {
	string name, address, age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	getline(cin, age);

	cout << name << "," << address << "," << age << endl;
}