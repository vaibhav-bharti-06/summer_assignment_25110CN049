/*Write a program to Recursive Fibonacci.*/
#include <iostream>
using namespace std;
int fibo(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    return fibo(a-1)+fibo(a-2);
}

int main() {
    int n;
    cout << "Enter the no.of terms of the series : ";
    cin >> n;
    cout << "The series upto " << n << " terms is : ";
    for(int i=0 ; i<=n;i++){
        cout << fibo(i) << " ";
    }
    return 0;
}