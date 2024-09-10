 // date Sat, sep 1, 2024 11:44:45 PM 
 // made by nishant 
#include<stdio.h>
int main(){
	printf("enter the number you want top check even or odd "); // prompting the user to input a value
	int num;
	scanf("%d",&num); // taking the user input
	if(num%2==0){ //using the modulus operator to check if divisible by two
		printf("the number is even"); // printing output
	}
	else{
		printf("the number is odd"); // printing output based on condition
	};
	return 0; // returning random integer
}
