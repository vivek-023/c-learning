 #include <stdio.h>
 int main(){
	 int i,m,x,factorial=1;
	 printf("m: ");
	 scanf("%d",&m);
	 for(i=m;i>=1;i=i-1){
		x=factorial*i;
	 } printf("%d",x);
 } 