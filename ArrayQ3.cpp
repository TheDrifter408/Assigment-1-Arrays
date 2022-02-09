#include<iostream>
using namespace std;

int main(){
    int start = 0, finish = 0 , diff = 0, arr[25];
    cout<<"Start of array: ";cin>>start;
    cout<<"End of the array: ";cin>>finish;
    diff = finish - start;
    for(int i=0;i<25;i++){
        arr[i] = rand() % diff + start;
    }
    for(int i=0;i<25;i++){
        cout<<arr[i]<<" ";
    }
}