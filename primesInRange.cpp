#include<iostream>
#include<math.h>
using namespace std;
bool checkPrime(long long int n){
    if(n < 0 || n == 0 || n == 1) return false;
    for(long long int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    long long int low, high;
    cin >> low >> high;
    for(int i=low; i<=high; i++){
        if(checkPrime(i)) cout << i << ",";
    }
    return 0;
}