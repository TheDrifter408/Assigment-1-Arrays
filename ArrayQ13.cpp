#include<iostream>
using namespace std;
void Random(int arr[][3],int row,int col, int start, int finish){
    int diff = finish - start;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j] = rand() % diff + start;
        }
    }
}
void Print(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int start = 30, finish = 50, diff = 0, row = 5, col = 3;
    int arr[row][3];
    Random(arr,row,col,start,finish);
    cout<<"The array: \n";
    Print(arr,row,col);
    
}