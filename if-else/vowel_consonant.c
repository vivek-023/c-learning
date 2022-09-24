#include <stdio.h>

int main(){
	
	/**Identify if given character is consonant or vowel. (a,e,i,o,u,A,E,I,O,U)
		Input = 'a'---->a is a vowel
		Input = 'C'---->C is a consonant
		Input = '8'---->8 is not an alphabet1**/
		
		
		char X='z';
		
		if(X=='a' || X=='e' || X=='i' || X=='o' || X=='u' || X=='A' || X=='E' || X=='I' || X=='O' || X=='U'){
		   printf("%c is a vowel", X);
		} else if(X >= 'A' && X <= 'Z' || X >= 'a' && X <= 'z'){
			printf("%c is a consonant", X);
		} else{
			printf("%c is not an alphabet", X);
		}
		
    
}