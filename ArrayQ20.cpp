#include<iostream>
using namespace std;
void Random(int arr[], int size, int range){
    for(int i=0;i<size;i++){
        arr[i] = rand() % range + 1;
    }
}
void Print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
}
int main(){
    int row = 0, col = 0, ind = 0, range = 0;
    cout<<"Input the number of rows and columns: ";
    cin>>row>>col;
    cout<<"Input the range of array: ";
    cin>>range;
    int arr2D[row][col], arr1D[row*col];
    Random(arr1D,row*col,range);
    cout<<"The 1D array: \n";
    Print(arr1D,row*col);  
    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++){
            arr2D[i][j] = arr1D[ind];
            ind++; 
        }
    }
    cout<<"\nThe 2D array: \n";
    for(int i=0;i<row;i++){ // Printing 
        for(int j=0;j<col;j++){
            cout<<arr2D[i][j]<<" "; 
        }
        cout<<endl;
    }
}