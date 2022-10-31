#include <math.h>
#include <stdio.h>

int testGoldbach(int num);
int IsPrime(int n);
int main() {
	int number;
	while (1) {
		scanf("%d", &number);
		testGoldbach(number);
	}

	return 0;
}
int testGoldbach(int num) {
	if (num < 6 || num % 2 != 0) {
		printf("error\n");
		return 0;
	}

	for (int i = 2; i < num / 2; i++) {
		if (IsPrime(i) && IsPrime(num - i)) {
			printf("%d = %d + %d\n", num, i, num - i);
		}
	}

	return 1;
}
int IsPrime(int n) {
	if (n <= 1) {
		return 0;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}