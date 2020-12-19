#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cmath>
using namespace std;

int main() {
	long long n, temp;
	cin >> n;
	temp = (long long)sqrt(n);
	if (temp * temp == n)
		cout << "co";
	else
		cout << "khong";
	return 0;
}
