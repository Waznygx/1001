#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int* p, int length)
//{
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	int* p = arr;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	print(p, length);
//	return 0;
//}
////�����0 1 2 3 4 5 6 7 8 9

//void test1(int* pi)//����һ��ָ��������ָ����Ϊ���������ָ��ָ����Ǳ���a�ĵ�ַ
//{
//	;
//}
//void test2(char* pc)//����һ��ָ���ַ���ָ����Ϊ���������ָ��ָ����Ǳ���b�ĵ�ַ
//{
//	;
//}
//int main()
//{
//	int a = 10;
//	char b = 'w';
//	int* pi = &a;
//	char* pc = &b;
//	test1(pi);
//	test2(pc);
//	return 0;
//}

//void test(char** p)
//{
//	printf("%s", p);
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(pc);//����p����ָ��pc��ָ����ַ�
//	test(&pc);//ָ���ַ�ָ���ָ�룬��ָ����Ǳ���pc�ĵ�ַ
//	test(ppc);//ָ���ַ�ָ���ָ�룬��ָ����Ǳ���pc�ĵ�ַ
//	test(arr);// һ���ַ�ָ�����顣���������Ա�����һ��ָ�������һ��Ԫ�ص�ָ��
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = add;
//	printf("%d\n", (*p)(2, 3));
//}
////�����5

//int main()
//{
//	(*(void (*)())0)();
//	//(  * (  void (*)()  )0 )()
//	// void (*)():��ָ������Ϊ�յĺ���ָ�룬���������������޷������ͣ�void��
//	//(��)0���ڽ�0ǿ��ת��Ϊ����ָ������
//	// ���������ȼ�����*
//	//(*��)():������Ϊ����ָ���0���н����ã������øú���
//	return 0;
//}

//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//	// void ( * signal (int, void(*) (int) ))(int)
//	// void(*) (int):��ָ������Ϊ�յĺ���ָ�룬����Ϊint���ͣ������޷������ͣ�void��
//	// signal (int, �� )���ں�������Ϊsignal�����Σ���һ��������int�࣬�ڶ��������Ǻ���ָ��
//	// void (*��)(int)��ָ����Ϊsignal(int, void(*)(int))�ĺ���ָ�룬��������Ϊint���ͣ������޷������ͣ�void��
//	return 0;
//}

//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//
//	typedef void(*p)(int);//void(*)(int)������Ϊp
//	p signal(int, p);
//	return 0;
//}

//int div(int x, int y)
//{
//	return x / y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("******************************\n");
//		printf("\t 1.add    2.sub\t\n");
//		printf("\t 3.mul    4.div\t\n");
//		printf("\t 0.exit          \n");
//		printf("******************************\n");
//		printf("input:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("input two numbers:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("input two numbers:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("input two numbers:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("input two numbers:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int div(int x, int y)
//{
//	return x / y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0,add,sub,mul,div };
//	do
//	{
//		printf("******************************\n");
//		printf("\t 1.add    2.sub\t\n");
//		printf("\t 3.mul    4.div\t\n");
//		printf("\t 0.exit          \n");
//		printf("******************************\n");
//		printf("input:");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("input two numbers:");
//			scanf("%d%d", &x, &y);
//			ret = (*p[input])(x,y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("error\n");
//		}
//	} while (input);
//	return 0;
//}

void test(const char* str)
{
	printf("%s\n", str);
}
int main()
{
	//pfun������ָ�룬ָ��ĺ�����Ϊtest����������Ϊconst char*����������void
	void (*pfun)(const char*) = test;
	//pfunarr������ָ�����飬������5��Ԫ�أ�ÿ��Ԫ���Ǻ���ָ�����ͣ�ָ��ָ��ĺ�����Ϊtest����������Ϊconst char*����������void
	void (*pfunarr[5])(const char* str);
	pfunarr[0] = test;
	//ppfunarr��ָ����ָ�������ָ�룬�жϱ�־��&pfunarr��ȡ��ַ��
	void (*((*ppfunarr)[5])) (const char*) = &pfunarr;
	return 0;
}