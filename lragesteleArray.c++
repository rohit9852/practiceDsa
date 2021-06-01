#include <iostream>
using namespace std;

int largest(int array[], int n) {
    int max = array[0];
    for(int i = 1; i<n; i++) {
        if(max<array[i]) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<largest(arr, n);
    return 0;
}