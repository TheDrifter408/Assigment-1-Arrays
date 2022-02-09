#include<iostream>
using namespace std;

int main(){
    int size = 0;
    cout<<"Size of Array: ";cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i] = rand() % 100 + 1;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int search = 0;
    cout<<"\nValue to search: ";cin>>search;
    for(int i=0;i<size;i++){
        if(arr[i] == search){
            cout<< i <<" ";
            continue;
        }
    }
}