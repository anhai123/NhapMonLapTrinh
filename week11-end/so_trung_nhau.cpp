#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cmath>
using namespace std;

bool isDuplicate(vector<int> numberList, int index) {
	int number = numberList[index];
	for (size_t i = 0; i < numberList.size(); i++)
	{
		if (numberList[i] == number && i != index)
			return true;
	}
	return false;
}

int main() {
	int n = 0;
	vector<int> numberList;
	while (n != -1) {
		cin >> n;
		numberList.push_back(n);
	}
	for (size_t i = 0; i < numberList.size(); i++)
	{
		if (!isDuplicate(numberList, i))
			cout << numberList[i] << " ";
	}
}