#include<stdio.h>
int main(){
	int a,i,m=0;
	printf("a: ");
	scanf("%d",&a);
	printf("0");
	for(i=1;i<=a;i=i+1){
		printf("+ %d",i);
		m=m+i;
	}printf("= %d",m);
}