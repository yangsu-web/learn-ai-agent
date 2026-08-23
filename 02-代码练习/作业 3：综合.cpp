#include<stdio.h>

int main(){
	char name[50];
	int age;
	
	printf("请输入名字：");
	scanf("%s",&name);
	
	printf("请输入年龄：");
	scanf("%d",&age);
	
	printf("你好，我叫%s，今年%d岁\n",name,age);
	
	return 0;
}