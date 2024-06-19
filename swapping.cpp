#include <bits/stdc++.h>
using namespace std;

int swap(int &num1, int &num2){         // '&' to not send a copy of value, to send original value
num1=num1+num2; //num1: 1 num2: 2 (3)
num2=num1-num2; //num1: 3 num2: 2 (1) 
num1 = num1 - num2; // num1: 2 num2: 1
return num1, num2;
}

int main(){

int num1,num2;
cout << "Enter num1: ";
cin >> num1;
cout << "Enter num2: ";
cin >> num2;

cout << "Before swapping, " << "num1= " << num1 << " and num2= " << num2 << endl;
swap(num1,num2);
cout << "After swapping, " << "num1= " << num1 << " and num2= " << num2 << endl;

return 0;
}