#include<stdio.h>
void multiplication();
int main(){

multiplication(); 
}

void multiplication(){
	int number, number2;
	
	 printf("enter any number:");
    scanf("%d",&number);
    printf("enter any number for 2 variable:");
    scanf("%d",&number2);
    int result=number2 * number;
    printf("Multiplication = %d ", result);
}
