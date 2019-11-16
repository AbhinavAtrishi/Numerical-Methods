#include <iostream>
#include <cmath>
using namespace std;

//Enter the function to be solved here.
double f(double x){
    return (x - (exp(-x)));
    //return ((3 * x) - 1 - cos(x));
}

int main(){
    double x0, x1, n, eps;
    cout << " Enter X0 : ";
    cin >> x0;
    cout << "\n Enter X1 : ";
    cin >> x1;
    cout << "\n Enter EPS : ";
    cin >> eps;
    cout << "\n Enter N : ";
    cin >> n;
    if(abs(f(x0) - f(x1)) < eps){
        cout << "\n Wrong Interval !" << endl;
        return 1;
    }

    double x2;
    for(int i = 0; i < n; i++){
        x2 = ((x0 * f(x1)) - (x1 * f(x0)))/(f(x1) - f(x0));
        //cout << "X2 is " << x2 << endl;
        if(abs(f(x2)) < eps){
            cout << "\n Root is : " << x2 << endl;
            return 0;
        }
        x0 = x1;
        x1 = x2;
    }
    cout << "\n No suitable root found in " << n << " steps, try increasing n." << endl;
    return 1;
}
