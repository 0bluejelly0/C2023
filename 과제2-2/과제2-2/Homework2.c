# include <stdio.h>

int big1() {
	int n1, n2, i, a, b;
	printf("첫번째 정수 입력: ");
	scanf_s("%d", &n1);
	printf("두번째 정수 입력: ");
	scanf_s("%d", &n2);

	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			a = i;
		}
	}
	b = (n1 * n2) / a;
	printf("%d", b);
	return b;
}

int big2(int n1, int n2) {
	int i, a, b;
	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			a = i;
		}
	}
	b = (n1 * n2) / a;
	printf("%d", b);
	return b;

}

int small1() {
	int n1, n2, i, a;
	printf("첫번째 정수 입력: ");
	scanf_s("%d", &n1);
	printf("두번째 정수 입력: ");
	scanf_s("%d", &n2);

	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			a = i;
		}
	}
	printf("%d", a);
	return a;

}

int small2(int n1, int n2) {
	int i, a;
	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			a = i;
		}
	}
	printf("%d", a);
	return a;

}

int cnt1() {
	int a, b, c = 0;
	printf("반별할 숫자를 입력하시오: ");
	scanf_s("%d", &a);
	for (b = 2; b < a; b++) {
		if (a % b == 0) {
			c++;
		}
	}
	if (c == 0) {
		printf("1");
		return 1;
	}
	else {
		printf("0");
		return 0;
	}
}

int cnt2(int n1) {
	int b, c = 0;
	for (b = 2; b < n1; b++) {
		if (n1 % b == 0) {
			c++;
		}
	}
	if (c == 0) {
		printf("1");
		return 1;
	}
	else {
		printf("0");
		return 0;
	}
}
