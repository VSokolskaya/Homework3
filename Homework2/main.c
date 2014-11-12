//
//  main.c
//  Homework2
//
//  Created by admin on 11/12/14.
//  Copyright (c) 2014 admin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
float PhoneBill (float minutes, float max_minutes, float price1, float price2);
void AgeClassifier (int age);
int sum (int val1, int val2, int val3);
void IsPositive (int val1, int val2, int val3);
void SwimWinner (float result1, float result2, float result3);
void IsEven (int number);
int TriangleP (int ax, int ay, int bx, int by,int cx, int cy, int mx, int my, int hx, int hy, int px, int py);

void IsLeapYear (int year);



int main() {
    
    float a = 0;
    float b = 0;
    a = PhoneBill (60, 100, 30, 1);
    b = PhoneBill (110, 100, 30, 1);
    printf ("Your bill for phone calls is %f\n", a);
    printf ("Your bill for phone calls over enabled limit is %f\n\n", b);
    
    AgeClassifier(0);
    AgeClassifier(7);
    AgeClassifier(18);
    AgeClassifier(67);
    
    printf ("Sum of min and max number = %d\n", sum(1,2,3));
    printf ("Sum of min and max number = %d\n", sum(3,6,8));
    printf ("Sum of min and max number = %d\n\n", sum(123,0, 55));
    
    
    IsPositive(-1,-23,-19);
    IsPositive(16, 23, 0);
    IsPositive(-2, 9, 11);
    
    SwimWinner (15.45, 15.46, 15.47);
    SwimWinner(16.01, 15.59, 15.57);
    SwimWinner(16.07, 15.45, 15.55);
    
    IsEven(24);
    IsEven(27);
    
    printf("\nСумма периметров треугольников с заданными вершинами равна \t%d\n", TriangleP(0, 1, 3, 1, 4, 2, 6, 7, 4, 3, 3, 8));
    
    
    IsLeapYear(2012);
    IsLeapYear(2015);
    IsLeapYear(2000);
    IsLeapYear(1900);
    
    return 0;
    
}

float PhoneBill (float minutes, float max_minutes, float price1, float price2)
{
   
    if (minutes<=max_minutes) return price1;
    else return (minutes-max_minutes)*price2 + price1;
}

void AgeClassifier (int age)
{
    if ((age>=0)&&(age<6))
        printf ("You are \tToddler\n");
    else if ((age>=6)&&(age<=17))
        printf ("You are \tStudent\n");
    else if ((age>=17)&&(age<=60))
        printf ("You are \tWorker\n");
    else
        printf ("You are \tPensioner\n\n");
}

int sum (int val1, int val2, int val3)
{
    int min=0;
    int max=0;
    if ((val1<val2)&&(val1<val3))
        min = val1;
    else if ((val2<val1)&&(val2<val3))
        min = val2;
    else min = val3;
    
    if ((val1>val2)&&(val1>val3))
        max = val1;
    else if ((val2>val1)&&(val2>val3))
        max = val2;
    else max = val3;
    return min+max;
}

void IsPositive (int val1, int val2, int val3)
{
    if (((val1+val2)>0)||((val1+val3)>0)||((val2+val3)>0))
        printf("Sum of 2 among 3 specified values: %d\t %d\t %d is positive\n", val1, val2, val3);
    else printf("Non of the combinations gives positive sum\n");
}

void SwimWinner (float result1, float result2, float result3)
{
    if ((result1<result2)&&(result1<result3))
        printf("\nThe winner is first athelete with the result: %f\n", result1);
    
    else  if ((result2<result1)&&(result2<result3))
        printf("\nThe winner is second athelete with the result: %f\n", result2);
    
    else printf("\nThe winner is third athelete with the result: %f\n", result3);
    
}

void IsEven (int number)
{
    if (number%2) printf ("\n Number %d is odd\n", number);
    else printf("\n Number %d is even\n", number);
}

int TriangleP (int ax, int ay, int bx, int by,int cx, int cy, int mx, int my, int hx, int hy, int px, int py)

{
    int P_abc = 0;
    int P_mhp = 0;
    P_abc = sqrtf(powf((bx-ax),2)+powf((by-ay),2)) + sqrtf(powf((cx-bx),2)+powf((cy-by),2)) + sqrtf(powf((cx-ax),2)+powf((cy-ay),2));
    
    P_mhp = sqrtf(powf((hx-mx),2)+powf((hy-my),2)) + sqrtf(powf((px-hx),2)+powf((py-hy),2)) + sqrtf(powf((px-mx),2)+powf((py-my),2));
    return P_abc+P_mhp;

}

void IsLeapYear (int year)
{
    if (year%4)
        printf("\nГод %d обычный\n",year);
    else if (year%100)
        printf("\nГод %d високосный\n",year);
    else if ((!(year%100))&&(!(year%400)))
        printf("\nГод %d високосный\n",year);
    else printf("\nГод %d обычный\n",year);
        
}