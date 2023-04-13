# include <stdio.h>

int big1() {                                                 // 최소공배수함수1 선언
	int n1, n2, i, a, b;                                     // 정수 n1,n2,i,a,b 선언
	printf("첫번째 정수 입력: ");                          
	scanf_s("%d", &n1);                                      // 입력받은 정수를 n1에 저장
	printf("두번째 정수 입력: ");
	scanf_s("%d", &n2);                                      // 입력받은 정수를 n2에 저장

	for (i = 1; i <= n1 && i <= n2; i++) {                   // i 가 1에서 n1과n2중 큰수까지 1씩 커지며 반복
		if (n1 % i == 0 && n2 % i == 0) {                      // 만약 n1과 n2를 i로 나눈 나머지가 둘다 0이라면 (i가 n1과 n2의 공약수라면)
			a = i;                                               // a에 i를 대입  
		}
	}
	b = (n1 * n2) / a;                                       // b에 n1과n2의 곱을 a로 나눈값을 대입 (a는 최대공약수, 두수의 곱을 최대공약수로 나누면 최소공배수)
	printf("%d", b);                                         // b를 출력 
	return b;                                                // b값을 return
}

int big2(int n1, int n2) {                                   // 정수자료 n1,n2를 파라미터로 하는 최소공배수함수2 선언
	int i, a, b;                                             // 정수 i,a,b 선언
	for (i = 1; i <= n1 && i <= n2; i++) {                   // i가 1에서 n1과n2중 큰수까지 1씩 커지며 반복
		if (n1 % i == 0 && n2 % i == 0) {                      // 만약 n1과 n2를 i로 나눈 나머지가 둘다 0이라면 (i가 n1과 n2의 공약수라면)
			a = i;                                               //a에 i를 대입
		}
	}
	b = (n1 * n2) / a;                                       // b에 n1과n2의 곱을 a로 나눈값을 대입
	printf("%d", b);                                         // b값을 출력
	return b;                                                // b값을 return

}

int small1() {                                               // 최대공약수함수1 선언
	int n1, n2, i, a;                                        // 정수 n1,n2,i,a 선언
	printf("첫번째 정수 입력: ");                            
	scanf_s("%d", &n1);                                      // 입력받은 정수를 n1에 저장
	printf("두번째 정수 입력: "); 
	scanf_s("%d", &n2);                                      // 입력받은 정수를 n2에 저장

	for (i = 1; i <= n1 && i <= n2; i++) {                   // i 가 1에서 n1과n2중 큰수까지 1씩 커지며 반복
		if (n1 % i == 0 && n2 % i == 0) {                      // 만약 n1과 n2를 나눈 나머지가 둘다 0이라면 (i가 n1과 n2의 공약수라면)
			a = i;                                               // a에 i를 대입
		}
	}
 	printf("%d", a);                                         // a를 출력
	return a;                                                // a값을 return

}

int small2(int n1, int n2) {                                 // 정수자료 n1,n2를 파라미터로 하는 최대공약수함수2 선언
	int i, a;                                                // 정수 a, i 선언
	for (i = 1; i <= n1 && i <= n2; i++) {                   // i 가 1에서 n1과n2중 큰수까지 1씩 커지며 반복
 		if (n1 % i == 0 && n2 % i == 0) {                      // 만약 n1과 n2를 나눈 나머지가 둘다 0이라면 (i가 n1과 n2의 공약수라면)
			a = i;                                               // a에 i를 대입
		}
	}
	printf("%d", a);                                         // a를 출력
	return a;                                                // a값을 return

}

int cnt1() {                                                 // 소수판별함수1 선언
	int a, b, c = 0;                                         // 정수 a,b,c 선언, c에 0대입
	printf("반별할 숫자를 입력하시오: "); 
	scanf_s("%d", &a);                                       // 입력받은 숫자를 a에 저장
	for (b = 2; b < a; b++) {                                // b가 2에서부터 a보다 작을때 1씩 커지며 반복
		if (a % b == 0) {                                      // 만약 a를 b로 나눈 나머지가 0이라면
			c++;                                                 // c값을 1 늘린다
		}
	}
	if (c == 0) {                                            // 만약 c가 0이라면                                
		printf("1");                                           // 1을 출력하고 (소수임을 출력)
		return 1;                                              // 1값을 return, 함수를 종료
	}
	else {                                                   // 혹은 c가 0이 아니라면
		printf("0");                                           // 0을 출력하고 (소수가 아님을 출력)
		return 0;                                              // 0값을 return, 함수를 종료
	}
}

int cnt2(int n1) {                                           // 정수자료 n1을 파라미터로 하는 소수판별함수2 선언
	int b, c = 0;                                            // 정수자료 b,c 선언, c에 0대입
	for (b = 2; b < n1; b++) {                               // b가 2에서부터 a보다 작을때 1씩 커지며 반복     
		if (n1 % b == 0) {                                     // 만약 a를 b로 나눈 나머지가 0이라면
			c++;                                                 // c값을 1 늘린다
		}
	}
	if (c == 0) {                                            // 만약 c가 0이라면  
		printf("1");                                           // 1을 출력하고 (소수임을 출력)
		return 1;                                              // 1값을 return, 함수를 종료
	}
	else {                                                   // 혹은 c가 0이 아니라면
		printf("0");                                           // 0을 출력하고 (소수가 아님을 출력)
		return 0;                                              // 0값을 return, 함수를 종료
	}
}
