#include <stdio.h>

//question 1
//Design and develop a flowchart and algorithm to read a year as an input and find whether it is leap year or not.
//Implement a C program for the same and execute for all possible inputs with appropriate messages.
//Also consider end of the centuries.
//
//int main() {
//    int year;
//    printf("Enter a year:");
//    scanf("%d", &year);
//    if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
//        printf("%d is a leap year.", year);
//    } else {
//        printf("%d is not a leap year.", year);
//    }
//    return 0;
//}

//question 2
//Design and develop a flowchart and algorithm to find the square root of a given number N.
//Implement a C program for the same and execute for all possible inputs with appropriate messages.
//(Note: Dont use library function sqrt(n), Hint: Use Newton-Raphson method to find the square root).
//
//int main() {
//    int num, s, check;
//    printf("Enter a number:");
//    scanf("%d", &num);
//    s = num / 2;
//    for (int i = 0; i < num; i++) {
//        check = s;
//        s = (s + num / s) / 2;
//        if (check == s) {
//            break;
//        }
//    }
//    printf("The square root of the number %d is %d", num, s);
//    return 0;
//}

//question 3
//Design and develop a flowchart and algorithm to generate a Fibonacci sequence up to a given number N.
//A Fibonacci sequence is defined as follows:
//The first and second terms in the sequence are 0 and 1.
//Subsequent terms are found by adding the preceding two terms in the sequence.
//Implement a C program for the developed flowchart/algorithm and execute the same to generate the first N terms of the sequence.
//
//int main() {
//    int a, b, c, num;
//    a = 0;
//    b = 1;
//    printf("Enter the number of elements :");
//    scanf("%d", &num);
//    printf("The fibonacci series:-\n");
//    for (int i = 1; i <= num; i++) {
//        c = a + b;
//        printf("%d+%d=%d", a, b, c);
//        printf("\n");
//        a = b;
//        b = c;
//    }
//    return 0;
//}

//question 4
//Design and develop a flowchart and algorithm that takes three coefficients (a, b, and c) of a Quadratic equation (ax2+bx+c=0) as input and compute all possible roots.
//Implement a C program for the developed flowchart/algorithm and execute the same to output the possible roots for a given set of coefficients with appropriate messages.
//
//#include<math.h>
//
//int main() {
//    int a, b, c, sq;
//    sq = 253;
//    printf("Enter the coefficient of x%c:", (char) sq);
//    scanf("%d", &a);
//    printf("Enter the coefficient of x:");
//    scanf("%d", &b);
//    printf("Enter the constant:");
//    scanf("%d", &c);
//    printf("The quadratic equation is %dx%c + %dx + %d = 0", a, (char) sq, b, c);
//    printf("\n");
//    if (b * b - 4 * a * c >= 0) {
//        printf("The first root is: %.2f", (-b + sqrt(b * b - 4 * a * c)) / 2 * a);
//        printf("\n");
//        printf("The second root is: %.2f", (-b - sqrt(b * b - 4 * a * c)) / 2 * a);
//    } else {
//        printf("Enter a valid quadratic equation!!!");
//    }
//    return 0;
//}

//   !!!!!!!!!!!!!!!!!!!!!! END OF WEEK-2 !!!!!!!!!!!!!!!!!!!!!!
//   !!!!!!!!!!!!!!!!!!!!!!!! THANK YOU !!!!!!!!!!!!!!!!!!!!!!!!