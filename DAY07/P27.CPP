/*Write a program to Recursive sum of digits.*/
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n%10 + sum(n/=10);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "The sum of the digits is : ";
    cout << sum(n);

    return 0;
}