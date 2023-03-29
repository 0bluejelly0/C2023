#include <stdio.h>     // stdio.h 사용함

int main() {

	char name[10];                       // 이름을 저장할 문자열 배열 선언 (최대 10글자까지 입력가능)
   	char birth[15];                       // 생년월일을 저장할 문자열 배열 선언 (최대 15글자까지 입력가능)
	char studentid[11];                  // 학번을 저장할 문자열 배열 선언 (최대 11글자까지 입력가능)
	char department[15];                 // 학과명을 저장할 문자열 배열 선언 (최대 15글자까지 입력가능)

	printf("이름을 입력하세요: ");       // 이름을 입력할것을 알림
	scanf_s("%s", name, sizeof(name));                // 문자열을 입력받아 name 에 저장

	printf("생년월일을 입력하세요 (yyyymmdd): ");      // 생년월일을 입력할것을 알림
	scanf_s(" %s", birth, sizeof(birth));                // 문자열을 입력받아 birth 에 저장

	printf("학번을 입력하세요: ");       // 학번을 입력할것을 알림
	scanf_s(" %s", studentid, sizeof(studentid));            // 문자열을 입력받아 studentid 에 저장

	printf("학과명을 입력하세요: ");     // 학과명을 입력할것을 알림
	scanf_s(" %s", department, sizeof(department));           // 문자열을 입력받아 department 에 저장

	printf("이름: %s\n", name);          // 입력받은 이름을 출력하고 한줄을 띈다
	printf("생년월일: %s\n", birth);     // 입력받은 생년월일을 출력하고 한줄을 띈다
	printf("학번: %s\n", studentid);     // 입력받은 학번을 출력하고 한줄을 띈다
	printf("학과명: %s", department);    // 입력받은 학과명을 출력하고 한줄을 띈다

}