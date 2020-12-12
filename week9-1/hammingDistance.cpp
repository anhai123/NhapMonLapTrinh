#include<iostream>
#include<string>
#include<bitset>

int hammingDistance(int x, int y) {
	string bitstring_x = bitset<64>(x).to_string();
	string bitstring_y = bitset<64>(y).to_string();
	int distance = 0;
	for (size_t i = 0; i < 64; i++)
	{
		if (bitstring_x[i] != bitstring_y[i])
			distance++;
	}
	return distance;
}