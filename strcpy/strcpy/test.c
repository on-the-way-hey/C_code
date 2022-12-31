#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL); //断言
	assert(dest != NULL); //断言
	char* ret = dest;
	while (*dest++ = *src++)
	{
		//数组中的\0在此循环也代表结束
	}
	return ret; //返回目标空间的起始地址

}


int main()
{
	char arr1[20] = "****************";
	char arr2[] = "hello";
	/*strcpy
	* 1.目标空间的起始地址
	* 2.源空间的起始地址
	*/
	printf("%s\n", my_strcpy(arr1, arr2));//链式访问 

	return 0;
}