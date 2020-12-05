#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	int d, m, y;
	cin >> d >> m >> y;
	int k = d;
	if (m < 3) {
		m += 12;
		y -= 1;
	}
	int f = int(k + int((13 * m + 1) / 5) + y + int(y / 4) - int(y / 100) + int(y / 400));
	cout << (f + 1) % 7;
}