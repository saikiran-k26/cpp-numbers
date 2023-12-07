#include<iostream>
using namespace std;
int main(){
    int num, temp, sum = 0;
    cin >> num;
    temp = num;
    while(temp!=0){
        sum = sum * 10 + temp%10;
        temp/=10;
    }
    (sum == num)? cout<< "Palindrome" : cout <<"Not palindrome";
    return 0;
}