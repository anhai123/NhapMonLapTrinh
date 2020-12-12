#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int coordinate_x[] = { -1, 0 ,1,-1, 0 ,1,-1, 0 ,1 };
int coordinate_y[] = { -1,-1,-1,0,0,0,1,1,1 };

struct Pixel {
	int x;
	int y;
	Pixel(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	}
};

typedef vector<vector<int>> Image;
typedef vector<Pixel> PixelList;

PixelList get_sample_pixel(int x, int y) {
	PixelList sample_pixels;
	for (size_t i = 0; i < 9; i++)
	{
		Pixel pixel(x + coordinate_x[i], y + coordinate_y[i]);
		sample_pixels.push_back(pixel);
	}
	return sample_pixels;
}

vector<int> sample_image(PixelList sample_location, Image image) {
	PixelList correct_locations;
	vector<int> values;
	int image_size = image.size();
	for (Pixel pixel : sample_location) {
		if ((pixel.x >= 0 && pixel.x < image_size) &&
			(pixel.y >= 0 && pixel.y < image_size))
			correct_locations.push_back(pixel);
	}
	for (auto pixel : correct_locations) {
		values.push_back(image[pixel.x][pixel.y]);
	}
	return values;
}

int average(vector<int> values) {
	float sum = 0;
	for (auto value : values) {
		sum += value;
	}
	return (int)(sum / values.size());
}

Image read_image(string file_path) {
	Image image;
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
		image.push_back(pixel_line);
	}
	return image;
	file.close();
}

int main() {
	string file_path;// = "D:/UET-teaching/NhapMonLapTrinh/week9-1/1.txt";
	cin >> file_path;
	Image image = read_image(file_path);
	Image smooth_image = read_image(file_path);
	int image_size = image.size();

	for (size_t h = 0; h < image_size; h++)
	{
		for (size_t w = 0; w < image_size; w++) {
			PixelList sample_locations = get_sample_pixel(h, w);
			vector<int> values = sample_image(sample_locations, image);
			int value = average(values);
			smooth_image[h][w] = value;
		}
	}


	for (auto line : smooth_image) {
		for (int pixel_value : line)
			cout << pixel_value << " ";
		cout << endl;
	}
}