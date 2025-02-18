#include <iostream>
#include <math.h>
using namespace std;

int Factorial(int n);
int Fibonacci(int n);
int Bacteria(int b, int m);

int main(){

    int numb;
    int bac1, n;

    cout << "Insert number = ";
    cin >> numb;

    cout << "Factorial " << numb << " = " << Factorial(numb) << endl;
    cout << "Fibonacci " << numb << " = " << Fibonacci(numb) << endl;

    cout << "Insert the first number of bacteria = ";
    cin >> bac1;

    cout << "Insert the number of split = ";
    cin >> n;

    cout << "Total bacteria = " << Bacteria(bac1, n) << endl;

    cin.get();
    return 0;
}

int Factorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return n * Factorial(n - 1);
    }
}

int Fibonacci(int n){
    if (n == 1 || n == 2)
    {
        return 1;
    }else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int Bacteria(int b, int m){
    if (m == 0)
    {
        return b;
    }else
    {
        return 2 * Bacteria(b, m - 1);
    }
}