#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string>
#include<map>

using namespace std;


int* create_empty_counter() {
	int* arr = new int[26];
	for (size_t i = 0; i < 26; i++)
	{
		arr[i] = 0;
	}
	return arr;
}

int* count_character(string s) {
	int* character_count = create_empty_counter();
	for (char c : s) {
		character_count[c - 'a'] += 1;
	}
	return character_count;
}

bool can_add_to_string(char character, int* character_count, int* used_characters) {
	return character_count[character] / 2 - used_characters[character] > 0;
}

bool can_remove_from_string(char character, int* character_count, int* used_characters, int* remain_characters) {
	return (used_characters[character] + remain_characters[character] - 1) >= character_count[character] / 2;
}

string reverse_characters(string s) {
	int* character_count = count_character(s);
	int* used_characters = create_empty_counter();
	int* remain_characters = create_empty_counter();
	for (size_t i = 0; i < 26; i++)
	{
		remain_characters[i] = character_count[i];
	}
	string result = "";
	reverse(s.begin(), s.end());
	for (auto c : s) {
		c = c - 'a';
		if (can_add_to_string(c, character_count, used_characters)) {
			while (!result.empty() && (result[result.size() - 1] - 'a' > c) &&
				can_remove_from_string(result[result.size() - 1] - 'a', character_count, used_characters, remain_characters)) {
				char skip_character = result[result.size() - 1];
				result.pop_back();
				used_characters[skip_character - 'a'] -= 1;
			}
			used_characters[c] += 1;
			result.push_back(c + 'a');
		}
		remain_characters[c] -= 1;
	}

	return result;
}

int main() {
	string s = "bdabaceadaedaaaeaecdeadababdbeaeeacacaba";
	cin >> s;
	cout << reverse_characters(s);
}