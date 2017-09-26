//1.总结指针部分的知识。
//2.利用函数指针实现一个通用的冒泡排序程序。
//3.指针（下）课件中的练习题自己全部做一遍。
//4.研究这个笔试题：
//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//char**cp[] = { c + 3, c + 2, c + 1, c };
//char***cpp = cp;
//printf("%s\n", **++cpp);
//printf("%s\n", *--*++cpp + 3);
//printf("%s\n", *cpp[-2] + 3);
//printf("%s\n", cpp[-1][-1] + 1);

//#include <stdio.h>
//#include <stdlib.h>
//
////2.利用函数指针实现一个通用的冒泡排序程序。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int k = 0;
//	int n = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++)
//	{
//		for (k = 0; k< sizeof(arr) / sizeof(arr[0]); k++)
//		{
//			if (arr[k] < arr[k + 1])
//			{
//				n++;
//			}
//		}
//		if (n == sizeof(arr) / sizeof(arr[0]) - 1)
//			break;
//		for (j = 0; j < sizeof(arr) / sizeof(arr[0])-1-i; j++)
//		{
//			
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}