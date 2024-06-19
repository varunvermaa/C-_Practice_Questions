#include <bits/stdc++.h>
using namespace std;
// 4x^2+5x-2=0
int main(){
    int x,y,a,b,c;
    cout << "Enter the quadratic equation in the form of _x^2+_x+_=0.";
    cin >> a >> b >> c;
    x=(-b+(((b*b)-4*a*c)^(1/2)))/2*a;
    y=(-b-(((b*b)-4*a*c)^(1/2)))/2*a;
    cout << "The roots are " << x << " and " << y << " .";

    return 0;
}