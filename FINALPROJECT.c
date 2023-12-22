#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#define PI 3.14

// Function prototypes
bool getDragon();
int getInput();
int getNum();

// Midterm functions
void midtermActivity1();
void midtermActivity2();
void midtermActivity3();
void midtermActivity4();
void midtermActivity5();
void midtermActivity6();

// Semi-Finals functions
void counter();
void areaofCRT();
void subPointer();
float getFInput();
float calcAreaCirc(float radius);
float calcAreaRect(float length, float width);
float calcAreaTri(float base, float height);
void printResult(int choice, float result);

// Finals functions
void finals1();
void finals2();
void finals3();
void sum();
void product();



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
				printf("\n*****Pick a Choice*****\n");
				printf("1. Calculate Area of Circle\n");
				printf("2. Calculate Area of Triangle\n");
				printf("3. Calculate Area of Rectangle\n");
				printf("0. Stop the program\n");
				printf("***********************\n");
				printf("Choice: ");
				num1 = getNum();
				switch (num1)
				{
				case 1:
					printf("Enter the Radius: ");
					num1 = getNum();
					sum = PI * num1 * num1;
					printf("The Area of Circle is: %.2lf", sum);
					y = getDragon();
					break;
				case 2:
					printf("Enter the Base: ");
					num1 = getNum();
					printf("Enter the Height: ");
					num2 = getNum();
					sum = 0.5 * num1 * num2;
					printf("Result: %.2lf", sum);
					y = getDragon();
					break;
				case 3:
					printf("Enter the Length: ");
					num1 = getNum();
					printf("Enter the Width: ");
					num2 = getNum();
					sum = num1 * num2;
					printf("Result: %.2lf", sum);
					y = getDragon();
					break;
				case 0:
					y = getDragon();
					break;
				default:
					printf("Invalid choice\n");
					y = getDragon();
				}
			}
			while (y == 0);
			break;
		case 2:
			do
			{
				printf("\n*****Pick a Choice*****\n");
				printf("1. Discounted Price \n");
				printf("2. Vowel or Consonant\n");
				printf("3. sum of odd and even numbers\n");
				printf("4. Numbers divisible by 3 from 1000\n");
				printf("5. Sum of all odd numbers EOF to stop\n");
				printf("6. Midterm Activity 6\n");
				printf("0. Stop the program\n");
				printf("***********************\n");
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
					y = getDragon();
				}
			}
			while (y == 0);
			break;
		case 3:
			do
			{
				printf("\n*****Pick a Choice*****\n");
				printf("1. COUNT NUMBERS	 \n");
				printf("2. Area of Circle, Rectangle and Triangle\n");
				printf("3. Find the Difference\n");
				printf("0. Stop the program\n");
				printf("***********************\n");
				printf("Choice: ");
				x = getInput();
				switch (x)
				{
				case 1:
					counter();
					y = getDragon();
					break;
				case 2:
					areaofCRT();
					y = getDragon();
					break;
				case 3:
					subPointer();
					y = getDragon();
					break;
				case 0:
					y = getDragon();
					break;
				default:
					printf("Invalid choice\n");
					y = getDragon();
				}
			}
			while (y == 0);
			break;
		case 4:
			do
			{
				printf("\n*****Pick a Choice*****\n");
				printf("1. sum and avarage for 15 odd and even numbers \n");
				printf("2. FINALS 2\n");
				printf("3. FINALS 3\n");
				printf("0. Stop the program\n");
				printf("***********************\n");
				printf("Choice: ");
				x = getInput();
				switch (x)
				{
				case 1:
					finals1();
					y = getDragon();
					break;
				case 2:
					finals2();
					y = getDragon();
					break;
				case 3:
					finals3();
					y = getDragon();
					break;
				case 0:
					y = getDragon();
					break;
				default:
					printf("Invalid choice\n");
					y = getDragon();
				}
			}
			while (y == 0);
			break;
		case 0:
			return 0;
		default:
			printf("Invalid choice\n");
			y = getDragon();
		}
	}
	while (y == 0);
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

// FINAL FUNCTIONS

void finals1(){
	int sumOdd=0, sumEven=0, i, countOdd=0, countEven=0;
	int numbers[15];
	float aveOdd, aveEven;
	
	
	printf("Enter 15 numbers to find it's sum and avarage for odd and even numbers: \n");
	for(i = 0; i < 15; i++){
		scanf("%d", &numbers[i]);
		if( numbers[i] %2 != 0 ){
			sumOdd += numbers[i];
			countOdd++;	   	   
		}
		else{
			sumEven += numbers[i];
			countEven++;		
		}
	}


	aveOdd = (float) sumOdd/countOdd;
	aveEven = (float) sumEven/countEven;
	
	if(countEven == 0){
		printf("\nYou did not enter an even number\n");
	}
	else{
		printf("\nThe sum of all EVEN numbers is: %d\n", sumEven);
		printf("The average of all EVEN numbers is: %.2f\n\n", aveEven);
	}

	if(countOdd == 0){
		printf("\nYou did not enter an odd number\n");
	}
	else{
		printf("\nThe sum of all ODD numbers is: %d\n", sumOdd);
		printf("The average of all ODD numbers is: %.2f\n", aveOdd);
	}
	
	return;
}

void finals2(){
	int numbers[10];
	int sum = 0, i, smallest, largest, j, temp;
	float average;
	
	printf("Enter 10 numbers: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &numbers[i]);
	}

	smallest = numbers[0];
	largest = numbers[0];
		
	for(i = 0; i < 10; i++){
		if(numbers[i] < largest){
			largest = numbers[i];
	}
		if(numbers[i] > smallest){
			smallest = numbers[i];
		}
		
		sum += numbers[i];
	}
	
	for (i = 0; i < 10; i++){
		for( j = i+1; j < 10; j++){
			if(numbers[i] > numbers[j]){
				temp = numbers[i];
				numbers[i] = numbers [j];
				numbers[j] = temp;
			}
		}
	}
	
	average = (float) sum/10;
	
	printf("\nSmallest Value: %d\n", largest);
	printf("Largest Value: %d\n", smallest);
	printf("The sum: %d\n", sum);
	printf("The average: %.2f\n", average); 


	printf("\nAscending sort:\n");
	for( i = 0; i < 10; i++){
		printf(" %d ", numbers[i]);
	}
	
	for( i = 0; i < 10; i++){
		for( j = i+1; j < 10; j++){
			if(numbers[i] < numbers[j]){
					temp = numbers[i];
					numbers[i] = numbers [j];
					numbers[j] = temp;
			}
		}
	}
			
	printf("\nDescending sort:\n");			
	for( i = 0; i < 10; i++){
		printf(" %d ", numbers[i]);
	}
	

	return;
}

void sum( int array1[100][100], int array2[100][100], int dimension){
	int i, j;
		
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			printf("%4d ", array1[i][j] + array2[i][j]);
		}
		printf("\n");
	}
	return;
}

void product( int array1[100][100], int array2[100][100], int dimension){
	int i, j;
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			printf("%4d ", array1[i][j] * array2[i][j]);
		}
		printf("\n");
	}
	return;
}


void finals3(){
	int array1[100][100], array2[100][100] ;
	int dimension,i ,j;
	
	printf("Enter the dimension of the array: ");
	scanf("%d", &dimension);
	
	printf("Array1: \n");
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			scanf("%d", &array1[i][j]);
		}
	}
	
	
	printf("\nArray2: \n");
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			scanf("%d", &array2[i][j]);
		}
	}
	
	printf("\nSum:\n");
	sum(array1,array2,dimension);
	
	printf("\nProduct:\n");
	product(array1,array2,dimension);
	
	return;
}

// SEMI - FINAL FUNCTIONS

void counter()
{
	int i, count=0;
	
	while(count<5){
		for(i = 1; i<=5; i++){
			printf("%d\n", i);
		}
		count++;
	}
	
	return;
}

void areaofCRT() {
    
	printf("Enter your choice:\n");
    printf("1. Area of a circle\n");
    printf("2. Area of a rectangle\n");
    printf("3. Area of a triangle\n");
    
	int choice = getInput();
    float result;
	float radius, base, length, height, width;
    
    switch (choice)
	{
       case 1:
            printf("Enter the radius: ");
            radius = getFInput();
            result = calcAreaCirc(radius);
            break;
        case 2:
            printf("Enter the length: ");
            length = getFInput();
            printf("Enter the width: ");
            width = getInput();
            result = calcAreaRect(length, width);
            break;
        case 3:
            printf("Enter the base: ");
            base = getFInput();
            printf("Enter the height: ");
            height = getFInput();
            result = calcAreaTri(base, height);
            break;
        default:
            result = -1;
    }

    printResult(choice, result);
    return;
}

void subPointer(){

    int num1, num2,sub;
    int *ptr1, *ptr2, *ptrMinus;
    
    ptr1 = &num1;
    ptr2 = &num2;
    ptrMinus = &sub;
	
    printf("Enter the first number: ");
    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    *ptrMinus = *ptr1-*ptr2;
    
	printf("Difference is = %d\n", sub);
    
    return;
}

float getFInput(){
	float input;
	scanf("%f", &input);
	return input;
}

float calcAreaCirc(float radius) {
    return PI * radius * radius;
}

float calcAreaRect(float length, float width) {
    return length * width;
}

float calcAreaTri(float base, float height) {
    return 0.5 * base * height;
}


void printResult(int choice, float result) {
    switch (choice) {
        case 1:
            printf("The area of the circle is: %.2f\n", result);
            break;
        case 2:
            printf("The area of the rectangle is: %.2f\n", result);
            break;
        case 3:
            printf("The area of the triangle is: %.2f\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }
}

