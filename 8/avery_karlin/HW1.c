#include<stdio.h>

int num1(int n) {
	int c = 1;
	int s = 0;
	while(c < n) {
		if(c/3 == c/3.0 || c/5 == c/5.0) {
			s += c;
		}
		c++;
	}
	return s;
}

int num2(int n) {
	int t1 = 1;
	int t2 = 2;
	int s = 2;
	int newt;
	while(t1 + t2 <= n) {
		newt = t2 + t1;
		t1 = t2;
		t2 = newt;
		if(t2/2 == t2/2.0) {
			s += t2;
		}
	}
	return s;
	}

int main() {
	printf("%d\n", num1(1000));
	printf("%d\n", num2(4000000));
	return 0;
}