 #include <stdio.h>

int main(){
	int a,b,c,d;
	printf("Enter first digit: ");
		scanf("%d",&a);
		
		printf("Enter second digit: ");
		scanf("%d",&b);
		
		printf("Enter third digit: ");
		scanf("%d",&c);
		
		printf("Enter fourth digit: ");
		scanf("%d",&d);
		
	if(b-a==c-b && b-a==d-c && c-b==d-c){
		printf("four values are in A.P",a,b,c,d);
	}else {
		printf("Not in A.P",a,b,c,d);
	}
}