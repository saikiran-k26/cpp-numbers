#include<iostream>
using namespace std;
int getSum(int x){
    int sum = 0;

    //method 1
    // for(int i=0; i<=x; i++){
    //     sum += i;
    // } 

    //method 2
    sum = x*(x+1)/2;
    return sum;
}

int main(){
    int low,high;
    cin >> low >> high;
    cout << getSum(high) - getSum(low) << endl;
    return 0;
}

