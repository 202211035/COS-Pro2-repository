#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int temperature[], int temperature_len, int A, int B)
{
	int k = 0;
	for (int i=0; i < temperature_len; i++)
	{
		if (temperature[i] > temperature[0])
			k++;
	}

	return k;
}

int main(void)
{
	
	int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2};
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution함수의 반환값은 %d입니다\n", ret);

	return 0;
}