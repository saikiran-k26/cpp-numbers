#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cin  >> a >> b >> c;
    int res = max(a, max(b,c));
    // int res = max(a,b,c);
    // cout << res << endl;
    a>b? a>c? cout <<  a: cout << c : cout << b;
    return 0;
}