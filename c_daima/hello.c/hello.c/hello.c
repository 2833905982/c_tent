#include <stdio.h>

main()
{
	int t;
	int n=0;
	
	while (t>0){
	n=n+1;
	t=t/10;}
	printf("%d",n);
	return 0;
}