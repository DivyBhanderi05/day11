#include<stdio.h>

main(){
	
	float A,unit,surcharge,NetCharge;
	
	printf("Entr no. of Unit : ");
	scanf("%f",&unit);
	
	if(unit<=50){
		A = unit*0.5;
	}
	else if(unit<=150){
		A = 25 + (unit-50)*0.75;
	}
	else if(unit<=250){
		A = 25 + 75 + (unit-150)*1.20;
	}
	else{
		A = 25 + 75 + 120 + (unit-250)*1.5;
	}
	surcharge =A*0.20;
	NetCharge = A + surcharge;
	printf("NETCHARGE : %f",NetCharge);
	
}
