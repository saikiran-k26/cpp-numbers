#include<iostream>
using namespace std;
int main(){
    int num,res=0;
    cin >> num;
    while(num!=0){
        int rem = num%10;
        res = res*10 + rem;
        num/=10;
    }
    cout << res;
    return 0;
}