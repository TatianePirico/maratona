# include <iostream>
# include <stdio.h>
# include <iomanip>

int main() {

    int nFuncionario, totalHoras;
    double valorHora;

    std::cin >> nFuncionario >> totalHoras >> valorHora;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << nFuncionario << std::endl
        << "SALARY = U$ " << (totalHoras * valorHora) << std::endl; 

    return 0;
}