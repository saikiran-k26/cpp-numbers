#include<iostream>
using namespace std;
int main(){
    int a,b,max;
    cin >> a >> b;
    a>b? max =a : max=b;
    do{
        if(max%a==0 && max%b==0){
            cout << "LCM is " << max << endl;
            break;
        }
    }while(max++);
    return 0;
}