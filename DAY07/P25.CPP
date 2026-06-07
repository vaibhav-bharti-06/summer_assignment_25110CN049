/*Write a program to Recursive factorial.*/
#include <iostream>
using namespace std;
int fact(int a){
    if(a==0 || a==1) return 1;
    return a*fact(a-1);
}

int main() {
    int n;
    cout << "Enter the number to find the factorial : ";
    cin >> n;
    cout << "The answer is : " << fact(n);

    return 0;
}