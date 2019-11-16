#include <iostream>
#include <cmath>

using namespace std;

double f(double x){
    return pow(x, 3);
    //Edit this to include the expression to be integrated
}


int main(){
    double x1, x2, eps;
    cout << "\nEnter Lower Bound of Integration : ";
    cin >> x1;
    cout << endl;
    cout << "\nEnter Upper Bound of Integration : ";
    cin >> x2;
    cout << endl;
    cout << "\nEnter eps (precision) : ";
    cin >> eps;
    cout << endl;
    double h = (x2 - x1);
    double s0 = 0, s1 = (f(x1) +f(x2))/2;
    double I0 = 0, I1 = h*s1;
    int i = 1;
    double x;
    long itr = 0;
    while(abs((I1 - I0)/I1) > eps){
        s0 = s1;
        x = x1 + (h/2.0);
        for(int j = 0;j < i;j++){
            s1 += f(x);
            x += h;
            itr += 1;
        }
        i = 2*i;
        h = h / 2;
        I0 = I1;
        I1 = h*s1;
        itr += 1;
    }
    cout << "Answer : " << I1 << endl;
    cout << "It took total " << itr <<" iterations." << endl;
}
