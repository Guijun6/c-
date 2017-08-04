#define _CRT_SECURE_NO_WARNINGS 1
//1.三种方式模拟实现strlen函数。
//2.模拟实现strcpy
//3.模拟实现strcat
//4.模拟实现strcmp
//5.模拟实现strstr
//6.模拟实现memcpy
//7.模拟实现memmove

#include <stdio.h>
#include <stdlib.h>

////1.三种方式模拟实现strlen函数。
//int my_strlen(const char* p)
//{
//assert(p);
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//
//	char* a = "abcdef";
//	int ret = my_strlen(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int my_strlen(const char p[])
//{
//	int count = 0;
//	int i = 0;
//	while (p[i])
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//
//	char a[] = "abcdef";
//	int ret = my_strlen(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int my_strlen(const char* p)
//{
//assert(p);
//	while (*p)
//	{
//		return 1 + my_strlen(++p);
//	}
//	return 0;
//}
//int main()
//{
//
//	char* a = "abcdef";
//	int ret = my_strlen(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
////2.模拟实现strcpy
//char* my_strcpy(char* dest,const char* scr)
//{
//assert(dest);
// assert(scr);
//	char* ret = dest;
//		while (*scr)
//		{
//			*dest = *scr;
//			dest++;
//			scr++;
//		}
//		return ret;
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	char b[10] = { '0' };
//	char* ret=my_strcpy(b, a);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
////3.模拟实现strcat(字符串的追加)
//char* my_strcat(char* dest, const char* scr)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*scr)
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[] = "efg";
//	char* ret=my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
////4.模拟实现strcmp（比较两个字符串）
//int my_strcmp(const char* p1, const char* p2)
//{
//	while ((*p1 == *p2)&&*p1)
//	{
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	char* a = "abcdefg";
//	char* b = "abcdeg";
//	int ret=my_strcmp(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
////5.模拟实现strstr(查找子字符串）
//char* my_strstr(const char* dest, const char* scr)
//{
//	
//	char* p1 = dest;
//	char* p2 = scr;
//	if (!*p1)
//	{
//		return dest;
//	}
//
//	while (*dest)
//	{
//		char* str1 = dest;
//		char* str2 = scr;
//		while ((*str1==*str2)&&*str1&&*str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (!*str2)
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* a = "abcd efg";
//	char* b = "d ef";
//	char* p = my_strstr(a, b);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}
////6.模拟实现memcpy
//void* my_memcpy(void* dest,const void* scr, int count)
//{
//	void* p = dest;
//	while (count--)
//	{
//		*((char*)dest) = *((char*)scr);
//		((char*)scr)++;
//		((char*)dest)++;
//	}
//	return p;
//}
//int main()
//{
//	int a[10] = { 0, 1, 2, 3 };
//	int b[] = { 1, 2, 3 };
//	int i = 0;
//	int* c = (int*) my_memcpy(a, b, 12);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//
//	system("pause");
//	return 0;
//}
////7.模拟实现memmove
//void* my_memmove(void* dest, const void* src, int count)
//{
//	void* p = dest;
//	
//		if (dest<=src)
//		{
//			while (count--)
//			{
//				*((char*)dest) = *((char*)src);
//				++((char*)src);
//				++((char*)dest);
//			}
//			
//		}
//		else
//		{
//			//dest = (char *)dest + count - 1;
//			//src = (char *)src + count - 1;
//			while (count--)
//			{
//				*((char*)dest+count) = *((char*)src+count);
//				//src = ((char*)src) - 1;
//				//dest = ((char*)dest) - 1;
//			}
//			
//		}
//	return p;
//}
//int main()
//{
//	int a[10] = { 0, 1, 2, 3 ,4, 5, 6, 7, 8, 9};
//	int b[] = { 1, 2, 3 };
//	int i = 0;
//	int* c = (int*)my_memmove(a+2, a, 12);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//
//	system("pause");
//	return 0;
//}
