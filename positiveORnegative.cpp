#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x<0) cout << "Negative \n";
    else if(x>0) cout << "Positive \n";
    else cout <<  "Zero" << endl;
    return 0;
}