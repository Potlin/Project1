#include<iostream>
#include <assert.h>
using namespace std;
char* my_strcat(char* dest, const char* src)
{
	//1. 找目标空间中的'\0'
	char* ret = dest;
	//定义指针变量存储目标字符的地址方便最后返回
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')	//找'\0'
	{
		dest++;
	}
	//2. 数据拷贝（即strcpy函数的实现）
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
}

int main()
{
	char arr[20] = "hello ";

	my_strcat(arr, "world");
	printf("%s\n", arr);

	system("pause");
	return 0;
}
