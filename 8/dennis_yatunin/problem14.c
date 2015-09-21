int main() {
	int starter;
	int longestChain = 0;
	int longestChainProducer, temp, counter;
	for (starter = 1000000; starter > 0; starter--) {
		temp = starter;
		counter = 0;
		while (temp != 1) {
			if (temp % 2 == 0) {
				temp /= 2;
			}
			else {
				temp = 3*temp + 1;
			}
			counter++;
		}
		if (counter > longestChain) {
			longestChain = counter;
			longestChainProducer = starter;
		}
	}
	printf("%d", longestChainProducer);
	return 0;
}
