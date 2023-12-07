#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%2 == 0) cout << "Even\n";
    else if(n<0) cout << "Integer\n";
    else cout << "Odd\n";
    return 0;    
}