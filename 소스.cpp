#include<stdio.h>
int main(void) {
	int num, sum = 0;
	printf("�����Է�\n");
	while (sum < 100) {
		scanf_s("%d", &num);
		sum += num;
		printf("���ݱ��� �� ��:%d\n", sum);
			if (sum >= 100)
				break;
		printf("�����Է�\n");
	}

	return 0;
}
