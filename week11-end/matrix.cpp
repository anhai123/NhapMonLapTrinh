
int** getMatrix(int m, int n) {
	int** matrix = new int* [m];
	for (int i = 0; i < m; i++)
	{
		*(matrix + i) = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> *(*(matrix + i) + j);
		}
	}
	return matrix;
}

void putNorm(int** matrix, int m, int n) {
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			int value = *(*(matrix + i) + j) > 0 ? *(*(matrix + i) + j) : 0;
			cout << value << " ";
		}
		cout << endl;
	}
}
