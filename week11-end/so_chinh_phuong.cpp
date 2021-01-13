#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cmath>
using namespace std;

int main() {
	long n;
	cin >> n;
	long square = (long)sqrt(n);
	if (square * square == n)
		cout << "co";
	else
		cout << "khong";
}