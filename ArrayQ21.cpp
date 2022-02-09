#include<iostream>
using namespace std;
void Random(int arr[][5],int range){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = rand() % range + 1;
        }
    }
}
void Print2D(int arr[][5]){  
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]<10){
                cout<<" "<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
void Print1D(int arr[]){
    for(int i=0;i<2;i++){
        cout<<arr[i]<<" ";
    }
}
int* sumDiagonals(int arr[][5],int sum[2]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i == j){
                sum[0] += arr[i][j];
            }
            if(i + j == 4){
                sum[1] += arr[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int Arr2D[5][5] = {0}, range = 0, sum[2] = {0}, sum1 = 0, sum2 = 0;
    cout<<"Input the range: ";cin>>range;
    Random(Arr2D,range);
    cout<<"The array: \n";
    Print2D(Arr2D);
    sumDiagonals(Arr2D,sum);
    cout<<"The sum for 1st and 2nd diagonals: ";
    Print1D(sum);
}