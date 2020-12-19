#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main() {
	int n;
	int arr[100];
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bool is_increase = true;
	bool is_decrease = true;
	for (size_t i = 0; i < (n - 1); i++)
	{
		if (arr[i] < arr[i + 1])
			is_decrease = false;
		if (arr[i] > arr[i + 1])
			is_increase = false;
	}
	if (is_increase) {
		cout << "tang";
	}
	else {
		if (is_decrease)
			cout << "giam";
		else
			cout << "khac";
	}
}
