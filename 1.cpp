#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	//�ٹٲ� ��ȣ�� "\n"��
	printf("3*1 = 3\n");
	printf("3*2 = 6\n");
	printf("3*3 = 9\n");

	//������ ���Է½�
	int x, y, sum;
	x = 100;
	y = 200;
	sum = x + y;
	printf("�μ��� �� : %d\n", sum);

	//������ �Է�����
	int xx, yy, sum_s;
	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &xx);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &yy);
	sum_s = xx + yy;
	printf("�μ��� �� : %d", sum_s);

	//������ ��꿹��
	int p_sum, price, days;
	p_sum = 0;
	printf("������ ����ΰ���? : ");
	scanf("%d", &days);
	printf("�װ��� ���� : ");
	scanf("%d", &price);
	p_sum = p_sum + price;
	printf("ȣ�� 1�� ���� : ");
	scanf("%d", &price);
	p_sum = p_sum + days * price;
	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf("%d", &price);
	p_sum = p_sum + days * price;
	printf("�� ���� ��� : %d\n", p_sum);
	return 0;
}