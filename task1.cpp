#include <iostream>
using namespace std;    
int main () {
int n;
string ones []={"","one","two","three","four","five","six","seven","eight","nine"};
string teens []={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens []={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};   
int hundred,thousand,thousands,tenThousand,hundredThousand,teenThousand;
string result=" ";
cout<<"Enter an amount in figures: ";
cin>>n;
if (n>999999) {
   cout<<"Out of range"<<endl;
    return 0;
}
if (n<-999999) {
   cout<<"Out of range"<<endl;
    return 0;
}
if (n == 0) {
    cout << "In words: zero";
    return 0;
}
while (n!=0) {
cout<<"In words: ";
if (n<0) {
    n=-n;
    cout<<"negative ";
}
if (n>=100000 && n<=999999) {
    int hundredThousand=n/100000;
    cout<<ones[hundredThousand]<<" "<<" hundred ";
    n=n%100000;
}
  
if (n>=10000 && n<=99999) {
int thousands = n / 1000;   

    if (thousands >= 20 && thousands<=99) {
        cout << tens[thousands / 10] << " " << ones[thousands % 10] << " thousand ";
    }
    else if (thousands >= 10 && thousands<=19 ) {
        cout << teens[thousands - 10] <<" "<< " thousand ";
    }
    else if (thousands > 0) {
        cout << ones[thousands] <<" "<< " thousand ";
    }

    n = n % 1000; 
}
  
if (n>=1000 && n<=9999) {
    int thousand=n/1000;
    cout<<ones[thousand]<<" "<<" thousand ";
    n=n%1000;

}
if (n>=100 && n<=999) {
    int hundred=n/100;
    cout<<ones[hundred]<<" "<<" hundred ";
    n=n%100;
}
if (n>=20 && n<=99) {
    int ten=n/10;
    cout<<tens[ten]<<" ";
    n=n%10;
}
if (n>=10 && n<=19) {
    cout<<teens[n-10]<<" ";
    n=0;
}
if (n>0 && n<=9) {
    cout<<ones[n]<<" ";
    n=0;
}
}

return 0;
}