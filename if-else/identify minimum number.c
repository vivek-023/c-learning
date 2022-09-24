 #include <stdio.h>
 int main(){
	int a=1000;
	int b=1001;
	int c=1002;
	if(a<b && a<c ){
		printf("%d is the minimum number",a);
	} else if(b<c &&  b<a){
		printf("%d is the minimum number",b);
	} else if(c<a && c<b){
		printf("%d is the minimum number",c);
	} else{
		printf("All are equal");
	}
}