#include<stdio.h>
int main(){
	int a,b,c,d;
	puts("请输入四个季度的销售额:"); 
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("累计销售额如下:\n第一季度:%d\n第二季度:%d\n第三季度:%d\n第四季度:%d\n环比增长率如下:\n第二季度:%.2lf%%\n第三季度:%.2lf%%\n第四季度:%.2lf%%\n",a,a+b,a+b+c,a+b+c+d,((b-a)/(double)a)*100.0,((c-b)/(double)b)*100.0,((d-c)/(double)c)*100.0);
}
