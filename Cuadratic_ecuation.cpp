#include <iostream>
#include <cmath>  // For sqrt()

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        std::cout << "Not a quadratic equation (a cannot be 0)." << std::endl;
        return;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Two real roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } 
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        std::cout << "One real root: x = " << x << std::endl;
    } 
    else {
        printf("No solution"); 
    }
}

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;
    
    solveQuadratic(a, b, c);
    
    return 0;
}
