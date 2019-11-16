#include <iostream>
#include <cmath>

using namespace std;

double dydx(double x, double y){
    return x*y; //This is the expression
    //Enter the PDE in the form of dy/dx = expression
}

int main(){
    double x0, y0, h, x_target;
    cout << "Enter the initial conditions" << endl;
    cout << "\nEnter X0 : ";
    cin >> x0;
    cout << endl;
    cout << "\nEnter Y0 : ";
    cin >> y0;
    cout << endl;
    cout << "\nEnter h : ";
    cin >> h;
    cout << endl;
    cout << "\nEnter X, value of which is needed : ";
    cin >> x_target;
    cout << endl;

    double t = 0;

    while(x_target > x0){
        t = y0;
        y0 += (h * dydx(x0, y0));
        x0 += h;
    }

    cout << "Answer at X = " << x_target << ", Y is : " << y0 << endl;
}
