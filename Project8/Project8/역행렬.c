#include <stdio.h>

#include <stdlib.h>

void PrintAarr_2y(int *p, double(*PtrAarr_2y)[7]) {

	int i, j;

	char x = 'x';

	// x, y, z 미지수명 출력

	for (i = 0; i < *p; i++) {

		printf("\t%c", x + i);

	}

	// x, y, z 각 미지수의 계수 출력

	printf("\n");

	for (i = 0; i <= *p - 1; i++) {

		if (i == 0)

			printf("▒");

		else if (i == *p - 1)

			printf("▒");

		else

			printf("▒");

		for (j = 0; j <= *p; j++) {

			printf("%7g", PtrAarr_2y[i][j]);

			if (j == *p - 1)

				printf("   =");

		}

		if (i == 0)

			printf("   ▒");

		else if (i == *p - 1)

			printf("   ▒");

		else

			printf("   ▒");

		printf("\n");

	}

}

void func() {

	int i, j, k, l, m, n, step = 1, stepbull;

	int loop = 0;

	double ARR_1[6][7], arr_2[6][6], Temp[7], save;

	char select;

	while (loop == 0) {

		printf("종료 0, The number of equations(n by n) : ");

		scanf_s("%d", &n);

		if (n == 0) {

			exit(0);

		}

		for (i = 0; i <= n - 1; i++) {

			for (j = 0; j <= n; j++) {

				printf("ARR_1[%d][%d] : ", i, j);

				scanf_s("%lf", &ARR_1[i][j]);

				printf("\n");

			}

		}

		PrintAarr_2y(&n, ARR_1);

		while (getchar() != '\n');  //scanf_s()의 버퍼 밀림 방지

		printf("1. 연산 계속  2. 행렬 입력  0. 종료\n");

		scanf_s("%d", &loop);

		if (loop == 1) {

			loop = 1;

		}

		else if (loop == 2) {

			loop = 0;

		}

		else {

			exit(0);

		}



	}

	for (i = 0; i <= n - 1; i++) {

		for (j = 0; j <= n - 1; j++) {

			arr_2[i][j] = ARR_1[i][j];

		}

	}

	while (getchar() != '\n');  //scanf_s()의 버퍼 밀림 방지

	printf("1. 가우스 소거 0. 종료\n");

	scanf_s("%d", &loop);

	if (loop == 1)

		stepbull = 1;

	else {

		exit(0);

	}





	//행렬 왼쪽 하단 사각형을 0으로

	for (j = 0; j <= n - 1; j++) {

		if (ARR_1[j][j] == 0) {

			for (k = j + 1; k <= n - 1; k++) {

				if (ARR_1[k][j] != 0) {

					for (l = 0; l <= n; l++) {

						Temp[l] = ARR_1[k][l];

						ARR_1[k][l] = ARR_1[j][l];

						ARR_1[j][l] = Temp[l];

					}

					break;

				}

			}

		}

	}

	for (j = 0; j <= n - 1; j++) {

		for (i = j + 1; i <= n - 1; i++) {

			if (ARR_1[i][j] == 0)

				continue;

			else {

				save = ARR_1[i][j] / ARR_1[j][j];

				for (k = 0; k <= n; k++) {

					ARR_1[i][k] -= ARR_1[j][k] * save;

				}

			}

		}

		if (stepbull == 1) {  //행연산 단계가 몇단계인지 출력

			printf("\n- STEP%d -\n", step);

			PrintAarr_2y(&n, ARR_1);

			step++;

		}

	}

	//대각선을 1로 만드는 코드

	for (i = 0; i <= n - 1; i++) {

		save = ARR_1[i][i];

		for (j = i; j <= n; j++) {

			ARR_1[i][j] /= save;

		}

	}

	if (stepbull == 1) {

		printf("\n- STEP%d -\n", step);

		PrintAarr_2y(&n, ARR_1);

		step++;

	}

	//오른쪽 상단 삼각형을 0으로 만드는 코드

	for (j = 1; j <= n - 1; j++) {

		for (i = 0; i <= j - 1; i++) {

			save = ARR_1[i][j];

			for (k = j; k <= n; k++) {

				ARR_1[i][k] -= save * ARR_1[j][k];

			}

		}

		if (stepbull == 1) {

			printf("\n- STEP%d -\n", step);

			PrintAarr_2y(&n, ARR_1);

			step++;

		}

	}

	printf("\n");

	printf("<Answer>\n");

	for (l = 0; l <= n - 1; l++) {

		printf("│%7g│\n", ARR_1[l][n]);

	}

}

int main() {

	int i = 0;

	while (i == 0) {

		func();

	}

	return 0;

}