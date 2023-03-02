#include <stdio.h>



 double avg_digits(int N) {

	int digit = 0, sum=0, count = 0;

	if (N < 0) {
		printf("Please enter a number greater than or equal to 0.");
		return 133;
	}

	while (N > 0) {
		digit = N % 10;
		printf("%d", digit);
		sum += digit;
		N = N / 10;
		count += 1;

	}
	return sum / count;
}

int main(void) {

	return 133;
}