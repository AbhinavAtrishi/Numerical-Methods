#include <iostream>
#include <cmath>
using namespace std;

//Enter the function to be solved here.
double f(double x){
    return sin(x);
}
//Current implementation requires user to manually differentiate the equation
double df(double x){
    return cos(x);
}

int main(){
    double x0, x1, n, eps;
    cout << " Enter X1 : ";
    cin >> x1;
    cout << "\n Enter EPS : ";
    cin >> eps;
    cout << "\n Enter N : ";
    cin >> n;

    double x2;
    for(int i = 0; i < n; i++){
        x2 = x1 - (f(x1)/df(x1));
        if(abs(f(x2)) < eps){
            cout << "\n Root is : " << x2 << endl;
            cout << " Found in " << i << " iterations" << endl;
            return 0;
        }
        x1 = x2;
    }
    cout << "\n No suitable root found in " << n << " steps, try increasing n." << endl;
    return 0;
}
