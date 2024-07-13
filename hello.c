#include <stdio.h>
int main(void){
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i=1;
	int *p=NULL;
	p=a;
	
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%d ",*++p);
		}
	return 0;
	}
