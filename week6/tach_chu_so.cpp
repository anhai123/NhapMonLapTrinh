#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	int numbers[4];
	cin >> n;
	for (size_t i = 0; i < 4; i++)
	{
		numbers[i] = n % 10;
		n /= 10;
	}
	for (int i = 3; i >= 0; i--)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}