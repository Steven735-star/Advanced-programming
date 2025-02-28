#include <iostream>
#include <string>
using namespace std;

// Part 3: Definition of the Point structure
struct Point {
    int x;
    int y;
    int z;
};

int main() {
    // Part 1: Variable Initialization
    int a(10);               
    double b{3.14};          
    std::string c = "Hello"; 
    bool d = true;           

    // Print initialized values
    cout << "The variables are:" << endl;
    cout << "int: " << a << ", double: " << b << ", string: " << c << ", bool: " << d << endl;

    // Part 2: References
    int& refA = a;
    double& refB = b;
    std::string& refC = c;
    bool& refD = d;

    // Using references refA, refB,...,etc. 
    refA = 20;
    refB = 2.71;
    refC = "World";
    refD = false;

    // Print the new values. 
    cout << "\nModified values using references:" << endl;
    cout << "int: " << a << ", double: " << b << ", string: " << c << ", bool: " << d << endl;

    // Pointers modification
    int* ptrA = &a;
    *ptrA = 100;

    cout << "\nModification using pointer:" << endl;
    cout << "int: " << a << endl;

    // Part 3: Structured Binding
    Point point{5, 10, 15};

    // Use Structured Binding to unpack the members
    auto [x, y, z] = point;

    // Print unpacked values
    cout << "\nStructured Binding:" << endl;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    // Part 4: Identifying l-values and r-values
    cout << "\nIdentifying l-values and r-values on the code:" << endl;

    a = 42; 
    // 'a' is an l-value because it refers to a memory location.

    int p = a + b;
    // 'a' and 'b' are l-values, but '(a + b)' is an r-value (temporary result).

    int* ptr = &a;
    // '&a' is an l-value because it provides the address of 'a'.

    std::string s = c + " World";
    // 'c' is an l-value, " World" is an r-value (literal),
    // and '(c + " World")' is an r-value (temporary result).

    int& refX = p;
    // 'refX' is an l-value reference to 'p'.

    int&& rref = 100;
    // '100' is an r-value (literal) and 'rref' is an r-value reference.
    return 0;
}


