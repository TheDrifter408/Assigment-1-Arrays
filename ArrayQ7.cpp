#include<iostream>
using namespace std;
void Sort(float arr[], int size){
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
void Print(float arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    float arr[11] = {4.4,5.5,1.2,6.7,8.6,1.1,9.0,5.9,3.6,2.5,0.1};
    Print(arr,11);
    cout<<endl;
    Sort(arr,11);
    Print(arr,11);
    cout<<endl;
    cout<<"1st maxmimum: "<<arr[10]<<", 2nd maximum: "<<arr[9];
    cout<<"\n1st minimum: "<<arr[0]<<", 2nd minimum: "<<arr[1];

    
}