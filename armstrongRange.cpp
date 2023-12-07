#include<iostream>
#include<math.h>
using namespace std;
int order(int num){
    int len = 0;
    while(num){
        len++;
        num/=10;
    }
    return len;
}
void getArmstrong(int low, int high){
    int sum,temp;
    for(int num = low; num <= high; num++){
        int len = order(num);
        temp = num;
        sum = 0;
        while(temp){
            sum = sum +  pow(temp%10, len);
            temp/=10;
        }
        if(sum == num) cout << num << " ";
    }
}
int main(){
    int low,high;
    cin >> low >> high;
    getArmstrong(low, high);
    return 0;
}