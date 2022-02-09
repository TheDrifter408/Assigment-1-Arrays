#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int size = 100, sum=0, largest, smallest;
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i] = rand() % 100 + 1;
    }
    for(int i=0;i<size;i++){
        if( i== 50) cout<<endl;
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    largest = arr[0];
    cout<<"\nAverage: "<< sum/100;
    for(int i=1;i<size;i++){ // for largest
        if(largest < arr[i]){
            largest = arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"\nLargest: "<<largest;
    smallest = arr[0];
    for(int i=1;i<size;i++){ // for smallest
        if(smallest < arr[i]){
            continue;
        }
        else{
            smallest = arr[i];
        }
    }
    cout<<"\nSmallest: "<<smallest;
    
}