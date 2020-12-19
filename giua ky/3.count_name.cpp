#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

vector<string> split_string(string line) {
	vector<string> words;
	string word = "";
	for (char c : line)
	{
		if (c != ' ')
			word.push_back(c);
		else {
			words.push_back(word);
			word = "";
		}
	}
	words.push_back(word);
	return words;
}

int count_name(vector<string> words) {
	int number_of_name = 0;
	for (string word : words)
		if (word.size() >= 2 && ('A' <= word[0] && word[0] <= 'Z'))
			number_of_name++;
	return number_of_name;
}

int main() {
	string file_path;
	cin >> file_path;
	//file_path = "D:/3.5.1.txt";
	ifstream f;
	f.open(file_path);
	int n;
	f >> n;
	f.get();
	for (size_t i = 0; i < n; i++)
	{
		string line;
		getline(f, line);
		vector<string> words = split_string(line);
		int number_of_name = count_name(words);
		cout << number_of_name << endl;
	}
}
