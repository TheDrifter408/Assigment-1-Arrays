#include<iostream>
using namespace std;
int main(){
    int row = 2, col = 3;
    cout<<"Input the row and columns: ";
    //cin>>row>>col;
    int A[row][col];
    int B[col][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ // Change to user input
            A[i][j] = rand() % 20;
        }
    }
    cout<<"\nThe matrix: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose: \n";
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){ 
            B[i][j] = A[j][i];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){ 
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

}