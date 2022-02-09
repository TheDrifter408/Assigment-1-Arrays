#include<iostream>
using namespace std;
bool Ascendcheck(int arr[]){
    bool sorted = true;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(arr[j]<arr[j+1]){
                continue;
            }
            else{
                sorted = false;
                break;
            }
        }
    }
    return sorted;
}
bool Descendcheck(int arr[]){
    bool sorted = true;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(arr[j]>arr[j+1]){
                continue;
            }
            else{
                sorted = false;
                break;
            }
        }
    }
    return sorted;
}
int main(){
    int arr[10];
    cout<<"Enter the values: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];  // Ascending:  1 2 3 4 5 6 7 8 9 10
                      // Unsorted:   3 4 6 7 1 6 9 2 5 8
    }                 // Descending: 10 9 8 7 6 5 4 3 2 1
    if(Ascendcheck(arr) == true){
        cout<<"Sorted in ascending order";
    }
    else if(Descendcheck(arr) == true){
        cout<<"Sorted in descending order";
    }
    else{
        cout<<"Not sorted";
    }

}