#include <stdio.h>
float addition(float s_1, float s_2);
float subtraction(float s_1, float s_2);
float division(float s_1, float s_2);
float multiplication(float s_1, float s_2);
int main() {
	char choice;
	float number_1, number_2, result; 
	while(0==0) {
		printf("########## CALCULATOR ##########\n");
		printf(" A : Addition\n B : Subtraction\n C : Multiplication\n D : Division\n E : Terminate The Program\n");
		printf("####################################\n");
		printf("Enter The Action You Want To Do: ");
		scanf(" %c", &choice);
		printf("\n");
			if(choice == 'A') {
			printf("Enter the Numbers You Want to Addition\n \n");
			printf("1. Number: ");
			scanf("%f", &number_1);
			printf("2. Number: ");
			scanf("%f", &number_2);
			printf("\n");
			result = addition(number_1, number_2);
			printf("Result: %.2f + %.2f = %.2f\n \n",number_1, number_2, result);
		} else if(choice == 'B') {
			printf("Enter the Numbers to be Subtracted\n \n");
			printf("1. Number: ");
			scanf("%f", &number_1);
			printf("2. Number: ");
			scanf("%f", &number_2);
			printf("\n");
			result = subtraction(number_1, number_2);
			printf("Result: %.2f - %.2f = %.2f\n \n",number_1, number_2, result);
		} else if(choice == 'C') {
			printf("Enter the Numbers to be Multiplied\n \n");
			printf("1. Number: ");
			scanf("%f", &number_1);
			printf("2. Number: ");
			scanf("%f", &number_2);
			printf("\n");
			result = multiplication(number_1, number_2);
			printf("Result: %.2f * %.2f = %.2f\n \n",number_1, number_2, result);
		} else if(choice == 'D') {
			printf("Enter the Numbers You Want to Divide\n \n");
			printf("1. Number: ");
			scanf("%f", &number_1);
			printf("2. Number: ");
			scanf("%f", &number_2);
			printf("\n");
			result = division(number_1, number_2);
			printf("Result: %.2f / %.2f = %.2f\n \n",number_1, number_2 ,result);
		} else if(choice == 'E') {
			printf("##### Program Terminated! #####\n");
			return 0;
		} else {
			printf("!!!!!!!  Wrong Letter Typed!  !!!!!!!\n Please Write The Letter Next To The Action You Want To Do!\n \n ");
		}
		}
		return 0;
	}
float addition(float s_1, float s_2) {
	float t;
	t = s_1 + s_2;
	
	return t;
}
float subtraction(float s_1, float s_2) {
	float t;
	t = s_1 - s_2;
	
	return t;
}
float multiplication(float s_1, float s_2) {
	float t;
	t = s_1 * s_2;
	
	return t;
}
float division(float s_1, float s_2) {
	float t;
	t = s_1 / s_2;
	
	return t;
}




