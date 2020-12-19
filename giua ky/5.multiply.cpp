#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
string addition(string number_1, string number_2) {
	string total_sum;
	reverse(number_1.begin(), number_1.end());
	reverse(number_2.begin(), number_2.end());
	int temp = 0;
	int max_length = max(number_1.size(), number_2.size());
	for (size_t i = 0; i < max_length; i++)
	{
		int digit_1 = 0;
		int digit_2 = 0;
		if (i < number_1.size())
			digit_1 = number_1[i] - '0';
		if (i < number_2.size())
			digit_2 = number_2[i] - '0';
		int sum = digit_1 + digit_2 + temp;
		if (sum >= 10) {
			sum = sum % 10;
			temp = 1;
		}
		else {
			temp = 0;
		}
		total_sum.push_back(sum + '0');
	}
	if (temp == 1) {
		total_sum.push_back('1');
	}
	reverse(total_sum.begin(), total_sum.end());
	return total_sum;
}

string multiply(string number_1, int number_2) {
	string result = "0";
	for (int i = number_1.size() - 1; i >= 0; i--)
	{
		int digit = number_1[i] - '0';
		int product = digit * number_2;
		string product_string = to_string(product);
		for (size_t j = 0; j < number_1.size() - 1 - i; j++)
		{
			product_string.push_back('0');
		}
		result = addition(result, product_string);
	}
	return result;
}
// 123356
//	    7
//	   42
//    350

int main() {
	string number_1 = "123356";
	int number_2 = 7;
	cin >> number_1 >> number_2;
	cout << multiply(number_1, number_2);
	//cout << addition("9999", "1");
}
