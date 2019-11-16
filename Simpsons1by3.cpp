#include <iostream>
#include <cmath>

using namespace std;

double f(double x){
    return 2*x;
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
    cout << "\nEnter eps : ";
    cin >> eps;
    cout << endl;
    double h = (x2 - x1)/2.0;
    int i = 2;
    double s2 = 0, s1 = (f(x1) +f(x2))/2, s4 = f(x1 + h);
    double I0 = 0, I1 = (h/3)*(s1 + (4*s4));
    double x;
    long itr = 0;
    while(abs((I1 - I0)/I1) > eps){
        s2 = s2 + s4;
        s4 = 0;
        x = x1 + (h/2.0);

        for(int j = 0;j < i;j++){
            s4 += f(x);
            x += h;
            itr += 1;
        }

        i = 2*i;
        h = h / 2;
        I0 = I1;
        I1 = (h/3)*(s1 + (2*s2) + (4*s4));
        itr += 1;
    }
    cout << "Answer : " << I1 << endl;
    cout << "It took total " << itr <<" iterations." << endl;
}
