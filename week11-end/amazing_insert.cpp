void amazingInsert(char* s) {
	int size = strlen(s);
	for (int i = size; i >= 1; i--) {
		*(s + i) = *(s + i - 1);
	}
	*(s) = '0';
	*(s + size + 1) = '0';
	*(s + size + 2) = '\0';
}
