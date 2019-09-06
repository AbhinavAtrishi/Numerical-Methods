#include <iostream>
#include <cmath>
using namespace std;

//Enter the function to be solved here.
double f(double x){
    //return ((x*x*x) - (9 * x) + 1);
    return ((x * log10(x)) - 1.2);
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

    if(f(x0)*f(x1) > 0){
        cout << "\n Wrong Interval !" << endl;
        return 0;
    }

    double x2;
    for(int i = 0; i < n; i++){
        x2 = (x0 + x1)/2;
        if(abs(f(x2)) < eps){
            cout << "\n Root is : " << x2 << endl;
            cout << " Found in " << i << " iterations" << endl;
            return 0;
        }
        else if(f(x0)*f(x2) < 0){
            x1 = x2;
        }
        else{
            x0 = x2;
        }
    }
    cout << "\n No suitable root found in " << n << " steps, try increasing n." << endl;
    return 0;
}
