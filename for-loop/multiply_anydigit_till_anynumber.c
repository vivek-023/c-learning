 #include<stdio.h>
 int main(){
	 int m,n;
	 printf("m: ");
	 scanf("%d",&m);
	 printf("n: ");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i=i+1){
		 printf("%d*%d=%d\n",m,i,m*i);
	 }
 }