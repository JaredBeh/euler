#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned long sum = 0;
	long nums[3] = {1, 1, 2};
	while(nums[2] < 4000000) {
		if(nums[2]%2==0) {
			sum += nums[2];
		}
		nums[0] = nums[1];
		nums[1] = nums[2];
		nums[2] = nums[0] + nums[1];
	}
	printf("%lu\n", sum);
	return 0;
}
