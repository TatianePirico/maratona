/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double A, B, C;
    std::cin >> A >> B >> C;

    /*Triangulo*/
    double areaTriangulo;
    areaTriangulo = (A * C) / 2;
    
    /*Circulo*/
    double areaCirculo;
    areaCirculo = 3.14159 * std::pow(C,2);
    
    /*Trapézio*/
    double areaTrapezio;
    areaTrapezio = ((A + B) * C) / 2;
    
    /*Quadrado*/
    double areaQuadrado;
    areaQuadrado = std::pow(B, 2);
    
    /*Retangulo*/
    double areaRetangulo;
    areaRetangulo = A * B;
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "TRIANGULO: " << areaTriangulo << std::endl;
    std::cout << "CIRCULO: " << areaCirculo << std::endl;
    std::cout << "TRAPEZIO: " << areaTrapezio << std::endl;
    std::cout << "QUADRADO: " << areaQuadrado << std::endl;
    std::cout << "RETANGULO: " << areaRetangulo << std::endl;

    return 0;
}