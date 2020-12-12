#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main() {
	string pin, num;
	cin >> pin >> num;
	for (char c : pin) {
		char c_encrypt = num[c - '0'];
		cout << c_encrypt;
	}
}