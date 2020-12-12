#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;
typedef vector<vector<int>> Image_values;
class Image {
private:
	vector<vector<int>> pixel_values;
	Image_values _read_image_from_file(string file_path);
public:
	Image(string file_path) {
		this->pixel_values = this->_read_image_from_file(file_path);
	}
	void print_image();
};

int main() {
	Image image("D:/UET-teaching/NhapMonLapTrinh/week9-1/1.txt");
	image.print_image();
}

void Image::print_image() {
	{
		for (auto line : pixel_values) {
			for (int value : line) {
				cout << value << " ";
			}
			cout << "\n";
		}
	}
}

Image_values Image::_read_image_from_file(string file_path) {
	Image_values values;
	ifstream file;
	file.open(file_path);
	int size;
	file >> size;
	for (size_t h = 0; h < size; h++)
	{
		vector<int> pixel_line;
		for (size_t w = 0; w < size; w++)
		{
			int value;
			file >> value;
			pixel_line.push_back(value);
		}
		values.push_back(pixel_line);
	}
	return values;
	file.close();
};