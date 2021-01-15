#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	int array[100000];
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	bool convex = true;
	for (size_t i = 0; i < n/2; i++)
	{
		if (array[i] > array[i + 1]) {
			convex = false;
		}
	}
	for (size_t i = n/2; i < n - 1; i++)
	{
		if (array[i] < array[i + 1]) {
			convex = false;
		}
	}
	if (convex) {
		cout << "Loi";
		return 0;
	}
	else {
		bool concave = true;
		for (size_t i = 0; i < n / 2; i++)
		{
			if (array[i] < array[i + 1]) {
				concave = false;
			}
		}
		for (size_t i = n / 2; i < n - 1; i++)
		{
			if (array[i] > array[i + 1]) {
				concave = false;
			}
		}
		if (concave) {
			cout << "Lom";
		}
		else {
			cout << "Vo danh";
		}

	}
	return 0;
}