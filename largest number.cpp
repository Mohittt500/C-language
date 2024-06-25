#include<stdio.h>
int main(){
	int num1,num2,num3;
	
	printf("Enter the first number");
	scanf("%d", &num1);
	
	printf("Enter the second number");
	scanf("%d", &num2);
	
	printf("Enter the third number");
	scanf("%d", &num3);
	
	if (num1>=num2 && num1>=num3){
		printf("Num 1 is the largest number %d\n");
		
	}
	else if (num2>=num3 && num2>=num1){
		printf("Num 2 is the largest number %d\n");
    }
    else {
		printf("Num 3 is the largest number %d\n");
	}
}

