#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct Stu
//{
//
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu stu = {0};
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	fread(&stu, sizeof(struct Stu), 1, pf);
//	printf("%s %d %s", stu.name, stu.age, stu.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = getc(pf);//a
//	printf("%c\n", ch);
//	ch = getc(pf);//b
//	printf("%c\n", ch);
//	ch = getc(pf);//c
//	printf("%c\n",ch);
//	//fseek(pf, -3, SEEK_CUR);//向前移动3个得到a
////	fseek(pf,-1, SEEK_END);
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

/*int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	char ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}
	int a = 0;
	if (ferror(pf))
	{
		puts("I/O error, when, reading\n");
	}
	else if (a = feof(pf))
	{
		puts("End of file reached successfully\n");
		printf("%d", a);
	}
	return 0;
}*/
//enum {
//	SIZE = 5
//};
//int main()
//{
//	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
//	FILE* fp = fopen("test.txt", "wb");
//	fwrite(a, sizeof(double), SIZE, fp);
//	fclose(fp);
//	fp = NULL;
//
//	double b[SIZE];
//	fp = fopen("test.txt", "rb");
//	int ret_code = fread(b, sizeof(double),3, fp);
//	//printf("%d\n", ret_code);
//	if (ret_code == SIZE)
//	{
//		puts("Arry read successfuly\n");
//		for (int i = 0; i < SIZE; i++)
//		{
//			printf("%f ", b[i]);
//			putchar('\n');
//		}
//	}
//	else
//	{
//		if (feof(fp))
//		{
//			puts("Error reading:file end\n");
//		}
//		else if (ferror(fp))
//		{
//			printf("reading Error");
//		}
//	}
//	fclose(fp);
//	return 0;
//}

//#define M 10
//int main()
//{
//	printf("%d", M);
//#undef M
//	printf("%d", M);
//	return 0;
//}
#include <stddef.h>
struct S
{
	char a;
	int b;
	double c;
};
#define OFFSETOF(type, name)      (size_t)&(((type*)0)->name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

	return 0;
}
//#define SWAP_BIT(x)   (x = (((x & 0x55555555)<<1)+ ((x & 0xaaaaaaaa)>>1)))
//int main()
//{
//	int a = 5;
//	SWAP_BIT(a);
//	printf("%d", a);
//	return 0;
//}