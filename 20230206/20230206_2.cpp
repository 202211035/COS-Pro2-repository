#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english, int answer)
{
	int avg = korean + english + answer;
	avg = 210;
	answer = avg - korean - english;
	return answer;
}

int main(void)
{
	int korean = 70;
	int english = 60;
	int answer = 0;
	int ret = solution(korean, english, answer);

	printf("solution �Լ��� ��ȯ���� % d �Դϴ�.\n", ret);

	return 0;
}