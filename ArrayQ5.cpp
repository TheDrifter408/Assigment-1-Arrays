#include<iostream>
using namespace std;
void Sort(float arr[],int size, bool ascend = false){
    // Descending
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]<arr[j+1]){
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //Ascending
    if(ascend == true){
      for(int i=0;i<size;i++){
          for(int j=0;j<size-1;j++){
              if(arr[j]>arr[j+1]){
                  float temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
            }
        }
      }   
    }
}
void Print(float arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    float arr1[10], arr2[10];
    for(int i=0;i<10;i++){
        arr1[i] = (float)(rand() % 30)/1.1;
        arr2[i] = (float)(rand() % 40)/1.1;
    }
    cout<<"Before sorting: ";
    cout<<"\nArray 1: ";Print(arr1, 10);
    cout<<"\nArray 2: ";Print(arr2, 10);
    Sort(arr1,10);
    cout<<"\nAfter sorting: ";
    cout<<"\nArray 1: ";Print(arr1,10);
    Sort(arr2,10,true);
    cout<<"\nArray 2: ";Print(arr2,10);
    



}