#include<stdio.h>
int main(void) {
	int num, sum = 0;
	printf("숫자입력\n");
	while (sum < 100) {
		scanf_s("%d", &num);
		sum += num;
		printf("지금까지 총 합:%d\n", sum);
			if (sum >= 100)
				break;
		printf("숫자입력\n");
	}

	return 0;
}
