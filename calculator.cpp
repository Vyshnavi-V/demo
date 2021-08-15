#include <stdio.h>
#include<conio.h>

void binarycal();
void primenum();
void armstrongnum();
void oddeven();
void factnum();

int main()
	{
		int calfun;
		clrscr();
		printf("Which Calculator is needed? \n \t 1. Binary Calculator \n \t 2. Number Functions ");
		printf("\n Enter the option to select : ");
		scanf("%d",&calfun);
		if(calfun == 1)
		{
			binarycal();
		}

		else if(calfun == 2)
		{
			int nfopt;
			printf("You have selected Number Functions  ! \n");
			printf("Functions are \n 1. To Find a Number is prime or not? \n 2. To Find Armstrong or not \n 3. To Find Whether a number is odd or even \n 4. To Find Factorial \n ");
			printf("Enter the Option : ");
			scanf("%d",&nfopt);
			switch(nfopt)
				{
				case 1 : primenum();break;

				case 2 : armstrongnum();break;

				case 3 : oddeven();break;

				case 4 : factnum();break;

				default : printf("Wrong Input");break;			}
				}
		 getch();
		 return 0;
	}

void binarycal()
	{       char optr;
		double n1,n2;
		printf("You have selected Binary Calculator  ! \n");
		printf("Enter the Binary Expression(e.g 1+2) : ");
		scanf("%lf %c %lf",&n1,&optr,&n2);

		switch(optr)
		{
			case '+':
				printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
				break;

			case '-':
				printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
				break;

			case '*':
				printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
				break;

			case '/':
				printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
				break;

			// operator doesn't match any case constant +, -, *, /
			default:
				printf("Error! operator is not correct");
		}
	}
