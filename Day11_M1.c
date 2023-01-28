#include<stdio.h>

main(){
	
	char a;
	
	printf("Enter value : ");
	scanf("%c",&a);
	
	if(a>='a' && a<='z' || a>='A' && a<='Z'  ){
		printf("Alphabet");
	}

	
	else if(a>='0' && a<='9'){
		printf("Digit");
	}
	
	
	else{
		printf("Special Character");
	}
}
