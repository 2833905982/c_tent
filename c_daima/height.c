#include <stdio.h>

int main()
{
	printf("请输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺七英寸；");
	
	double foot;
	double inch;
	
	scanf ("%lf %lf",&foot,&inch);
	
	printf("身高是%f。\n",((foot+inch/12)*0.3048));
	
	return 0;
	
}
