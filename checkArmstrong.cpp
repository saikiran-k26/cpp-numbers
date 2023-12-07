#include<iostream>
#include<math.h>
using namespace std;
int len(int num){
    int order = 0;
    while(num){
        order++;
        num/=10;
    }
    return order;
}
bool checkArmstrong(int num, int order){
    int temp, sum = 0;
    temp = num;
    while(temp){
        sum = sum + pow(temp%10, order);
        temp/=10;
    }
    return sum==num;
}
int main(){
    int num;
    cin >> num;
    int order = len(num);
    checkArmstrong(num, order)? cout << "Armstrong" : cout << "Not armstrong";
    return 0;
}