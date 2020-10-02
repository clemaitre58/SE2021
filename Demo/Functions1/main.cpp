#include <iostream>

double cir(double);
double area(double);


int main() {
    double my_d = 12.45;
    std::cout << "Circonf : " << cir(my_d) << std::endl;
    std::cout << "Area : " << area(my_d) << std::endl;
    return 0;
}

double cir(double d) {
    return 3.14 * d;
}

double area(double d) {
    double r = d /2;
    return 3.14 * r * r;
}
