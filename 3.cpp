#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//����������
	int x = 10, y = 10;
	printf("x = %d y = %d\n", x, y);
	x += 1;
	printf("(x+=1)���� x = %d\n", x);
	y = x++;
	printf("(x++)���� x = %d y = %d\n", x, y);
	y *= 2;
	printf("(y*=2)���� y = %d\n", y);
	//��Ʈ ������
	//AND : bit ������ ��� 1�� ��� 1 ���
	//OR : bit ���ʸ��̶� 1�� ��� 1 ���
	//XOR : bit ���ʸ� 1�� ��� 1 ���
	//NOT : bit�� 0�� ��� 1 ���
	//>> : �����̵�
	//<< : �����̵�
	int xx = 9;
	int yy = 10;
	printf("��Ʈ AND = %08X\n", xx & yy);
	printf("��Ʈ OR = %08X\n", xx | yy);
	printf("��Ʈ XOR = %08X\n", xx ^ yy);
	printf("��Ʈ NOT = %08X\n", ~yy);
	printf("��Ʈ �����̵� = %d\n", xx << 1);
	printf("��Ʈ �����̵� = %d\n", xx >> 1);
	//�켱����
	//�޸� < ���� < �� < ���� < ��� < ���� ��
	//����ȯ
	int i;
	double f;
	f = 5 / 4;
	printf("(5/4) = %f\n", f);
	f = (double)5 / 4;
	printf("(double)5/4 = %f\n", f);
	i = 1.3 + 1.8;
	printf("1.3 + 1.8 = %d\n", i);
	i = (int)1.3 + (int)1.8;
	printf("(int)1.3 + (int)1.8 = %d\n", i);
	//����(1)
	int f_num, s_num;
	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf(" %d", &f_num);
	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf(" %d", &s_num);
	printf("���� %d�̰� �������� %d�Դϴ�.\n", f_num / s_num, f_num % s_num);
	//����(2)
	int t_num;
	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf(" %d", &t_num);
	printf("���������� %d*%d*%d = %d\n", t_num, t_num, t_num, t_num*t_num*t_num);
	//����(3)
	int ff_num;
	printf("������ �Է��Ͻÿ� : ");
	scanf(" %d", &ff_num);
	printf("���� �ڸ��� : %d\n", ff_num / 100);
	printf("���� �ڸ��� : %d\n", (ff_num % 100)/10);
	printf("���� �ڸ��� : %d\n", (ff_num % 100%10)/1);
	return 0;
}