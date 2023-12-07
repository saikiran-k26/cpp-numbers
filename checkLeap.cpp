#include <iostream>
using namespace std;
int main(){
    int year;
    cin >> year;
    year % 400 == 0 || year % 4 == 0 && year % 100 != 0 ? cout << "Leap" : cout << "Normal";
    return 0;
}