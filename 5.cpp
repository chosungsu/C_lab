#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//while��(1)
	int i = 0;
	while (i < 10) {
		printf("i = %d ", i);
		i++;
	}
	//while��(2)
	int j = 5;
	long fac = 1;
	while (j >= 1) {
		fac *= j;
		j--;
	}
	printf("\n");
	printf("%d\n", fac);
	//while��(3)
	int n;
	int k = 1;
	printf("������ ��� �� : ");
	scanf("%d", &n);
	while (k <= 9) {
		printf("%d * %d = %d\n", n, k, n * k);
		k++;
	}
	//do-while VS while����
	//do-while�� while ���� ���� ������ �ѹ��� �����
	int l = 0;
	while (l > 0) {
		printf("while�� �� : %d\n", l);
		l = l - 3;
	}
	int m = 0;
	do {
		printf("do-while�� �� : %d\n", m);
		m = m - 3;
	} while (m > 0);
	//��ø �ݺ���(1)
	int q, w;
	for (w = 0; w < 5; w++) {
		for (q = 0; q < 10; q++) {
			printf("*");
		}
		printf("\n");
	}
	//��ø �ݺ���(2)
	int e, r;
	for (r = 1; r <= 3; r++) {
		for (e = 1; e <= 9; e++) {
			printf("%d X %d = %d\n", r, e, e * r);
		}
	}
	//continue��
	int t;
	for (t = 0; t < 10; t++) {
		if (t % 2 == 0) {
			continue;
		}
		printf("���� : %d\n", t);
	}
	//break��
	int ans;
	printf("��� �ڵ� ����...\n");
	while (true) {
		int d = rand() % 100;
		int f = rand() % 100;
		printf("%d + %d = ", d, f);
		scanf("%d", &ans);
		if (d + f == ans) {
			printf("����\n");
			break;
		}
		else {
			printf("����\n");
		}
	}
	//����(1)
	int cnt_count_down = 60;
	while (cnt_count_down != -1) {
		printf("%d ", cnt_count_down);
		cnt_count_down--;
	}
	printf("\n");
	printf("�߻�\n");
	//����(2)
	int cnt_plus_num = 0;
	int sum_nums = 0;
	while (true) {
		printf("������ �Է��Ͻÿ� : ");
		scanf(" %d", &cnt_plus_num);
		if (cnt_plus_num != 0) {
			sum_nums += cnt_plus_num;
		}
		else {
			break;
		}
	}
	printf("�հ� = %d\n", sum_nums);
	//����(3)
	int cnt_seven = 1;
	while (true) {
		if (cnt_seven != 8) {
			for (int mm = 1; mm <= cnt_seven; mm++) {
				printf("%d", mm);
			}
			for (int nn = 7 - cnt_seven; nn > 0; nn--) {
				printf("*");
			}
			printf("\n");
			++cnt_seven;
		}
		else {
			break;
		}
	}
	//����(4)
	int cnt_double, result = 0;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf(" %d", &cnt_double);
	while (true) {
		for (int ll = 1; ll <= cnt_double; ll++) {
			result += ll * ll;
		}
		printf("��갪�� %d�Դϴ�.\n", result);
		break;
	}
	return 0;
}