#include <iostream>
const double pi = 3.14159265358979323846;
using namespace std;

int areaCircle(int r) {
    return pi * r * r;
}

int main() {
    int r;
    cin>>r;
    cout<<areaCircle(r);
    return 0;
}