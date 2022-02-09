#include<iostream>
using namespace std;
void Random(int arr[], int size, int range){
    for(int i=0;i<size;i++){
        arr[i] = rand() % range + 1;
    }
}
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[], int size){
    
}
int CheckforDups(int arr[],int size){

}
int main(){
    int size = 10, range = 5;
    int arr[size];
    Random(arr,size,range);
    cout<<"The array: \n";
    Print(arr,size);  
}