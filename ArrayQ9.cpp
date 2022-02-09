#include<iostream>
using namespace std;
void Print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size = 0;
    cout<<"Input size of the array: ";cin>>size;
    int arr[size];
    int fib1 = 0, fib2 = 1, result = 0;
    cout<<"The Fibonacci sequence: ";
    cout<<fib1<<" "<<fib2<<" "; 
    for(int i=0;i<size;i++){
        result = fib1 + fib2;
        fib1 = fib2;
        fib2 = result;
        arr[i] = result;
    }
    Print(arr,size-2);
}