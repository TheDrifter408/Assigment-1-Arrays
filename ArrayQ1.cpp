#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Input array size: ";cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i]; // Test case: 1 2 3 4 5 6 7
    }
    cout<<"Printing forwards: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nPrinting backwards: ";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}