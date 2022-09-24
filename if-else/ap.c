 #include <stdio.h>

int main(){
	int a=2,b=5,c=8,d=13;
	if(b-a==c-b && b-a==d-c && c-b==d-c){
		printf("four values are in A.P",a,b,c,d);
	}else {
		printf("Not in A.P",a,b,c,d);
	}
}