#include<iostream>
using namespace std;
int main(){
    int row = 0, col = 0, ind = 0, range = 0;
    cout<<"Input rows and columns: ";
    cin>>row>>col;
    cout<<"Input the range: ";cin>>range;
    int arr2D[row][col], arr1D[row*col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr2D[i][j] = rand() % range + 1;
        }
    }
    cout<<"The 2D array: \n";
    for(int i=0;i<row;i++){ //Printing the array
        for(int j=0;j<col;j++){
            cout<<arr2D[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){ // Converting
        for(int j=0;j<col;j++){
            arr1D[ind] = arr2D[i][j];
            ind++;  
        }
    }
    cout<<"The 1D array: \n";
    for(int i=0;i<ind;i++){
        cout<<arr1D[i]<<" ";
    }
    
}