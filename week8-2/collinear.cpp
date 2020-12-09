
float vector_length(int x, int y) {
	return sqrt(x * x + y * y);
}

int isCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
	int v1x = x2 - x1;
	int v1y = y2 - y1;
	int v2x = x3 - x1;
	int v2y = y3 - y1;

	float cosine = (v1x * v2x + v1y * v2y) / (vector_length(v1x, v1y) * vector_length(v2x, v2y));
	if (cosine == 1 || cosine == -1)
		return 1;
	else
		return 0;
};
