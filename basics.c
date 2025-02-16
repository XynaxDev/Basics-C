#include <stdio.h>

// Function to display a welcome message
void displayWelcome() {
    char ch;
    scanf("%c", &ch);
    printf("Welcome to ultimate code of 'C'\n");
}

// Function to calculate the sum of three numbers
void sumThreeNumbers() {
    int a, b, c;
    printf("Enter the no. a:\n");
    scanf("%d", &a);
    printf("Enter the no. b:\n");
    scanf("%d", &b);
    printf("Enter the no. c:\n");
    scanf("%d", &c);
    printf("Sum of a, b & c: %d\n", a + b + c);
}

// Function to calculate the area of a square
void areaSquare() {
    int side;
    printf("Enter the side:\n");
    scanf("%d", &side);
    printf("Area of square is: %d\n", side * side);
}

// Function to calculate the area of a circle
void areaCircle() {
    float radius;
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);
    printf("Area of Circle is: %f\n", 3.14 * radius * radius);
}

// Function to calculate the area of a triangle
void areaTriangle() {
    float base, height;
    printf("Enter the base:\n");
    scanf("%f", &base);
    printf("Enter the height:\n");
    scanf("%f", &height);
    printf("Area of triangle is: %f\n", 0.5 * base * height);
}

// Function to calculate the area of a cube
void areaCube() {
    int side;
    printf("Enter the value of a side:\n");
    scanf("%d", &side);
    printf("Area of Cube is: %d\n", 6 * side * side);
}

// Function to calculate simple interest
void simpleInterest() {
    float P, R, T;
    printf("Enter the value of P:\n");
    scanf("%f", &P);
    printf("Enter the value of R:\n");
    scanf("%f", &R);
    printf("Enter the value of T:\n");
    scanf("%f", &T);
    printf("The Simple Interest is: %f\n", P * R * T / 100);
}

// Function to calculate the area of a trapezium
void areaTrapezium() {
    float a, b, h;
    printf("Enter the value of a:\n");
    scanf("%f", &a);
    printf("Enter the value of b:\n");
    scanf("%f", &b);
    printf("Enter the value of h:\n");
    scanf("%f", &h);
    printf("Area of Trapezium is: %f\n", 0.5 * (a + b) * h);
}

// Function to demonstrate type declaration and arithmetic operations
void typeDeclaration() {
    int age = 36;
    int oldAge = age;
    int newAge = oldAge + 9 - 7;
    printf("The new age is now: %d\n", newAge);
}

// Function to calculate the average of three numbers
void averageOfThree() {
    float a, b, c;
    printf("Enter the no. a:\n");
    scanf("%f", &a);
    printf("Enter the no. b:\n");
    scanf("%f", &b);
    printf("Enter the no. c:\n");
    scanf("%f", &c);
    printf("Your average of three numbers is: %f\n", (a + b + c) / 3);
}

// Function to find the smallest of two numbers using ternary operator
void smallestNumberTernary() {
    int a, b;
    printf("Enter the no. a:\n");
    scanf("%d", &a);
    printf("Enter the no. b:\n");
    scanf("%d", &b);
    printf("The smallest no. is: %d\n", (b > a) ? a : b);
}

// Function to find the smallest of two numbers using if-else
void smallestNumberIfElse() {
    int a, b;
    printf("Enter no. a:\n");
    scanf("%d", &a);
    printf("Enter no. b:\n");
    scanf("%d", &b);
    if (a < b) {
        printf("Smallest no. is: %d\n", a);
    } else {
        printf("Smallest no. is: %d\n", b);
    }
}

// Function for day prediction using integer input
void dayPredictionInt() {
    int day;
    printf("Enter the day in no.(1-7):\n");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Day is Monday\n"); break;
        case 2: printf("Day is Tuesday\n"); break;
        case 3: printf("Day is Wednesday\n"); break;
        case 4: printf("Day is Thursday\n"); break;
        case 5: printf("Day is Friday\n"); break;
        case 6: printf("Day is Saturday\n"); break;
        case 7: printf("Day is Sunday\n"); break;
        default: printf("🚫 Invalid day no.\n");
    }
}

// Function for day prediction using character input
void dayPredictionChar() {
    char day;
    printf("Enter the day starting letter:\n");
    scanf(" %c", &day);
    switch (day) {
        case 'm': printf("Day is Monday\n"); break;
        case 't': printf("Day is Tuesday\n"); break;
        case 'w': printf("Day is Wednesday\n"); break;
        case 'T': printf("Day is Thursday\n"); break;
        case 'f': printf("Day is Friday\n"); break;
        case 's': printf("Day is Saturday\n"); break;
        case 'S': printf("Day is Sunday\n"); break;
        default: printf("🚫 Invalid day letter");
    }
}

// Function to determine grade based on marks
void gradeSystem() {
    int marks;
    printf("Enter the marks you obtained to check your grade:\n");
    scanf("%d", &marks);
    if (marks >= 0 && marks < 20) {
        printf("You are 'FAIL' ☹️\n");
    } else if (marks >= 20 && marks < 30) {
        printf("Your grade is 'D'\n");
    } else if (marks >= 30 && marks < 50) {
        printf("Your grade is 'C'\n");
    } else if (marks >= 50 && marks < 70) {
        printf("Your grade is 'B'\n");
    } else if (marks >= 70 && marks < 90) {
        printf("Your grade is 'A'\n");
    } else if (marks >= 90 && marks <= 100) {
        printf("Your grade is 'A+'\n");
    } else {
        printf("Please enter marks between 0-100\n");
    }
}

// Function to check age category
void ageCategory() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age < 13) {
        printf("You are a Child\n");
    } else if (age >= 13 && age < 18) {
        printf("You are a Teenager\n");
    } else {
        printf("You are Adult (now you are eligible to vote)\n");
    }
}

// Function to check lucky number using ternary operator
void luckyNumberCheck() {
    int number = 7;
    int luckyNumber = 7;
    printf("Enter the number (0-10) to check whether you are lucky or not:\n");
    scanf("%d", &number);
    if (number > 10) {
        printf("Please enter no. between (0-10)\n");
    } else {
        (number == luckyNumber) ? printf("You are Lucky 😊\n") : printf("You are not Lucky ☹️\n");
    }
}

// Function to check adult status using ternary operator
void adultCheckTernary() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    (age >= 18) ? printf("You are an Adult\n") : printf("You are not an Adult\n");
}

// Function to calculate square of a number
void squareOfNumber() {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Square of the number is: %d\n", n * n);
}

// Function to sum numbers between two natural numbers (inclusive)
void sumBetweenRange() {
    int start, end, sum = 0;
    printf("Enter the first no.:\n");
    scanf("%d", &start);
    printf("Enter the second no.:\n");
    scanf("%d", &end);
    printf("The total sum between two no.s is:\n");
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}

// Function to print the multiplication table of a given number
void printTable() {
    int n;
    printf("Enter the no. of which you want the table:\n");
    scanf("%d", &n);
    printf("Your table of the given no. is:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }
}

// Function to demonstrate a for loop (ascending)
void forLoopAscending() {
    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }
}

// Function to demonstrate a for loop (descending)
void forLoopDescending() {
    for (int i = 20; i >= 0; i--) {
        printf("%d\n", i);
    }
}

// Function to demonstrate a while loop
void whileLoopNumbers() {
    int i = 1;
    while (i <= 40) {
        printf("%d\n", i);
        i++;
    }
}

// Function to demonstrate a do-while loop
void doWhileLoopNumbers() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 30);
}

// Function to print "Hello World" 10 times
void printHelloWorld() {
    for (int i = 1; i <= 10; i++) {
        printf("Hello World\n");
    }
}

// Function to print numbers from 1 up to n
void printNumbersUptoN() {
    int n;
    printf("Enter the no. till you want to print:\n");
    scanf("%d", &n);
    printf("The numbers are:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

// Function to calculate the sum from 1 up to n
void sumUptoN() {
    int n, sum = 0;
    printf("Enter the no. which you want to sum from one:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The total sum of the numbers is: %d\n", sum);
}

int main() {
    // Uncomment the function calls below to test individual functionalities:
    
    // displayWelcome();
    // sumThreeNumbers();
    // areaSquare();
    // areaCircle();
    // areaTriangle();
    // areaCube();
    // simpleInterest();
    // areaTrapezium();
    // typeDeclaration();
    // averageOfThree();
    // smallestNumberTernary();
    // smallestNumberIfElse();
    // dayPredictionInt();
    // dayPredictionChar();
    // gradeSystem();
    // ageCategory();
    // luckyNumberCheck();
    // adultCheckTernary();
    // squareOfNumber();
    // sumBetweenRange();
    // forLoopAscending();
    // forLoopDescending();
    // whileLoopNumbers();
    // doWhileLoopNumbers();
    // printHelloWorld();
    // printNumbersUptoN();
    // sumUptoN();
    printTable();
    return 0;
}
