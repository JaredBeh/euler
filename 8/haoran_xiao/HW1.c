#include <stdio.h>
#include <stdlib.h>

int q19() {
	int year = 1900;
	int month = 1;
	int day = 1;
	int count = 0;
	int leap = 0;
	while (year < 2001) {
		if (year%4==0&&year!=1900) {leap = 1;}
		while (month < 13) {
			//printf("month:%d day:%d",month,day);
			if (month == 9 ||month == 4||month == 6||month == 11) {
				if (day == 0) {count++;}
				day = (30%7+day)%7;
			}
			else if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) {
				if (day == 0) {count++;}
				day = (31%7+day)%7;
			}
			else{
				if (day == 0) {count++;}
				day = ((28+leap)%7+day)%7;
			}
			//printf("count:%d\n",count);
			//printf("month:%d day:%d\n",month,day);
			month++;
		}
		year++;
		leap = 0;
		month = 1;
		//printf("year: %d")
		//printf("total day: %d\n",count);
	}
	return count-2; //2 in 1900
}

int q17() {
	int length[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
	int twodigit = 3+3+5+4+4+3+5+5+4+3+6+6+8+8+7+7+9+8+8;
	int tens[8] = {6,6,5,5,5,7,6,6};
	int i;
	for (i = 0; i < 8; i++) {
		int j = 0;
		for (j; j < 10; j++) {
			twodigit += length[j]+tens[i];
		}
	}
	int total = twodigit;
	for (i = 1; i < 10; i++) {
		total += (7 + length[i])*100; //n hundred
		total += twodigit + 99*3; //and
	}
	total += 11; //1000
	return total;
}

int q14() {
	int num;
	long longest = 1;
	long curr;
	int best = 2;
	long x;
	for (num = 2; num < 1000000; num++) {
		curr = 0;
		x = num;
		while (x != 1) {
			if (x%2==0) {x /= 2; curr++;}
			else {x = 3*x+1; curr++;}
		}
		if (curr > longest) {
			best = num;
			longest = curr;
		}
		//printf("num: %d\n", num);
	}
	return best;
}

int q6() {
	int num = 1;
	int sum = 0;
	int square = 0;
	for (num; num <= 100; num++) {
		sum += num;
		square += num * num;
	}
	return sum * sum - square;

}


int main() {
	printf("Question 19: Number of Sundays fell on the first of the month during 20th century: %d\n",q19());
	printf("Question 17: Number of letters in [1,1000] spelled out in words: %d\n", q17());
	printf("Question 6: Diff of sum of square and square of sum of 1~100: %d\n", q6());
	printf("Question 14: Number under one million that produce longest Collatz sequence: %d\n", q14());
	return 0;
}