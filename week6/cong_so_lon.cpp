#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string number_1;
	string number_2;
	string result;
	cin >> number_1;
	cin >> number_2;
	reverse(number_1.begin(), number_1.end());
	reverse(number_2.begin(), number_2.end());

	int max_char = max(number_1.size(), number_2.size());
	int temp = 0;
	for (size_t i = 0; i < max_char; i++)
	{
		int char_1 = 0;
		int char_2 = 0;
		if (i < number_1.size()) {
			char_1 = number_1[i] - '0';
		}

		if (i < number_2.size()) {
			char_2 = number_2[i] - '0';
		}
		int sum = char_1 + char_2 + temp;
		if (sum > 9) {
			temp = 1;
			sum = sum % 10;
		}
		else {
			temp = 0;
		}
		result.push_back((char)(sum + '0'));
	}
	if (temp == 1) {
		cout << '1';
	}
	for (int i = result.size() - 1; i >= 0; i--)
	{
		cout << result[i];
	}
	return 0;
}