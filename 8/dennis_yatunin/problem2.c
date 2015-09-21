int main() {
	int one = 1;
	int two = 2;
	int temp;
	int sum = 0;
	while (two < 4000000) {
		if (two % 2 == 0) {
			sum += two;
		}
		temp = two;
		two += one;
		one = two;
	}
	printf("%d", sum);
	return 0;
}
