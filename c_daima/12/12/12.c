#include <stdio.h>

int main()
{
	int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};

	printf("%d,%d,%d,%d,%d\n",a,*a,a[0],&a[0],&a[0] [0]);
	printf("%X,%X,%X,%X,%X\n",a+1,* (a+1),a[1],&a[1],&a[1][0]);
	printf("%x,%x,%x,%x,%x\n",a+2,* (a+2),a[2],&a[2],&a[2][0]);
	printf("%x,%x\n",a[1]+1,*(a+1)+1);
	printf("%d,%d,%d\n",a[1][1],*(a[1]+1),*(*(a+1)+1));
	printf("%d,%d,%d\n",(*(a+1))[2],*(&a[0][0]+4*1+2),*(a[0]+4*1+2));
}