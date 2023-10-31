#include <stdio.h>
int main(void)
{
	freopen("input.txt", "r", stdin);
	int n, i, count = 0, val[52] = {0}, max = 1; // 최다득표자인덱스
	// 입력
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		scanf("%d", &val[i]);
	}
	while (1)
	{
		// 최다득표자 구하기
		for (i = 1; i < n + 1; i++)
		{
			if (val[max] <= val[i])
			{
				max = i;
			}
		}

		if (max == 1)
			break;
		val[max]--;
		val[1]++;
		count++;
	}
	printf("%d\n", count);
}