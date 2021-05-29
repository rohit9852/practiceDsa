#include <iostream>
using namespace std;

string armstrong(int n) {
    int number = n;
    int sum = 0;
     while(n>0) {
        int rem = n%10;
        sum=sum+rem*rem*rem;
        n/=10;
     }
    if(sum == number) {
        
        return "armstrong";
    } else {
        return "not armstrong";
    }
}

int main() {
    int number;
    cin>>number;
    cout<<armstrong(number);
    return 0;
}