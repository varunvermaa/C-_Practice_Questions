#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the divisor:\n";
    cin >> a;
    cout << "Enter the divident:\n";
    cin >> b;
    c=a/b;
    cout << "The quotient is: " << c;
    c=a%b;
    cout << " and the remainder is: " << c;
    return 0;
}