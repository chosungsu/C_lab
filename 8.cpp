#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
	//���ڿ�(1)
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0'};
	char str3[] = "the capital city of korea.";
	printf("%s %s %s\n", str1, str2, str3);
	//���ڿ�(2)
	char str4[] = "A barking dog never bites";
	int i = 0;
	while (str4[i] != 0) {
		i++;
	}
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.\n", str4, i);
	//���� �����(1)
	//getchar() : �Է¹ް� ���ۻ��
	//putchar() : ���
	//getch() : �Է¹ް� ����X
	//putch() : ���
	//���� �����(2)
	char name[100];
	char address[100];
	printf("�̸��� ��� �ǽó���? ");
	gets_s(name, 99);
	printf("��� ��ó���? ");
	gets_s(address, 99);
	printf("�ȳ��ϼ���. %s�� ��� %s��.\n", address, name);
	//���� ó��(1) - ���� ���ϱ�
	char lang[] = "abcdefgh";
	int len = strlen(lang);
	printf("���ڿ� %s�� ���� : %d\n", lang, len);
	//���� ó��(2) - �����ϱ�
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);
	printf("����� ���ڿ� : %s\n", dst);
	//���� ó��(3) - �����ϱ�
	char chstr[11] = "Hello";
	strcat(chstr, "World");
	printf("%s\n", chstr);
	//���� ó��(4) - ���ϱ�
	char li1[80], li2[80];
	int res;
	printf("ù��° �ܾ� : ");
	scanf("%s", li1);
	printf("�ι�° �ܾ� : ");
	scanf("%s", li2);
	res = strcmp(li1, li2);
	if (res < 0) {
		printf("%s�� %s���� ����\n", li1, li2);
	}
	else if (res == 0) {
		printf("%s�� %s�� ����\n", li1, li2);
	}
	else {
		printf("%s�� %s���� ����\n", li1, li2);
	}
	//���ڿ��� �ٸ� ���·� ��ȯ
	int k;
	double b;
	k = atoi("100");
	printf("%d\n", k);
	b = atof("36.5");
	printf("%f\n", b);
	//���ڿ��� �������� ����
	//���ڿ��� �ε������� ���氡���ϴ�
	//�����ʹ� ��°�� ������ �����ϴ�
	//����(1)
	char key[] = "���";
	char buf[80];
	do {
		printf("���� ���� �����ϴ� ������?");
		gets_s(buf, 80);
	} while (strcmp(key, buf) != 0);
	//����(2)
	int j, l;
	char fruits[6][20] = {
		"pineapple",
		"banana",
		"apple",
		"tomato",
		"pear",
		"avocado"
	};
	for (l = 0; l < 5; l++) {
		for (j = 0; j < 5; j++) {
			if (strcmp(fruits[j], fruits[j + 1]) > 0) {
				char tmp[20];
				strcpy(tmp, fruits[j]);
				strcpy(fruits[j], fruits[j + 1]);
				strcpy(fruits[j + 1], tmp);
			}
		}
	}
	for (l = 0; l < 6; l++) {
		printf("%s\n", fruits[l]);
	}

	return 0;
}