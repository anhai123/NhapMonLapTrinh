#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int n) {
	if (n == 2)
		return true;
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (size_t i = 2; i < n; i++)
	{
		if (isPrime(i) && isPrime(n - i)) {
			cout << i << " " << n - i;
			return 0;
		}
	}
	cout << -1;
}