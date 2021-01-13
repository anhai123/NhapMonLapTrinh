struct Rectangle {
	int height;
	int length;

	Rectangle() {
		this->height = 0;
		this->length = 0;
	}

	Rectangle(int _height, int _length) {
		this->height = _height;
		this->length = _length;
	}

	int getPerimeter() {
		return 2 * (this->height + this->length);
	}

	void print() {
		for (int h = 0; h < this->height; h++)
		{
			for (int w = 0; w < this->length; w++)
			{
				if (h == 0 || h == (this->height - 1))
					cout << "*";
				else {
					if (w == 0 || w == (this->length - 1))
						cout << "*";
					else
						cout << " ";
				}
			}
			cout << endl;
		}
	}
};

int compare(Rectangle a, Rectangle b) {
	if (a.getPerimeter() < b.getPerimeter())
		return -1;
	if (a.getPerimeter() == b.getPerimeter())
		return 0;
	return 1;
}