#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x_target;
    int n;
    cout << "Enter the number of X & Y pairs that are the input" << endl;
    cout << "\nEnter N : ";
    cin >> n;
    cout << endl;
    double x[n];
    double y[n];
    cout << "Enter Xi : " << endl;
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    cout << "\nEnter Yi : " << endl;
    for (int i = 0; i < n; i++){
        cin >> y[i];
    }
    cout << "\nEnter X whose value is to be found : ";
    cin >> x_target;

    double prod, Lpol = 0;

    for (int i = 0;i < n;i++){
        prod = 1;
        for (int j = 0;j <= n;j++){
            if (j != i){
                prod *= (x_target - x[j])/(x[i] - x[j]);
            }
        }
        Lpol += (prod * y[i]);
    }

    cout << "\n\nX : " << x_target << endl;
    cout << "Interpolated Value : " << Lpol << endl;
    return 0;
}
