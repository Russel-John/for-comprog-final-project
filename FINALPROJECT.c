#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

bool getDragon();
int getInput();
int getNum();
//midterm
void midtermActivity1();
void midtermActivity2();
void midtermActivity3();
void midtermActivity4();
void midtermActivity5();
void midtermActivity6();
//semi-finals
int getInputHandsOn1(float km);
int convertHandsOn1(float km, float miles);
void displayOutputHandsOn1(float km, float miles);

float getValueHandsOn2();
int getInputHandsOn2();

void counterLab1();
float getInputLab2();
float calcAreaCircLab2(float radius);
float calcAreaRectLab2(float length, float width);
float calcAreaTriLab2(float base, float height);
void printResultLab2(int choice, float result);

int main()
{
	int x, y;
	int num1, num2;
	double sum = 0;
	do
	{
		printf("\n*****Pick a Choice*****\n");
		printf("1.Prelim Activities\n");
		printf("2.Midterm Activities\n");
		printf("3.Semi-Finals Activities\n");
		printf("4.Finals Activities\n");
		printf("0.Stop the program\n");
		printf("***********************\n");
		printf("Choice: ");
		x = getInput();
		switch (x)
		{
		case 1:
			do
			{
				printf("\n Pick a Choice \n");
				printf("1. Calculate Area of Circle\n");
				printf("2. Calculate Area of Triangle\n");
				printf("3. Calculate Area of Rectangle\n");
				printf("0. Stop the program\n");
				num1 = getNum();
				switch (num1)
				{
				case 1:
					sum = PI * num1 * num1;
					printf("The Area of Circle is: %.2lf", sum);
					break;
				case 2:
					printf("Enter the Base: ");
					num1 = getNum();
					printf("Enter the Height: ");
					num2 = getNum();
					sum = 0.5 * num1 * num2;
					printf("Result: %.2lf", sum);
					break;
				case 3:
					printf("Enter the Length: ");
					num1 = getNum();
					printf("Enter the Width: ");
					num2 = getNum();
					sum = num1 * num2;
					printf("Result: %.2lf", sum);
					break;
				case 0:
					y = getDragon();
					break;
				default:
					printf("Invalid choice\n");
				}
			}
			while (y == 0);
			break;
		case 2:
			do
			{
				printf("\n Pick a Choice \n");
				printf("1. Discounted Price \n");
				printf("2. Vowel or Consonant\n");
				printf("3. sum of odd and even numbers\n");
				printf("4. Numbers divisible by 3 from 1000\n");
				printf("5. Sum of all odd numbers EOF to stop\n");
				printf("6. Midterm Activity 6\n");
				printf("0. Stop the program\n");
				printf("Choice: ");
				x = getInput();
				switch (x)
				{
				case 1:
					midtermActivity1();
					y = getDragon();
					break;
				case 2:
					midtermActivity2();
					y = getDragon();
					break;
				case 3:
					midtermActivity3();
					y = getDragon();
					break;
				case 4:
					midtermActivity4();
					y = getDragon();
					break;
				case 5:
					midtermActivity5();
					y = getDragon();
					break;
				case 6:
					midtermActivity6();
					y = getDragon();
					break;
				case 0:
					y = getDragon();
					break;
				default:
					printf("Invalid choice\n");
				}
			}
			while (y == 0);
			break;
		case 3:
			// MIDTERM CODES
		case 4:
			// FINALS CODES
			break;
		case 0:
			return 0;
		default:
			printf("Invalid choice\n");
		}
	}
	while (y == 1);
	return 0;
}
int getInput()
{
	int choice;
	scanf("%d", &choice);
	return choice;
}
bool getDragon()
{
	printf("\nEnter 0 to Continue and 1 to Exit: ");
	return (getInput() == 1);
}
int getNum()
{
	int num;
	scanf("%d", &num);
	return num;
}
void midtermActivity1()
{
	int price, quantity, total, discount_is_5, discount_is_10;
	printf("Enter the price\n");
	scanf("%d", &price);
	printf("Enter the quantity\n");
	scanf("%d", &quantity);
	total = (quantity * price);
	discount_is_5 = (total - total * 0.05);
	discount_is_10 = (total - total * 0.1);
	if (total >= 3000)
	{
		printf("Your total price is %d so your discounted total price is %d ", total, discount_is_10);
	}
	else if (total >= 1000)
	{
		printf("Your total is %d so your discounted total price is %d ", total, discount_is_5);
	}
	else
	{
		printf("You your total is %d and your discount is 0% ", total);
	}
}
void midtermActivity2()
{
	char ch;
	printf("Enter any keyword:\n");
	scanf(" %c", &ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("You entered a vowel character");
	}
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("You entered a consonant character");
	}
	else
	{
		printf("You entered a symbol");
	}
}
void midtermActivity3()
{
	int num, i, even = 0, odd = 0, evennum = 2, oddnum = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Result: \n");
	for (i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			even = even + i;
			printf("even: %d\n", evennum);
			evennum += 2;
		}
		else
		{
			odd = odd + i;
			printf("odd: %d\n", oddnum);
			oddnum += 2;
		}
	}
	printf("\nThe sum of even numbers from 1 to %d is %d\n", num, even);
	printf("The sum of odd numbers from 1 to %d is %d\n", num, odd);
}
void midtermActivity4()
{
	int start = 1;
	int sum = 0;
	printf("Numbers divisible by 3 from 1000\n");
	while (start <= 1000)
	{
		if (start % 3 == 0)
		{
			printf("%4d", start);
			sum += start;
		}
		start++;
	}
	printf("\n\nThe sum of the numbers divisible by 3 is %d\n", sum);
}
void midtermActivity5()
{
	int i = 0, num, sum = 0, test;
	printf("Enter Integers, EOF to stop: and please enter after your last number\n");
	do
	{
		test = scanf("%d", &num);
		if (test != EOF && num % 2 != 0)
		{
			sum += num;
		}
		i++;
	}
	while (test != EOF);
	printf("\nThe sum of all the odd numbers is %d\n", sum);
}
void midtermActivity6()
{
	int i, n, sum = 0;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	printf("\nThe First %d Natural numbers are:\n ", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
		sum += i;
	}
	printf("\nThe Sum of these even %d terms: %d ", n, sum);
}


