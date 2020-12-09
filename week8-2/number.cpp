#include<iostream>
#include<cmath>

using namespace std;
int main() {
	int n;
	cin >> n;
	n = n >= 0 ? n : -n;
	cout << (int)(log(n) / log(10)) + 1;

}