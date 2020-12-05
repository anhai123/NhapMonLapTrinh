#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	for (size_t i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[s.size() - 1 - i]) {
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
}