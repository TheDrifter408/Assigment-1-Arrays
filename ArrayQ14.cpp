#include<iostream>
using namespace std;
void subtract(int arr1[][3], int arr2[][3], int arr3[][3]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            arr3[i][j] = arr2[i][j] - arr1[i][j];
        }
    }
}
void Print(int arr[][3]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Random(int arr[][3], int start, int finish){
    int diff = finish - start;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = rand() % diff + start;
        }
    }
}
int main(){
    int A[4][3], B[4][3], C[4][3];
    Random(A,3,30);
    Random(B,2,28);
    cout<<"Array A: ";
    Print(A);
    cout<<" Array B: ";
    Print(B);
    subtract(A,B,C);
    cout<<"\nThe result: ";
    Print(C);
    
}