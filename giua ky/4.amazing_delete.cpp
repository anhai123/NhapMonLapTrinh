void amazingDelete(char* s) {
	s += 1;
	while (*s != '\0') {
		*s = *(s + 2);
		s += 1;
	}
}