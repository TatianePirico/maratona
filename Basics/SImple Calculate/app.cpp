/*
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

int main() {
    int codigo1, numeroPecas1, codigo2, numeroPecas2;
    double valorUnitario1, valorUnitario2, totalVenda;
    
    std::cin >> codigo1 >> numeroPecas1 >> valorUnitario1;
    std::cin >> codigo2 >> numeroPecas2 >> valorUnitario2;
    
    totalVenda = (numeroPecas1 * valorUnitario1) + (numeroPecas2 * valorUnitario2);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << totalVenda << std::endl;
    
    return 0;
}