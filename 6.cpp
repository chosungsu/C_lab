#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//�迭 ����(1)
	int i;
	int score[5];
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;
	for (i = 0; i < 5; i++) {
		printf("score[%d] = %d\n", i, score[i]);
	}
	//�迭 ����(2)
	int k;
	char codes[5];
	for (k = 0; k < 5; k++) {
		codes[k] = 'a' + k;
		printf("%c ", codes[k]);
	}
	printf("\n");
	//�⼮�� ����
	int att_book[16] = { 0 };
	int q;
	int cnt = 0;
	for (q = 0; q < 16; q++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���(y:1, n:0) : ", q + 1);
		scanf("%d", &att_book[q]);
	}
	for (q = 0; q < 16; q++) {
		if (att_book[q] == 0) {
			cnt++;
		}
	}
	double ratio = cnt / 16.0;
	if (ratio > 0.3) {
		printf("���� �ϼ� ����! �Ἦ �ۼ�Ʈ : %f%%\n", ratio * 100.0);
	}
	else {
		printf("���� �ϼ� ����! �⼮ �ۼ�Ʈ : %f%%\n", ratio * 100.0);
	}
	//���� Ž�� ����
	int key, l;
	int list[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	printf("Ž�� �� �Է� : ");
	scanf("%d", &key);
	for (l = 0; l < 10; l++) {
		if (list[l] == key) {
			printf("�ε��� : %d\n", l);
			break;
		}
	}
	//����
	int e, r;
	int olist[5] = { 16, 7, 9, 1, 3 };
	for (e = 0; e < 5; e++) {
		for (r = 0; r < 4; r++) {
			if (olist[r] > olist[r + 1]) {
				int tmmp = olist[r];
				olist[r] = olist[r + 1];
				olist[r + 1] = tmmp;
			}
		}
	}
	for (r = 0; r < 5; r++) {
		printf("%d ", olist[r]);
	}
	//����(1)
	printf("\n");
	int cnt_num_show;
	int aalist[5];
	for (int aa = 0; aa < 5; aa++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf(" %d", &cnt_num_show);
		aalist[aa] = cnt_num_show;
	}
	for (int ee = 0; ee < 5; ee++) {
		for (int rr = 0; rr < 4; rr++) {
			if (aalist[rr] > aalist[rr + 1]) {
				int tp = aalist[rr];
				aalist[rr] = aalist[rr + 1];
				aalist[rr + 1] = tp;
			}
		}
	}
	printf("�ִ밪 = %d �ּҰ� = %d\n", aalist[4], aalist[0]);
	//����(2)
	int cnt_seat_num, sele;
	int seatlist[10] = { 0 };
	char opp;
	while (true) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) : ");
		scanf(" %c", &opp);
		if (opp == 'n') {
			break;
		}
		else if (opp == 'y') {
			printf("--------------------------------\n");
			for (int qw = 1; qw <= 10; qw++) {
				printf(" %d ", qw);
			}
			printf("\n--------------------------------\n");
			for (int qe = 0; qe < 10; qe++) {
				printf(" %d ", seatlist[qe]);
			}
			printf("\n���° �¼��� �����Ͻðڽ��ϱ� : ");
			scanf(" %d", &sele);
			if (seatlist[sele - 1] == 1) {
				printf("���� �Ұ�!�¼� �̹� á��.\n");
			}
			else {
				printf("����Ǿ����ϴ�.\n");
				seatlist[sele - 1] = 1;
			}
		}
		else {
			printf("�߸� �Է��Ͻ�!\n");
		}
		
	}
	
	
	return 0;
}