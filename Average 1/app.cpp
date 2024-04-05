/*
Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.

Input
The input file contains 2 floating points' values with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.
*/

#include <iostream>
#include <iomanip>

int main() {
    double a, b, MEDIA, newA, newB;
    std::cin >> a;
    
    if (a <= 10 && a >= 0) {
        newA = a * 3.5; 
    }
    else {
        abort();
    }
    
    std::cin >> b;
    if (b <= 10 && b >= 0) {
        newB = b * 7.5;
    }
    else {
        abort();
    }
    
    MEDIA = (newA + newB) / (3.5 + 7.5);
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << MEDIA << std::endl;
    
    return 0;
}