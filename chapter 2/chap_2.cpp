#include <iostream>
#include "Sales_item.h"

using namespace std;
// Exercise 2.1
// short: Typically stores the smallest range of integer values, often 2 bytes.
// int: A standard integer type, usually 2 or 4 bytes, offering a larger range than short.
// long: Guarantees at least the same range as int, often 4 bytes.
// long long: Guarantees at least the same range as long, typically 8 bytes, providing the largest range among these integer types.


// signed types: These types can represent both positive and negative values, as one bit is used to store the sign (0 for positive, 1 for negative).

// unsigned types: These types can only represent non-negative values (zero and positive values). All bits are used to store the magnitude of the number, effectively doubling the positive range compared to a signed type of the same size. For example, unsigned int can store larger positive numbers than int.

// float: Represents single-precision floating-point numbers, typically using 4 bytes of memory. It offers less precision than double.

// double: Represents double-precision floating-point numbers, typically using 8 bytes of memory. It offers higher precision and a larger range of values than float.

// Exercise 2.2
// double or float 

/* int main(){
    bool b = 42;
    int i = b;
    i = 3.14;
    double pi = i;
    unsigned char c =-100; 
    signed char c2 = 255;  // only from 0 to 255 

    cout << b << endl;
    cout << i << endl;
    cout << pi << endl;
    cout << c << endl;
    cout << c2 << endl;

    return 0;
} */


/* int main() {
    unsigned u = 10;    // if no postive numbeer then goees huge number
    int i =-42;
    std::cout << i + i << std::endl; 
    std::cout << u + i << std::endl; 
} */


/* int main() {
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl; 
    std::cout << u2 - u1 << std::endl; 
} */

/* int main() {
    // for (int i = 0; i <= 10; ++i)
    // std::cout << i << std::endl;

    // for (unsigned u = 10; u >= 0;--u) // never do this in unsigned
    // std::cout << u << std::endl;

    unsigned u = 11; 
    while (0 < u) {
        --u;
        std::cout << u << std::endl;
 }
} */


// Exercise 2.3: What output will the following code produce?
/* int main(){
    unsigned u = 10, u2 = 42;
    std::cout << u2- u << std::endl;
    std::cout << u- u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2- i << std::endl;
    std::cout << i- i2 << std::endl;
    std::cout << i- u << std::endl;
    std::cout << u- i << std::endl;

    return 0;

} */

/* int main() {
    std::cout << "Hi \x4dO\115!\n"; // printsHi MOM!followedbyanewline
    std::cout << ’\115’ << ’\n’;
    return 0;
}
 */

// Exercise 2.6 int and octal

// Exercise 2.7 
/* int main() {
    std::cout << "2\tM\n";
    return 0;
} */

/* int main() {
    int sum = 0, value, units_sold = 0; 
    Sales_item item;
    std::string book("0-201-78345-X"); 
    return 0;
} */


/* int main() {
    // Declare and initialize a long double variable with a fractional value
    long double ld = 3.1415926536;

    // --- Brace Initialization (Error: Narrowing Conversion) ---
    // Attempting to initialize 'int' with a 'long double' using brace initialization
    // will result in a compilation error because it disallows narrowing conversions.
    // Uncommenting these lines will prevent the code from compiling.
    // int a{ld}; // error: narrowing conversion required
    // int b = {ld}; // error: narrowing conversion required

    // --- Functional and Copy Initialization (OK: Value Truncation) ---
    // These forms of initialization allow implicit narrowing conversions,
    // but the fractional part of the 'long double' will be truncated.
    int c(ld); // Functional notation
    int d = ld; // Copy initialization

    // --- Demonstrate the Results ---
    std::cout << "Original long double value: " << ld << std::endl;
    std::cout << "Value of 'c' (functional initialization): " << c << std::endl;
    std::cout << "Value of 'd' (copy initialization): " << d << std::endl;

    // To explicitly perform the narrowing conversion with brace initialization,
    // you would need to use a static_cast:
    int e {static_cast<int>(ld)};
    std::cout << "Value of 'e' (brace initialization with static_cast): " << e << std::endl;

    return 0;
} */

// Exercise 2.9


// Exercise 2.10


// Exercise 2.12
/* int main(){
    double pi = 3.1416;

    int _ ;

    int catch-22; 

    double Double = 3.14;

    int 1_or_2= 1;
    double  c = 3.14;
} */

// page 73 

/* #include <iostream>
 int main(){
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
    sum += val;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
} */


/* int reused = 42;
int unique = 1; 


int main(){

    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    int unique = 2;
    std::cout << reused << " " << unique << std::endl;

    std::cout << ::reused << " " << ::unique << std::endl;

    return 0;
} */

// Exercise 2.13

/* int i = 42;
int main(){
    int i = 100;
    int j = i;
    std::cout << i << std::endl;
    std::cout << j << std::endl;
} */

// Exercise 2.14

/* int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i){
        sum += i;
    }
    std::cout << i  << " " << sum << std::endl;
}  */


/* int main() {
    int ival = 1024;
    int &refVal = ival;
    int *refVal2 = &refVal;

    std::cout << ival << std::endl;
    std::cout << &refVal << std::endl;
    std::cout << *refVal2 << std::endl;
} */

/* int main() {
    double dval = 3.14;
    double &refVal5 = dval; 

} */


// Exercise 2.15

// (a) Y
// (b) N
// (c) Y
// (d) N


// Exercise 2.16

// (a) Y
// (b) N  Y 
// (c) Y
// (d) N  y

// Exercise 2.17

/* int main() {
    int i, &ri = i;
    i = 6; ri = 10;
    std::cout << i << " " << ri << std::endl;
} */

// page 77


/* int main() {
    int ival = 42;
    int *p = &ival;
    *p = 0;
    cout << *p; 
    return 0;
} */


// int main(){
//     int i = 42;
//     int &r = i; 
//     int *p; 
//     p = &i; 
//     *p = i; 
//     int &r2 = *p;

//     cout << *p << endl;
//     cout << p << endl;
//     cout << &r2 << endl;
// }

/* int main(){
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    pv = pd;
    
    cout << *pd << endl;
    cout << *pv << endl;
    cout << pv << endl;
    return 0;
} */

// Exercise 2.18 

/* int main() {
    int a = 10;
    int b = 20;
    int *ptr = &a; // ptr initially points to 'a'

    std::cout << "Initial value of ptr (address of a): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    ptr = &b; // Change the value of the pointer to point to 'b'

    std::cout << "New value of ptr (address of b): " << ptr << std::endl;
    std::cout << "New value pointed to by ptr: " << *ptr << std::endl;

    return 0;
} */

/* int main() {
    int value = 100;
    int* ptr = &value; // ptr points to 'value'

    std::cout << "Initial value of 'value': " << value << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    *ptr = 200; // Change the value to which ptr points

    std::cout << "New value of 'value': " << value << std::endl;
    std::cout << "New value pointed to by ptr: " << *ptr << std::endl;

    return 0;
} */

// Exercise 2.19 (explain in ai)

// Exercise 2.20 

/* int main(){
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    cout << i << endl;
    cout << *p1 << endl;

    return 0; 
} */

// Exercise 2.21: Explain each of the following definitions. 
// Indicate whether any are illegal and, if so, why.

// (a) wrong
// (b) wrong 
// (c) right 

// Exercise 2.22  ai explain
/* int main(){
    char c = 'F';
    cout << static_cast<int>(c) << endl;
    return 0;
} */



// Exercise 2.23  ai explain 


// Exercise 2.14
// (a) valid
// (b) valid 
// (c) invalid because of long 
/* int main(){
    int i = 42;
    void *p = &i;
    long *lp = &i;   X 
} */


/* int main(){
    int i = 1024, *p = &i, &r = i;

    cout << i << endl;
    cout << *p << endl;
    cout << &r << endl;

    return 0;
} */

/* int main(){
    int ival = 1024;
    int *pi = &ival; // pi points to an int
    int **ppi = &pi;

    cout << "The value of ival\n"
         << "direct value: " << ival << "\n"
         << "indirect value: " << *pi << "\n"
         << "doubly indirect value: " << **ppi
         << endl;
    return 0;
} */

