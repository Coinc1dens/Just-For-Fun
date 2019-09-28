#include<stdio.h>
#define PI 3.1415926535
int main(){
	double r;
    printf("请输入圆或球的半径:"); 
    scanf("%lf",&r);
    printf("圆的周长:%.3lf\n圆的面积:%.3lf\n球的体积:%.3lf\n",2*PI*r,PI*r*r,4.0/3.0*PI*r*r*r);
}
