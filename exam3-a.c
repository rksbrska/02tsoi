#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

	float faverage(int x, int z)
		{	
	 		float y;
			y = x / z;
		 	return(y);
		}

int main(int argc, char **argv)
{
	int N, i;
	int *a;
	float avggrd, porog;
	//printf("Порог прохождения:");
	//scanf("%f", &porog);
	porog = 4.6;
	printf("Количество оценок аттестата:");
	scanf("%d", &N);
	a = (int*)malloc(N * sizeof(int));
	
			for (i = 0; i < N; i++)
			{
				a[i] = 2 + rand() % (5 - 2 + 1);
				printf("%d \n", a[i]);
			}
	int sum = 0;
	for (i = 0; i < N; i++)
			{
				sum += a[i];
			}
	
	avggrd = faverage(sum, N);
	printf("Средний балл аттестата: %.1f\n", avggrd);

	if (avggrd >= porog)
	{
		printf("Ученик поступит в университет\n");
	}
	else
	{
		printf("Ученик не поступит в университет\n");
	}
	
return 0;
}
