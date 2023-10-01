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
////输出：0 1 2 3 4 5 6 7 8 9

//void test1(int* pi)//接收一个指向整数的指针作为参数，这个指针指向的是变量a的地址
//{
//	;
//}
//void test2(char* pc)//接收一个指向字符的指针作为参数，这个指针指向的是变量b的地址
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
//	test(pc);//参数p将会指向pc所指向的字符
//	test(&pc);//指向字符指针的指针，它指向的是变量pc的地址
//	test(ppc);//指向字符指针的指针，它指向的是变量pc的地址
//	test(arr);// 一个字符指针数组。数组名可以被当作一个指向数组第一个元素的指针
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
////输出：5

//int main()
//{
//	(*(void (*)())0)();
//	//(  * (  void (*)()  )0 )()
//	// void (*)():①指针名字为空的函数指针，不带参数，函数无返回类型（void）
//	//(①)0：②将0强制转换为函数指针类型
//	// （）的优先级高于*
//	//(*②)():将类型为函数指针的0进行解引用，即调用该函数
//	return 0;
//}

//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//	// void ( * signal (int, void(*) (int) ))(int)
//	// void(*) (int):①指针名字为空的函数指针，参数为int类型，函数无返回类型（void）
//	// signal (int, ① )：②函数名字为signal，带参，第一个参数是int类，第二个参数是函数指针
//	// void (*②)(int)：指针名为signal(int, void(*)(int))的函数指针，函数参数为int类型，函数无返回类型（void）
//	return 0;
//}

//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//
//	typedef void(*p)(int);//void(*)(int)重命名为p
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
	//pfun：函数指针，指向的函数名为test，函数参数为const char*，返回类型void
	void (*pfun)(const char*) = test;
	//pfunarr：函数指针数组，数组有5个元素，每个元素是函数指针类型，指针指向的函数名为test，函数参数为const char*，返回类型void
	void (*pfunarr[5])(const char* str);
	pfunarr[0] = test;
	//ppfunarr：指向函数指针数组的指针，判断标志：&pfunarr（取地址）
	void (*((*ppfunarr)[5])) (const char*) = &pfunarr;
	return 0;
}