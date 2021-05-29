#include <iostream>
using namespace std;

int swap(int n1, int n2) {
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    // a=a*b;//a=200 (10*20)    
    // b=a/b;//b=10 (200/20)    
    // a=a/b;
    cout<< n1 << n2;
    return 0;
}

int main() {
    int numberOne, NumberTwo;
    cin>>numberOne>>NumberTwo;
    swap(numberOne, NumberTwo);
    return 0;
}