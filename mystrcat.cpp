#include<iostream>
#include <assert.h>
using namespace std;
char* my_strcat(char* dest, const char* src)
{
	//1. ��Ŀ��ռ��е�'\0'
	char* ret = dest;
	//����ָ������洢Ŀ���ַ��ĵ�ַ������󷵻�
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')	//��'\0'
	{
		dest++;
	}
	//2. ���ݿ�������strcpy������ʵ�֣�
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
