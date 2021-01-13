int UCLN(int a, int b) {
	if (b)
		return UCLN(b, a % b);
	return a;
}
struct Fraction {
	int a;
	int b;

	Fraction() {
		this->a = 0;
		this->b = 1;
	}

	Fraction(int _a, int _b) {
		this->a = _a;
		this->b = _b;
	}

	double value() {
		if (this->b == 0)
			return -1;
		else
			return ((double)(this->a)) / this->b;
	}

	void print() {
		int ucln = UCLN(this->a, this->b);
		cout << this->a / ucln << "/" << this->b / ucln << endl;
	}
};

Fraction add(Fraction x, Fraction y) {
	return Fraction(x.a * y.b + x.b * y.a, x.b * y.b);
}