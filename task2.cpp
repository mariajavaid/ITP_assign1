#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main () {
int numeratorA, denominatorA;
int numeratorB, denominatorB;
char operation;
cout<<"Enter numerator and denominator of first fraction: ";
cin>>numeratorA;
cin>>denominatorA;
cout<<"Enter numerator and denominator of second fraction: ";
cin>>numeratorB;
cin>>denominatorB;  

if (denominatorA==0 || denominatorB==0) {
    cout<<"Error: Division by zero is not allowed."<<endl;
    return 0;
}
cout<<"Choose an operation (+, -, *, /): ";
cin>>operation;
int resultNum, resultDen;
switch (operation) {
    case '+':
        resultNum=(numeratorA*denominatorB + numeratorB*denominatorA);
        resultDen=(denominatorA*denominatorB);
        break;
    case '-':
        resultNum=(numeratorA*denominatorB - numeratorB*denominatorA);
        resultDen=(denominatorA*denominatorB);
        break;
    case '*':
        resultNum=(numeratorA*numeratorB);
        resultDen=(denominatorA*denominatorB);
        break;
    case '/':
        if (numeratorB==0) {
            cout<<"Error: Division by zero is not allowed."<<endl;
            return 0;
        }
        resultNum=(numeratorA*denominatorB);
        resultDen=(denominatorA*numeratorB);
        break;
    default:
        cout<<"Error: Invalid operation."<<endl;
        return 0;
}   
int gcdValue=gcd(abs(resultNum), abs(resultDen));
resultNum=resultNum/gcdValue;
resultDen=resultDen/gcdValue;
cout<<"Result: "<<resultNum<<"/"<<resultDen<<endl;

return 0;
}