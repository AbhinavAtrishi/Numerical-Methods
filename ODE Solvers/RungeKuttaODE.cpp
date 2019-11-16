#include <iostream>
#include <cmath>

using namespace std;

double dydx(double x, double y){
    return x; //This is the expression
    //Enter the PDE in the form of dy/dx = expression
}

int main(){
    double x0, y0, h, x_target;
    cout<< "Provide the initial condition" << endl;
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

    int n = (int)((x_target - x0) / h);
    double k1, k2, k3, k4;
    double y = y0;

    for(int i = 0;i < n;i++){
        k1 = h * dydx(x0, y);
        k2 = h * dydx(x0 + 0.5*h, y + 0.5*k1);
        k3 = h * dydx(x0 + 0.5*h, y + 0.5*k2);
        k4 = h * dydx(x0 + h, y + k3);

        y += (k1 + 2*k2 + 2*k3 + k4)/6.0;
        x0 += h;
    }

    cout << "Answer at X = " << x_target << ", Y is : " << y << endl;
}
