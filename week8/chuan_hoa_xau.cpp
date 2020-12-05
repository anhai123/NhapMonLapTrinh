#include<iostream>
#include<string>
#include<fstream>

// D:/UET-teaching/NhapMonLapTrinh/week8/3.2.1.txt

using namespace std;

char to_upper(char character) {
	if (character <= 'z' && character >= 'a')
		return character - 'a' + 'A';
	else
		return character;
}

char to_lower(char character) {
	if (character <= 'Z' && character >= 'A')
		return character - 'A' + 'a';
	else
		return character;
}

string normalize(string input) {
	string normalized_string;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 || input[i - 1] == ' ')
			normalized_string.push_back(to_upper(input[i]));
		else
			normalized_string.push_back(to_lower(input[i]));
	}
	return normalized_string;
}

int main() {
	string file_path;
	int n;

	cin >> file_path;
	cout << file_path << endl;

	ifstream file;
	file.open(file_path);
	file >> n;
	file.get();
	for (size_t i = 0; i < n; i++)
	{
		string new_line;
		getline(file, new_line);
		new_line = normalize(new_line);
		cout << new_line << endl;
	}

}