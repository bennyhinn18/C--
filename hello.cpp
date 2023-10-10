#include <iostream>

using namespace std;

int multiply(int x, int y);
int a = 100;
int main()
{   
    cout << "iside main " <<a << endl;
    int b = 2;
    cout << multiply(a, b) << endl;
    return 0;

}

/**
 * Multiplies two integers and returns the result.
 * @param x The first integer to multiply.
 * @param y The second integer to multiply.
 * @return The product of x and y.
 */
int multiply(int x,int y)
{   cout << "inside multiply "<< a << endl;
    return x * y;
}


