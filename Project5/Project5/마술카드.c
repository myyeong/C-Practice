// 카드의 장수가 1개 일 때

#include <stdio.h>
#include <time.h>

void my_opening();
int my_card11(int(*)[1]);

int my_card21(int(*)[2]);
int my_card22(int(*)[2]);

int my_card31(int(*)[4]);
int my_card32(int(*)[4]);
int my_card33(int(*)[4]);

int my_card41(int(*)[4]);
int my_card42(int(*)[4]);
int my_card43(int(*)[4]);
int my_card44(int(*)[4]);

int my_card51(int(*)[4]);
int my_card52(int(*)[4]);
int my_card53(int(*)[4]);
int my_card54(int(*)[4]);
int my_card55(int(*)[4]);

int my_card61(int(*)[4]);
int my_card62(int(*)[4]);
int my_card63(int(*)[4]);
int my_card64(int(*)[4]);
int my_card65(int(*)[4]);
int my_card66(int(*)[4]);

int my_card71(int(*)[4]);
int my_card72(int(*)[4]);
int my_card73(int(*)[4]);
int my_card74(int(*)[4]);
int my_card75(int(*)[4]);
int my_card76(int(*)[4]);
int my_card77(int(*)[4]);

int my_card81(int(*)[4]);
int my_card82(int(*)[4]);
int my_card83(int(*)[4]);
int my_card84(int(*)[4]);
int my_card85(int(*)[4]);
int my_card86(int(*)[4]);
int my_card87(int(*)[4]);
int my_card88(int(*)[4]);

int my_card91(int(*)[4]);
int my_card92(int(*)[4]);
int my_card93(int(*)[4]);
int my_card94(int(*)[4]);
int my_card95(int(*)[4]);
int my_card96(int(*)[4]);
int my_card97(int(*)[4]);
int my_card98(int(*)[4]);
int my_card99(int(*)[4]);

void my_res1(int);
void my_res2(int, int);
void my_res3(int, int, int);
void my_res4(int, int, int, int);
void my_res5(int, int, int, int, int);
void my_res6(int, int, int, int, int, int);
void my_res7(int, int, int, int, int, int, int);
void my_res8(int, int, int, int, int, int, int, int);
void my_res9(int, int, int, int, int, int, int, int, int);

int main()
{
	int number, m;
	int n = 1;
	int z, count;
	char t;

	float gap;
	time_t startTime = 0, endTime = 0;

	startTime = clock();

	my_opening();
	printf("먼저 원하는 카드의 장수를 입력해주시겠어요? : ");
	scanf("\n\n%d", &number);
	for (int i = 1; i <= number; i++)
		n *= 2;

	printf("\n\n\n%d부터 %d까지 숫자 중 마음에 드는 숫자를 생각하세요.\n", 1, n - 1);

	printf("\n생각하셨다면 엔터를 눌러주세요.");
	scanf("%c", &t);
	scanf("%c", &t);
	printf("\n\n");

	if (number == 1)
	{
		int card11[1][1] = { 1 };
		int(*ca11)[1];
		int a1;

		ca11 = card11;
		a1 = my_card11(card11);
		my_res1(a1);
	}

	else if (number == 2)
	{
		int card21[1][2] = { 2, 3 };
		int card22[1][2] = { 1, 3 };
		int(*ca21)[2];
		int(*ca22)[2];
		int b1, b2;

		ca21 = card21;
		b1 = my_card21(card21);
		ca22 = card22;
		b2 = my_card22(card22);
		my_res2(b1, b2);
	}

	else if (number == 3)
	{
		int card31[1][4] = { 4, 5, 6, 7 };
		int card32[1][4] = { 2, 3, 6, 7 };
		int card33[1][4] = { 1, 3, 5, 7 };
		int(*ca31)[4];
		int(*ca32)[4];
		int(*ca33)[4];
		int c1, c2, c3;

		ca31 = card31;
		c1 = my_card31(card31);
		ca32 = card32;
		c2 = my_card32(card32);
		ca33 = card33;
		c3 = my_card33(card33);
		my_res3(c1, c2, c3);
	}

	else if (number == 4)
	{
		int card41[2][4] = { 8, 9, 10, 11, 12, 13, 14, 15 };
		int card42[2][4] = { 4, 5, 6, 7, 12, 13, 14, 15 };
		int card43[2][4] = { 2, 3, 6, 7, 10, 11, 14, 15 };
		int card44[2][4] = { 1, 3, 5, 7, 9, 11, 13, 15 };
		int(*ca41)[4];
		int(*ca42)[4];
		int(*ca43)[4];
		int(*ca44)[4];
		int d1, d2, d3, d4;

		ca41 = card41;
		d1 = my_card41(card41);
		ca42 = card42;
		d2 = my_card42(card42);
		ca43 = card43;
		d3 = my_card43(card43);
		ca44 = card44;
		d4 = my_card44(card44);

		my_res4(d1, d2, d3, d4);
	}

	else if (number == 5)
	{
		int card51[4][4] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
		int card52[4][4] = { 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31 };
		int card53[4][4] = { 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31 };
		int card54[4][4] = { 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31 };
		int card55[4][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 };
		int(*ca51)[4];
		int(*ca52)[4];
		int(*ca53)[4];
		int(*ca54)[4];
		int(*ca55)[4];
		int e1, e2, e3, e4, e5;

		ca51 = card51;
		e1 = my_card51(card51);
		ca52 = card52;
		e2 = my_card52(card52);
		ca53 = card53;
		e3 = my_card53(card53);
		ca54 = card54;
		e4 = my_card54(card54);
		ca55 = card55;
		e5 = my_card55(card55);

		my_res5(e1, e2, e3, e4, e5);
	}

	else if (number == 6)
	{
		int card61[8][4] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
		int card62[8][4] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
		int card63[8][4] = { 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31, 40, 41, 42, 43, 44, 45, 46, 47, 56, 57, 58, 59, 60, 61, 62, 63 };
		int card64[8][4] = { 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47, 52, 53, 54, 55, 60, 61, 62, 63 };
		int card65[8][4] = { 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 34, 35, 38, 39, 42, 43, 46, 47, 50, 51, 54, 55, 58, 59, 62, 63 };
		int card66[8][4] = { 1, 3, 5, 7, 9, 10, 12, 14, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63 };
		int(*ca61)[4];
		int(*ca62)[4];
		int(*ca63)[4];
		int(*ca64)[4];
		int(*ca65)[4];
		int(*ca66)[4];
		int f1, f2, f3, f4, f5, f6;

		ca61 = card61;
		f1 = my_card61(card61);
		ca62 = card62;
		f2 = my_card62(card62);
		ca63 = card63;
		f3 = my_card63(card63);
		ca64 = card64;
		f4 = my_card64(card64);
		ca65 = card65;
		f5 = my_card65(card65);
		ca66 = card66;
		f6 = my_card66(card66);

		my_res6(f1, f2, f3, f4, f5, f6);
	}

	else if (number == 7)
	{
		int card71[16][4] = { 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
			101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127 };

		int card72[16][4] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 96, 97, 98, 99, 100,
			101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127 };

		int card73[16][4] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 80, 81, 82, 83, 84,
			85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127 };

		int card74[16][4] = { 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31, 40, 41, 42, 43, 44, 45, 46, 47, 56, 57, 58, 59, 60, 61, 62, 63, 72, 73, 74, 75, 76,
			77, 78, 79, 88, 89, 90, 91, 92, 93, 94, 95, 104, 105, 106, 107, 108, 109, 110, 111, 120, 121, 122, 123, 124, 125, 126, 127 };

		int card75[16][4] = { 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47, 52, 53, 54, 55, 60, 61, 62, 63, 68, 69, 70, 71, 76, 77,
			78, 79, 84, 85, 86, 87, 92, 93, 94, 95, 100, 101, 102, 103, 108, 109, 110, 111, 116, 117, 118, 119, 124, 125, 126, 127 };

		int card76[16][4] = { 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 34, 35, 38, 39, 42, 43, 46, 47, 50, 51, 54, 55, 58, 59, 62, 63, 66, 67, 70, 71, 74, 75,
			78, 79, 82, 83, 86, 87, 90, 91, 94, 95, 98, 99, 102, 103, 106, 107, 110, 111, 114, 115, 118, 119, 122, 123, 126, 127 };

		int card77[16][4] = { 1, 3, 5, 7, 9, 10, 12, 14, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75,
			77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127 };

		int(*ca71)[4];
		int(*ca72)[4];
		int(*ca73)[4];
		int(*ca74)[4];
		int(*ca75)[4];
		int(*ca76)[4];
		int(*ca77)[4];
		int g1, g2, g3, g4, g5, g6, g7;

		ca71 = card71;
		g1 = my_card71(card71);
		ca72 = card72;
		g2 = my_card72(card72);
		ca73 = card73;
		g3 = my_card73(card73);
		ca74 = card74;
		g4 = my_card74(card74);
		ca75 = card75;
		g5 = my_card75(card75);
		ca76 = card76;
		g6 = my_card76(card76);
		ca77 = card77;
		g7 = my_card77(card77);

		my_res7(g1, g2, g3, g4, g5, g6, g7);
	}

	else if (number == 8)
	{
	int card81[32][4] = { 128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,
	165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
	208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,
	251,252,253,254,255}; 

	int card82[32][4] = { 64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,
	110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,
	217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

	int card83[32][4] = { 32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,96,97,98,99,100,101,102,103,104,105,106,107,108,109,
	110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,
	185,186,187,188,189,190,191,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,};

	int card84[32][4] = { 16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,112,113,
	114,115,116,117,118,119,120,121,122,123,124,125,126,127,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,176,177,178,179,180,181,182,183,184,185,186,187,188,
	189,190,191,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

	int card85[32][4] = { 8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31,40,41,42,43,44,45,46,47,56,57,58,59,60,61,62,63,72,73,74,75,76,77,78,79,88,89,90,91,92,93,94,95,104,105,
	106,107,108,109,110,111,120,121,122,123,124,125,126,127,136,137,138,139,140,141,142,143,152,153,154,155,156,157,158,159,168,169,170,171,172,173,174,175,184,185,186,187,188,
	189,190,191,200,201,202,203,204,205,206,207,216,217,218,219,220,221,222,223,232,233,234,235,236,237,238,239,248,249,250,251,252,253,254,255};

	int card86[32][4] = { 4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31,36,37,38,39,44,45,46,47,52,53,54,55,60,61,62,63,68,69,70,71,76,77,78,79,84,85,86,87,92,93,94,95,100,101,102,
	103,108,109,110,111,116,117,118,119,124,125,126,127,132,133,134,135,140,141,142,143,148,149,150,151,156,157,158,159,164,165,166,167,172,173,174,175,180,181,182,183,188,189,
	190,191,196,197,198,199,204,205,206,207,212,213,214,215,220,221,222,223,228,229,230,231,236,237,238,239,244,245,246,247,252,253,254,255};

	int card87[32][4] = { 2, 3,	6, 7, 10,11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 34, 35, 38, 39, 42, 43, 46, 47, 50, 51, 54, 55, 58, 59, 62, 63, 66, 67, 70, 71, 74, 75, 78,
	79,	82,	83,	86,	87,	90,	91,	94,	95,	98,	99,	102, 103, 106, 107,	110, 111, 114,	115, 118, 119, 122,	123, 126, 127, 130,	131, 134, 135, 138,	139, 142, 143, 146,	147, 150, 151,
	154, 155, 158, 159,	162, 163, 166, 167,	170, 171, 174, 175,	178, 179, 182, 183,	186, 187, 190, 191,	194, 195, 198, 199,	202, 203, 206, 207,	210, 211, 214, 215,	218, 219, 222,
	223, 226, 227, 230,	231, 234, 235, 238, 239, 242, 243, 246,	247, 250, 251, 254,	255 };

	int card88[32][4] = { 1, 3,	5, 7, 9, 11, 13, 15, 17, 19, 21,23,	25,	27,	29,	31,	33,	35,	37,	39, 41,	43,	45,	47,	49,	51,	53,	55,	57,	59, 61,	63,	65,	67,	69,	71,	73,	75,	77,	79, 81,	83,	85,	87,	89,	91,	93,	95,	97,	99,
	101, 103, 105, 107, 109, 111, 113, 115,	117, 119, 121, 123, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147,	149, 151, 153, 155,	157, 159, 161, 163,	165, 167, 169, 171,	173, 175, 177, 179, 181,183, 185, 187,
	189, 191, 193, 195, 197, 199, 201, 203,	205, 207, 209, 211,	213, 215, 217, 219, 221, 223, 225, 227, 229, 231, 233, 235,	237, 239, 241, 243,	245, 247, 249, 251,	253, 255 };

		int(*ca81)[4];
		int(*ca82)[4];
		int(*ca83)[4];
		int(*ca84)[4];
		int(*ca85)[4];
		int(*ca86)[4];
		int(*ca87)[4];
		int(*ca88)[4];

		int h1, h2, h3, h4, h5, h6, h7, h8;

		ca81 = card81;
		h1 = my_card81(card81);
		ca82 = card82;
		h2 = my_card82(card82);
		ca83 = card83;
		h3 = my_card83(card83);
		ca84 = card84;
		h4 = my_card84(card84);
		ca85 = card85;
		h5 = my_card85(card85);
		ca86 = card86;
		h6 = my_card86(card86);
		ca87 = card87;
		h7 = my_card87(card87);
		ca88 = card88;
		h8 = my_card88(card88);

		my_res8(h1, h2, h3, h4, h5, h6, h7, h8);
	}

	endTime = clock();

	gap = (float)(endTime - startTime) / (CLOCKS_PER_SEC);

	printf("측정 시간 : %f 초", gap);

	return 0;
}

void my_opening()
{
	char e;
	printf("지금부터 카드 마술을 시작하겠습니다.\n\n");
	printf("시작하시려면 엔터를 눌러주세요.\n\n");
	scanf("%c", &e);
}

int my_card11(int(*ca11)[1])
{
	int  i1, j1, a1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i1 = 0; i1 < 1; i1++)
		{
			for (j1 = 0; j1 < 1; j1++)
			{
				printf("%14d", ca11[i1][j1]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &a1);
		printf("\n\n");

		if (a1 > -1 && a1 < 2)
		{
			return a1;
			break;
		}
	}
}

int my_card21(int(*ca21)[2])
{
	int  i2, j2, b1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i2 = 0; i2 < 1; i2++)
		{
			for (j2 = 0; j2 < 2; j2++)
			{
				printf("%10d", ca21[i2][j2]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &b1);
		printf("\n\n");

		if (b1 > -1 && b1 < 2)
		{
			return b1;
			break;
		}
	}
}

int my_card22(int(*ca22)[2])
{
	int  i2, j2, b2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i2 = 0; i2 < 1; i2++)
		{
			for (j2 = 0; j2 < 2; j2++)
			{
				printf("%10d", ca22[i2][j2]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &b2);
		printf("\n\n");

		if (b2 > -1 && b2 < 2)
		{
			return b2;
			break;
		}
	}

}

int my_card31(int(*ca31)[4])
{
	int  i3, j3, c1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i3 = 0; i3 < 1; i3++)
		{
			for (j3 = 0; j3 < 4; j3++)
			{
				printf("%6d", ca31[i3][j3]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &c1);
		printf("\n\n");

		if (c1 > -1 && c1 < 2)
		{
			return c1;
			break;
		}
	}
}

int my_card32(int(*ca32)[4])
{
	int  i3, j3, c2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i3 = 0; i3 < 1; i3++)
		{
			for (j3 = 0; j3 < 4; j3++)
			{
				printf("%6d", ca32[i3][j3]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &c2);
		printf("\n\n");

		if (c2 > -1 && c2 < 2)
		{
			return c2;
			break;
		}
	}
}

int my_card33(int(*ca33)[4])
{
	int  i3, j3, c3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i3 = 0; i3 < 1; i3++)
		{
			for (j3 = 0; j3 < 4; j3++)
			{
				printf("%6d", ca33[i3][j3]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &c3);
		printf("\n\n");

		if (c3 > -1 && c3 < 2)
		{
			return c3;
			break;
		}
	}
}

int my_card41(int(*ca41)[4])
{
	int  i4, j4, d1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i4 = 0; i4 < 2; i4++)
		{
			for (j4 = 0; j4 < 4; j4++)
			{
				printf("%6d", ca41[i4][j4]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &d1);
		printf("\n\n");

		if (d1 > -1 && d1 < 2)
		{
			return d1;
			break;
		}
	}
}

int my_card42(int(*ca42)[4])
{
	int  i4, j4, d2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i4 = 0; i4 < 2; i4++)
		{
			for (j4 = 0; j4 < 4; j4++)
			{
				printf("%6d", ca42[i4][j4]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &d2);
		printf("\n\n");

		if (d2 > -1 && d2 < 2)
		{
			return d2;
			break;
		}
	}
}

int my_card43(int(*ca43)[4])
{
	int  i4, j4, d3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i4 = 0; i4 < 2; i4++)
		{
			for (j4 = 0; j4 < 4; j4++)
			{
				printf("%6d", ca43[i4][j4]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &d3);
		printf("\n\n");

		if (d3 > -1 && d3 < 2)
		{
			return d3;
			break;
		}
	}
}

int my_card44(int(*ca44)[4])
{
	int  i4, j4, d4;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ D 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i4 = 0; i4 < 2; i4++)
		{
			for (j4 = 0; j4 < 4; j4++)
			{
				printf("%6d", ca44[i4][j4]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &d4);
		printf("\n\n");

		if (d4 > -1 && d4 < 2)
		{
			return d4;
			break;
		}
	}
}

int my_card51(int(*ca51)[4])
{
	int  i5, j5, e1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i5 = 0; i5 < 4; i5++)
		{
			for (j5 = 0; j5 < 4; j5++)
			{
				printf("%6d", ca51[i5][j5]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &e1);
		printf("\n\n");

		if (e1 > -1 && e1 < 2)
		{
			return e1;
			break;
		}
	}
}

int my_card52(int(*ca52)[4])
{
	int  i5, j5, e2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i5 = 0; i5 < 4; i5++)
		{
			for (j5 = 0; j5 < 4; j5++)
			{
				printf("%6d", ca52[i5][j5]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &e2);
		printf("\n\n");

		if (e2 > -1 && e2 < 2)
		{
			return e2;
			break;
		}
	}
}

int my_card53(int(*ca53)[4])
{
	int  i5, j5, e3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i5 = 0; i5 < 4; i5++)
		{
			for (j5 = 0; j5 < 4; j5++)
			{
				printf("%6d", ca53[i5][j5]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &e3);
		printf("\n\n");

		if (e3 > -1 && e3 < 2)
		{
			return e3;
			break;
		}
	}
}

int my_card54(int(*ca54)[4])
{
	int  i5, j5, e4;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ D 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i5 = 0; i5 < 4; i5++)
		{
			for (j5 = 0; j5 < 4; j5++)
			{
				printf("%6d", ca54[i5][j5]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &e4);
		printf("\n\n");

		if (e4 > -1 && e4 < 2)
		{
			return e4;
			break;
		}
	}
}

int my_card55(int(*ca55)[4])
{
	int  i5, j5, e5;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ E 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i5 = 0; i5 < 4; i5++)
		{
			for (j5 = 0; j5 < 4; j5++)
			{
				printf("%6d", ca55[i5][j5]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &e5);
		printf("\n\n");

		if (e5 > -1 && e5 < 2)
		{
			return e5;
			break;
		}
	}
}

int my_card61(int(*ca61)[4])
{
	int  i6, j6, f1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca61[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f1);
		printf("\n\n");

		if (f1 > -1 && f1 < 2)
		{
			return f1;
			break;
		}
	}
}

int my_card62(int(*ca62)[4])
{
	int  i6, j6, f2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca62[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f2);
		printf("\n\n");

		if (f2 > -1 && f2 < 2)
		{
			return f2;
			break;
		}
	}
}

int my_card63(int(*ca63)[4])
{
	int  i6, j6, f3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca63[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f3);
		printf("\n\n");

		if (f3 > -1 && f3 < 2)
		{
			return f3;
			break;
		}
	}
}

int my_card64(int(*ca64)[4])
{
	int  i6, j6, f4;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ D 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca64[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f4);
		printf("\n\n");

		if (f4 > -1 && f4 < 2)
		{
			return f4;
			break;
		}
	}
}

int my_card65(int(*ca65)[4])
{
	int  i6, j6, f5;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ E 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca65[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f5);
		printf("\n\n");

		if (f5 > -1 && f5 < 2)
		{
			return f5;
			break;
		}
	}
}

int my_card66(int(*ca66)[4])
{
	int  i6, j6, f6;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ F 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i6 = 0; i6 < 8; i6++)
		{
			for (j6 = 0; j6 < 4; j6++)
			{
				printf("%6d", ca66[i6][j6]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &f6);
		printf("\n\n");

		if (f6 > -1 && f6 < 2)
		{
			return f6;
			break;
		}
	}
}

int my_card71(int(*ca71)[4])
{
	int  i7, j7, g1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca71[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g1);
		printf("\n\n");

		if (g1 > -1 && g1 < 2)
		{
			return g1;
			break;
		}
	}
}

int my_card72(int(*ca72)[4])
{
	int  i7, j7, g2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca72[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g2);
		printf("\n\n");

		if (g2 > -1 && g2 < 2)
		{
			return g2;
			break;
		}
	}
}

int my_card73(int(*ca73)[4])
{
	int  i7, j7, g3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca73[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g3);
		printf("\n\n");

		if (g3 > -1 && g3 < 2)
		{
			return g3;
			break;
		}
	}
}

int my_card74(int(*ca74)[4])
{
	int  i7, j7, g4;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ D 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca74[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g4);
		printf("\n\n");

		if (g4 > -1 && g4 < 2)
		{
			return g4;
			break;
		}
	}
}

int my_card75(int(*ca75)[4])
{
	int  i7, j7, g5;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ E 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca75[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g5);
		printf("\n\n");

		if (g5 > -1 && g5 < 2)
		{
			return g5;
			break;
		}
	}
}

int my_card76(int(*ca76)[4])
{
	int  i7, j7, g6;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ F 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca76[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g6);
		printf("\n\n");

		if (g6 > -1 && g6 < 2)
		{
			return g6;
			break;
		}
	}
}

int my_card77(int(*ca77)[4])
{
	int  i7, j7, g7;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ G 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i7 = 0; i7 < 16; i7++)
		{
			for (j7 = 0; j7 < 4; j7++)
			{
				printf("%6d", ca77[i7][j7]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &g7);
		printf("\n\n");

		if (g7 > -1 && g7 < 2)
		{
			return g7;
			break;
		}
	}
}

int my_card81(int(*ca81)[4])
{
	int  i8, j8, h1;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ A 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca81[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h1);
		printf("\n\n");

		if (h1 > -1 && h1 < 2)
		{
			return h1;
			break;
		}
	}
}

int my_card82(int(*ca82)[4])
{
	int  i8, j8, h2;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ B 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca82[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h2);
		printf("\n\n");

		if (h2 > -1 && h2 < 2)
		{
			return h2;
			break;
		}
	}
}

int my_card83(int(*ca83)[4])
{
	int  i8, j8, h3;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ C 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca83[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h3);
		printf("\n\n");

		if (h3 > -1 && h3 < 2)
		{
			return h3;
			break;
		}
	}
}

int my_card84(int(*ca84)[4])
{
	int  i8, j8, h4;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ D 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca84[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h4);
		printf("\n\n");

		if (h4 > -1 && h4 < 2)
		{
			return h4;
			break;
		}
	}
}

int my_card85(int(*ca85)[4])
{
	int  i8, j8, h5;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ E 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca85[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h5);
		printf("\n\n");

		if (h5 > -1 && h5 < 2)
		{
			return h5;
			break;
		}
	}
}

int my_card86(int(*ca86)[4])
{
	int  i8, j8, h6;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ F 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca86[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h6);
		printf("\n\n");

		if (h6 > -1 && h6 < 2)
		{
			return h6;
			break;
		}
	}
}

int my_card87(int(*ca87)[4])
{
	int  i8, j8, h7;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ G 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca87[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h7);
		printf("\n\n");

		if (h7 > -1 && h7 < 2)
		{
			return h7;
			break;
		}
	}
}

int my_card88(int(*ca88)[4])
{
	int  i8, j8, h8;
	while (1)
	{
		printf("\n\n\nㅡㅡㅡㅡㅡ H 카드 ㅡㅡㅡㅡㅡ\n\n");

		for (i8 = 0; i8 < 32; i8++)
		{
			for (j8 = 0; j8 < 4; j8++)
			{
				printf("%6d", ca88[i8][j8]);
			}
			printf("\n");
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");

		printf("\n\n생각한 숫자가 카드에 있나요?\n\n카드에 있다면 1. YES\n카드에 없다면 0. NO 을 눌러주세요 : ");
		scanf("\n%d", &h8);
		printf("\n\n");

		if (h8 > -1 && h8 < 2)
		{
			return h8;
			break;
		}
	}
}

void my_res1(int a1)
{
	int res1;
	res1 = a1;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res1);
}

void my_res2(int b1, int b2)
{
	int res2;
	res2 = (b1 * 2) + b2;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res2);
}

void my_res3(int c1, int c2, int c3)
{
	int res3;
	res3 = (c1 * 2 * 2) + (c2 * 2) + c3;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res3);
}

void my_res4(int d1, int d2, int d3, int d4)
{
	int res4;
	res4 = (d1 * 2 * 2 * 2) + (d2 * 2 * 2) + (d3 * 2) + d4;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res4);
}

void my_res5(int e1, int e2, int e3, int e4, int e5)
{
	int res5;
	res5 = (e1 * 2 * 2 * 2 * 2) + (e2 * 2 * 2 * 2) + (e3 * 2 * 2) + (e4 * 2) + e5;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res5);
}

void my_res6(int f1, int f2, int f3, int f4, int f5, int f6)
{
	int res6;
	res6 = (f1 * 2 * 2 * 2 * 2 * 2) + (f2 * 2 * 2 * 2 * 2) + (f3 * 2 * 2 * 2) + (f4 * 2 * 2) + (f5 * 2) + f6;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res6);
}

void my_res7(int g1, int g2, int g3, int g4, int g5, int g6, int g7)
{
	int res7;
	res7 = (g1 * 2 * 2 * 2 * 2 * 2 * 2) + (g2 * 2 * 2 * 2 * 2 * 2) + (g3 * 2 * 2 * 2 * 2) + (g4 * 2 * 2 * 2) + (g5 * 2 * 2) + (g6 * 2) + g7;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res7);
}

void my_res8(int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8)
{
	int res8;
	res8 = (h1 * 2 * 2 * 2 * 2 * 2 * 2 * 2) + (h2 * 2 * 2 * 2 * 2 * 2 * 2) + (h3 * 2 * 2 * 2 * 2 * 2) + (h4 * 2 * 2 * 2 * 2) + (h5 * 2 * 2 * 2) + (h6 * 2 * 2) + (h7 * 2) + h8;
	printf("당신이 생각한 숫자는 %d 입니다.\n\n", res8);
}
