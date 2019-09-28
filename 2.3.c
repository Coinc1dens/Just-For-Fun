#include<stdio.h>
int main(){
	int a,b,c,d;
	puts("请输入四门课程的分数:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("课程分数为:%d,%d,%d,%d\n平均分数为:%.2lf",a,b,c,d,(double)(a+b+c+d)/4.0);
}
