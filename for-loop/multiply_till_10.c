#include <stdio.h>
int main(){
	int i,n;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=10;i=i+1){
		printf("%d*%d=%d\n",n,i,n*i);
	}
}