#include <stdio.h>     // stdio.h �����

int main() {

	char name[21];                       // �̸��� ������ ���ڿ� �迭 ���� (�ִ� 20���ڱ��� �Է°���)
   	char birth[21];                      // ��������� ������ ���ڿ� �迭 ���� (�ִ� 20���ڱ��� �Է°���)
	char studentid[21];                  // �й��� ������ ���ڿ� �迭 ���� (�ִ� 20���ڱ��� �Է°���)
	char department[21];                 // �а����� ������ ���ڿ� �迭 ���� (�ִ� 20���ڱ��� �Է°���)

	printf("�̸��� �Է��ϼ���: ");       // �̸��� �Է��Ұ��� �˸�
	scanf_s("%s", name, sizeof(name));   // ���ڿ��� �Է¹޾� name �� ����

	printf("��������� �Է��ϼ��� (yyyymmdd): ");      // ��������� �Է��Ұ��� �˸�
	scanf_s("%s", birth, sizeof(birth));              // ���ڿ��� �Է¹޾� birth �� ����

	printf("�й��� �Է��ϼ���: ");       // �й��� �Է��Ұ��� �˸�
	scanf_s("%s", studentid, sizeof(studentid));            // ���ڿ��� �Է¹޾� studentid �� ����

	printf("�а����� �Է��ϼ���: ");     // �а����� �Է��Ұ��� �˸�
	scanf_s("%s", department, sizeof(department));           // ���ڿ��� �Է¹޾� department �� ����

	printf("�̸�: %s\n", name);          // �Է¹��� �̸��� ����ϰ� ������ ���
	printf("�������: %s\n", birth);     // �Է¹��� ��������� ����ϰ� ������ ���
	printf("�й�: %s\n", studentid);     // �Է¹��� �й��� ����ϰ� ������ ���
	printf("�а���: %s\n", department);    // �Է¹��� �а����� ����ϰ� ������ ���

}