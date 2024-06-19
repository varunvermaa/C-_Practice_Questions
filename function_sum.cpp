#include <bits/stdc++.h>
using namespace std;

int printsum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int num1,num2,num3;
    cin >> num1 >> num2; 
    num3 = printsum(num1,num2);
    cout << num3 << endl;
    return 0;
}