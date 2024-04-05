/*
Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
*/

#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::fixed << std::setprecision(1);
    double a,b,c, MEDIA;

    std::cin >> a;
    if(a <= 10 && a >= 0) {
        a = a * 2;
    } else {
        abort();
    }

    std::cin >> b;
    if(b <= 10 && b >= 0) {
        b = b * 3;
    } else {
        abort();
    } 

    std::cin >> c;
    if(c <= 10 && c >= 0) {
        c = c * 5;
    } else {
        abort();
    } 

    MEDIA = ((a * 2) + (b * 3) + (c * 5)) / 10;
    std::cout << "MEDIA = " << MEDIA << std::endl;

    return 0;
}