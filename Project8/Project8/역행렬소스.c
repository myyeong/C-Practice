#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>

int main()
{
	srand(time(NULL));
	int ary[20][20];
	int i, j, k, n, temp;
	int count = 1;
	printf("n X n 행렬을 만들 것입니다. 원하는 n의 값을 입력해주세요 : ");
	scanf_s("%d", &n);
	int ranx = rand() % 10;
	int rany = rand() % 10;

	int randomRangex(int n1, int n2);
	int randomRangey(int n1, int n2);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			temp = ary[i][j];
			ary[i][j] = ary[randomRangex(0, 9)][randomRangey(0, 9)];
			ary[randomRangex(0, 9)][randomRangey(0, 9)] = temp;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%6d", ary[i][j]);
		}
		printf("\n");
	}


}

int randomRangex(int n1, int n2)
{
	return(int)(rand() % (n2 - n1 + 1)) + n1;
}

int randomRangey(int n1, int n2)
{
	return(int)(rand() % (n2 - n1 + 1)) + n1;
}

		

	/* for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			ary[i][j] = count++;
		}

	}

	 for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				temp = ary[i][j];
				ary[i][j] = ary[ranx][rany];
				ary[ranx][rany] = temp;
			}
		}
	} 

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%6d", ary[i][j]);
		}
		printf("\n");
	}
} */
