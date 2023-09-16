#include <stdio.h>
int main(void)
{
     int choice;
     double num1, num2;

     printf("simple Calculator\n");
     printf("------------------\n");
     
     while(1) {
	     printf("Menu: \n");
	     printf("1: Addition\n");
	     printf("2: Subtraction\n");
	     printf("3: Mutiplication\n");
	     printf("4: Division\n");
	     printf("5: Quit\n");

	     printf("Enter your choice: ");
	     scanf("%d", &choice);
	     
	     if (choice == 5) {
		     printf("Goodbye!\n");
		     break;
	     }
	     printf("Enter two numbers: ");
	     scanf("%lf %lf", &num1, &num2);

	     switch(choice){
		     case 1:
			     printf("Result:  %.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
			     break;
		     case 2:
			     printf("Result:  %.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
			     break;

		     case 3:
			      printf("Result:  %.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
			      break;

		     case 4:
			      if ( num2 != 0) {
			          printf("Result:  %.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
			      }
			      else {
				      printf("Error: Division by zero\n");
			      }
			      break;
		     default:
			      printf("Invalid choice! Please try again.\n");
	     }
     }

     return 0;
}
