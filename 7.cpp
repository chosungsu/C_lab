#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���� ���� ȣ���Լ��κ�
void modify(int value) {
	value = 99;
}
//������ ���� ȣ���Լ��κ�
void modif(int* ptr) {
	*ptr = 99;
}
//�ŵ����� �����Լ��κ�
void ipower(int nn, int kk) {
	int res = 1;
	while (true) {
		printf("%d\n", res);
		res *= nn;
		kk--;
		if (kk == -1) {
			break;
		}
	}
}
int main(void) {
	//�ּ�
	int i = 10;
	char ch = 69;
	float f = 12.3;
	printf("i�� �ּ� : %u\n", &i);
	printf("ch�� �ּ� : %u\n", &ch);
	printf("f�� �ּ� : %u\n", &f);
	//������
	int j = 10;
	int* p;
	p = &j;
	printf("%d\n", &j);
	printf("%d\n", j);
	printf("%d\n", p);
	printf("%d\n", *p);
	//��������
	char* pc;
	int* pi;
	double* pd;
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	pc++;
	pi++;
	pd++;
	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	//���� ���� ȣ��
	int number_one = 1;
	modify(number_one);
	printf("number : %d\n", number_one);
	//������ ���� ȣ��
	int number_two = 1;
	modif(&number_two);
	printf("number : %d\n", number_two);
	//�������� �迭 Ȱ��
	int aar[] = { 10, 20, 30, 40, 50 };
	printf("�迭�� �̸� : %u\n", aar);
	printf("ù��° �����ּ� : %u\n", &aar[0]);
	//����(1)
	ipower(3, 5);

	return 0;
}