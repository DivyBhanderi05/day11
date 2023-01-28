#include<stdio.h>

main(){
	
	char a;
	printf("M=Monday T=Tuesday W=Wednesday H=Thursday F=Friday S=Saturday U=Sunday\n");
	printf("Enter any character from above : ");
	scanf("%c",&a);
	
switch(a){
		default: printf("ERROR");
		break;
		case 'M' : printf("Monday");
		break;
		case 'T' : printf("Tuesday");
		break;
		case 'W' : printf("Wednesday");
		break;
		case 'H' : printf("Thursday");
		break;
		case 'F' : printf("Friday");
		break;
		case 'S' : printf("Saturday");
		break;
		case 'U' : printf("Sunday");
		break;
		
	}
}
