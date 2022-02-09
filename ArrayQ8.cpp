#include<iostream>
using namespace std;
void Print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size = 20, even = 0, odd = 0;
    int arr[20];
    for(int i=0;i<size;i++){
        arr[i] = rand() % 51;
    }
    cout<<"The Array: \n";
    Print(arr,size);
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    int EvenArray[even], OddArray[odd], even_ind = 0, odd_ind = 0;
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            EvenArray[even_ind] = arr[i];
            even_ind++;
            
        }
        else{
            OddArray[odd_ind] = arr[i];
            odd_ind++;
            
        }
    }
    cout<<"\nEven Array: \n";
    Print(EvenArray,even);
    cout<<"\nOdd Array: \n";
    Print(OddArray,odd);
    
}