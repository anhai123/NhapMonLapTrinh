#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<stdio.h>

using namespace std;
bool isPrime(int n) {
	if (n == 2)
		return true;
	for (size_t i = 2; i <= int(sqrt(n)); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	vector<int> primeNumbers;
	for (size_t i = 2; i < n; i++)
	{
		if (isPrime(i))
			primeNumbers.push_back(i);
	}
	primeNumbers.push_back(n);
	int maxDistance = -1;
	int maxLocation = -1;
	for (size_t i = 1; i < primeNumbers.size(); i++)
	{
		int distance = primeNumbers[i] - primeNumbers[i - 1];
		if (distance > maxDistance) {
			maxDistance = distance;
			maxLocation = i;
		}
	}
	int endSequence = primeNumbers[maxLocation];
	if ((maxLocation == primeNumbers.size() - 1) && !isPrime(n)) {
		endSequence += 1;
	}
	for (size_t i = primeNumbers[maxLocation - 1] + 1; i < endSequence; i++)
	{
		cout << i << " ";
	}
}