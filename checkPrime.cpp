#include <iostream>
#include <math.h>
using namespace std;
// bool checkPrime(int n){ //using flag
//     bool res;
//     for(int i=2; i<n; i++){
//         cout << i << ","; 
//         if(n%i == 0){
//             res = false;
//             break;
//         } else{
//             res = true;
//         }
//     }
//     return res;
// }


bool checkPrime(long long int n){
    if( n<0 || n==0 || n==1) return false;
    for(int i=2; i<=sqrt(n);i+=2){ //most optimal, skipping iterations by 2 because w is the only prime
    // for(int i=2; i<=sqrt(n); i++){ //most optimal
    // for(int i=2; i<n; i++){ // worst case
    // for(int i=2; i<n/2; i++){ //avg case
        cout << i << ","; // to check no of iterations
        if(n%i == 0) return false;
    }
    return true;
}
 int main(){
    long long int n;
    cin >> n;
    (checkPrime(n) == true)? cout << "prime" : cout << "Non prime";
    return 0;
 }