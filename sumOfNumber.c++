#include <iostream>
using namespace std;

int sumOfNumber(int n) {
    int sum = 0;
    while(n>0) {
        int rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

int main() {
    int number;
    cin>>number;
    cout<<sumOfNumber(number);
    return 0;
}