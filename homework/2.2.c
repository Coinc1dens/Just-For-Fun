#include<stdio.h>
int main(){
	int a,b,c,d;
	puts("�������ĸ����ȵ����۶�:"); 
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("�ۼ����۶�����:\n��һ����:%d\n�ڶ�����:%d\n��������:%d\n���ļ���:%d\n��������������:\n�ڶ�����:%.2lf%%\n��������:%.2lf%%\n���ļ���:%.2lf%%\n",a,a+b,a+b+c,a+b+c+d,((b-a)/(double)a)*100.0,((c-b)/(double)b)*100.0,((d-c)/(double)c)*100.0);
}
