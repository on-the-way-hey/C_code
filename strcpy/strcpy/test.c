#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL); //����
	assert(dest != NULL); //����
	char* ret = dest;
	while (*dest++ = *src++)
	{
		//�����е�\0�ڴ�ѭ��Ҳ�������
	}
	return ret; //����Ŀ��ռ����ʼ��ַ

}


int main()
{
	char arr1[20] = "****************";
	char arr2[] = "hello";
	/*strcpy
	* 1.Ŀ��ռ����ʼ��ַ
	* 2.Դ�ռ����ʼ��ַ
	*/
	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ���� 

	return 0;
}