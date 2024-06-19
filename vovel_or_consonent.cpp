#include <bits/stdc++.h>
using namespace std;

int main(){

char x;
cout << "Enter a character that you want to check vovel or consonent: ";
cin >> x;
if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
cout << x << " is a vovel.";
} 
else{
cout << x << " is a consonant.";}
return 0;
}