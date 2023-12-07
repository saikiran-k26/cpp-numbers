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
int getArmstrong(int num, int len){
    int sum = 0, temp;
    temp = num;
    while(temp){
        sum = sum + pow(temp%10, len);
        temp/=10;
    }
    return sum;
}
int main(){
    int low,high;
    cin >> low >> high;
    for(int i=low; i<=high; i++){
        int len = order(i);
        int res = getArmstrong(i, len);
        if(res == i) cout << i << endl;
    }
    return 0;
}