#include <stdio.h>     // stdio.h �����

int main() {

	char name[10];                       // �̸��� ������ ���ڿ� �迭 ���� (�ִ� 10���ڱ��� �Է°���)
   	char birth[15];                       // ��������� ������ ���ڿ� �迭 ���� (�ִ� 15���ڱ��� �Է°���)
	char studentid[11];                  // �й��� ������ ���ڿ� �迭 ���� (�ִ� 11���ڱ��� �Է°���)
	char department[15];                 // �а����� ������ ���ڿ� �迭 ���� (�ִ� 15���ڱ��� �Է°���)

	printf("�̸��� �Է��ϼ���: ");       // �̸��� �Է��Ұ��� �˸�
	scanf_s("%s", name, sizeof(name));                // ���ڿ��� �Է¹޾� name �� ����

	printf("��������� �Է��ϼ��� (yyyymmdd): ");      // ��������� �Է��Ұ��� �˸�
	scanf_s(" %s", birth, sizeof(birth));                // ���ڿ��� �Է¹޾� birth �� ����

	printf("�й��� �Է��ϼ���: ");       // �й��� �Է��Ұ��� �˸�
	scanf_s(" %s", studentid, sizeof(studentid));            // ���ڿ��� �Է¹޾� studentid �� ����

	printf("�а����� �Է��ϼ���: ");     // �а����� �Է��Ұ��� �˸�
	scanf_s(" %s", department, sizeof(department));           // ���ڿ��� �Է¹޾� department �� ����

	printf("�̸�: %s\n", name);          // �Է¹��� �̸��� ����ϰ� ������ ���
	printf("�������: %s\n", birth);     // �Է¹��� ��������� ����ϰ� ������ ���
	printf("�й�: %s\n", studentid);     // �Է¹��� �й��� ����ϰ� ������ ���
	printf("�а���: %s", department);    // �Է¹��� �а����� ����ϰ� ������ ���

}