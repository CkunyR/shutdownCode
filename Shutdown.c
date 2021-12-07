#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>//strcmp

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()---执行系统命令的
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑将在1分钟内关机，如果输入 我是猪则终止关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//strcmp--比较两个字符串
		{
			system("shutdown -a");
			break;
		}
	}
//again:
//	printf("你的电脑将在1分钟内关机，如果输入 我是猪则终止关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//strcmp--比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	return 0;
}