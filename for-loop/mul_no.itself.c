 #include<stdio.h>
 int main(){
	 int n,i,m=1;
	 printf("n: ");
	 scanf("%d",&n);
	 printf("1*1");
	 for(i=2;i<=n;i=i+1){
		 printf(" + %d*%d",i,i);
	     m=m+i*i;
	 }printf("=%d",m); 	
		
 } 