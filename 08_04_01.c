//1.模拟实现
//strncpy
//strncat
//strncmp
//2.模拟实现
//strchr
//strrstr
#include <stdio.h>
#include <stdlib.h>

////模拟实现strncpy
//char* my_strncpy(char* dest, const char*src, int count)
//{
//	char* ret = dest;
//	char* tmp = src;
//  //while ((*src)||src<(tmp+count-1))
//	//{
//	//	*dest = *src;
//	//	src++;
//	//	dest++;
//  //}
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		if (*src=='\0')
//		{
//			break;
//		}
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	return ret;
//}
//int main()
//{
//	char a[10] = { 0 };
//	char* b = "abcdef";
//	char* ret = my_strncpy(a, b, 7);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//
////模拟实现strncat
//char* my_strncat(char* dest, const char*src, int count)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	int n = 0;
//	while ((*src) && (n < count))
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		n++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10]="abc";
//	char arr2[] = "defgh";
//	char* ret = my_strncat(arr1,arr2,6);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
////模拟实现strncmp
//int my_strncmp(const char* p1, const char* p2, int count)
//{
//	int i = 0;
//	while ((*p1 == *p2) && (i<count-1)&&(*p2))
//	{
//		p1++;
//		p2++;
//		i++;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	int ret = my_strncmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
////模拟实现strchr
//char* my_strchr(const char*p, int n)
//{
//	//assert(p);
//	while ((*p != n) && (*p!='\0'))
//	{
//		p++;
//	}
//	if (*p == n)
//		return p;
//	else
//		return NULL;
//}
//int main()
//{
//	const char* p = "abcdefabcdef";
//	char* ret = my_strchr(p, 'g');
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//
//
////模拟实现strrstr
//char* my_strrstr(const char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* p1 = dest;
//	char* p2 = src;
//	char* ret= NULL;
//	if (!*p1)
//	{
//		return dest;
//	}
//	while (*dest)
//	{
//		char* str1 = dest;
//		char* str2 = src;
//		while ((*str1==*str2)&&*str1&&*str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (!*str2)
//		{
//			ret=dest;
//		}
//		dest++;
//	}
//	if (*ret)
//		return ret;
//	else
//	return NULL;
//}
//
//int main()
//{
//	char* arr1 = "abcdefgabcd";
//	char* arr2 = "abc";
//	char* ret = my_strrstr(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
