#include<stdio.h>
#include<math.h>

int main() {

	int num,sum = 0;
	scanf("%d",&num);
	for (int i = 1; i <= num; i++)
	{
		sum = sum + pow(i, 2) + i - 4;
		printf(" %d\n",sum);
	}

}