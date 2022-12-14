#include <stdio.h>
int main()
{
	freopen("input.txt", "r", stdin);
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A+B);

	return 0;
}