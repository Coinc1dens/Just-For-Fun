#include<stdio.h>
#define PI 3.1415926535
int main(){
	double r;
    printf("������Բ����İ뾶:"); 
    scanf("%lf",&r);
    printf("Բ���ܳ�:%.3lf\nԲ�����:%.3lf\n������:%.3lf\n",2*PI*r,PI*r*r,4.0/3.0*PI*r*r*r);
}
