#include <stdio.h>

void caculate(int a, int b);                                     // caculate함수 선언 ( 함수의 내용이 너무 길어서 앞에서 선언만 함 )

int main(void)                                                     // mian 함수 선언
{
	int a,b=0;                                                       // 정수형 변수 a,b선언
	printf("변환할 10진수 입력: ");                                 
	scanf_s("%d", &a);                                               // 변활할 10진수 입력받아 변수 a에 입력
	
	printf("변환할 진법 입력(2-16): ");
	scanf_s("%d", &b);                                               // 변활할 진법을 입력받아 변수 b에 입력

	if (b < 2 || b>16) {                                             // b가 2보다 작거나 16보다 크다면
		printf("잘못된 진수입니다");                                 // "잘못된 진수입니다"를 출력
		return;                                                      // 함수를 끝낸다
	}
	printf("%d의 %d진수 변환 값: ", a, b);                           // "a의 b진수 변환 값: " 출력 ( 잘못된 진법이 아니라면 공통으로 나오는 문장이라 caculate함수 바깥에 넣음 )
	caculate(a,b);                                                   // caculate함수에 a,b를 입력한다   
}



void caculate(int a, int b) {                                    // caculate의 함수 선언

	if (b == 10) {                                                 // b(진법)이 10일경우,
		printf("%c", a+48);                                          // 숫자 a를 문자로 그대로 출력하고 ( 10진법에서 10진법이므로 그대로 a를 출력한다 )
		return;                                                      // 함수를 종료 ( b가 10 이하일때에 포함되게 만들 수도 있지만, 진수 변환이 아니므로 빠르게 계산되게 만듦)
	}
	else if (b < 10) {                                             // b(진법)이 10보다 작을 경우 ( main 함수에 따라 2<=b<10 )
		if (a < b) {                                                 // a가 b보다 작다면
			printf("%c", a + 48);                                      // 숫자 a를 문자로 그대로 출력
			return;                                                    // 함수를 종료
		}
		else if (a%b == 0) {                                         // 혹은 a를 b로 나눈 나머지가 0이라면 ( a 가 b 이상이고 )
			caculate(a / b, b);                                        // a를 b로 나눈 몫을 b진수로 caculate함수에 넣고
			printf("%c",48);                                           // 문자 '0'을 출력한다
			return;                                                    // 함수를 종료
		}
		else  {                                                      // 그외의 경우 ( a가 b이상, b로 나누어지지 않음 )
			caculate(a / b, b);                                        // (a를 b로 나눈 몫, b)를 caculate함수에 넣고
			printf("%c",a%b+48);                                       // 나머지를 문자로 그대로 출력
			return;                                                    // 함수를 종료
		}
	}
	else {                                                         // b(진법)이 11이상 16이하라면
		if (a < b) {                                                 // a가 b보다 작다면
			if (a < 10) {                                               // 만약 a가 10보다 작다면
				printf("%c", a + 48);                                     // 숫자 a를 문자로 그대로 출력
				return;                                                   // 함수를 종료
			}
			else {                                                      // 그외의 경우 ( a가 10이상이라면 )
				printf("%c", a + 55);                                     // 아스키 코드에 숫자 a에 55를 더한 값을 넣은 문자 출력 ( 10>A 11>B 12>C 13>D 14>E 15>F )
				return;                                                   // 함수를 종료
			}
		}
		else if (a % b == 0) {                                       // 혹은 a가 b로 나누어 진다면 ( a가 b 이상이고 )
			caculate(a / b, b);                                         // (a를 b로 나눈 몫, b)를 caculate함수에 넣고
			printf("%c", 48);                                           // 문자'0'을 출력
			return;                                                     // 함수를 종료 
		}
		else {                                                       // 그외의 경우 ( a가 b이상, b로 나누어지지 않음 )
			caculate(a / b, b);                                         // (a를 b로 나눈 몫, b)를 caculate함수에 넣고
			if (a%b < 10) {                                               // 만약 a를 b로 나눈 나머지가 10보다 작다면
				printf("%c", a%b + 48);                                   // a를 b로 나눈 나머지를 문자로 그대로 출력
				return;                                                   // 함수를 종료
			}
			else {                                                        // 그외의 경우 (a를 b로 나눈 나머지가 10 이상)                                                     
				printf("%c", a%b + 55);                                   // 아스키 코드에 a를 b로 나눈 나머지에 55를 더한 값을 넣은 문자 출력 ( A,B,C,D,E,F )
				return;                                                   // 함수를 종료
			}
		}

	}
    
}