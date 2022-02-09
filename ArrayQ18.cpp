#include<iostream>
using namespace std;
void RowAverage(double arr[][10], int row, int col, double arr2[]){
    double sum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr2[i] += arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        arr2[i] = arr2[i]/10;
    }
}
int main(){
    double Arr[15][10] = {0}, average[15] = {0}; int range = 0;
    cout<<"The range of the array: ";cin>>range;
    for(int i=0;i<15;i++){ // Filling with random numbers
        for(int j=0;j<10;j++){
            Arr[i][j] = rand() % range + 1;
        }
    }
    cout<<"The array: \n";
    for(int i=0;i<15;i++){ // Printing
        for(int j=0;j<10;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    RowAverage(Arr,15,10,average);
    cout<<"The Average: \n";
    for(int i=0;i<15;i++){ // Printing
        for(int j=0;j<10;j++){
            if(Arr[i][j]<10){
                cout<<" "<<Arr[i][j];
            }
            else{
                cout<<Arr[i][j];
            }
            if(j == 9){
                cout<<" = ";
            }
            else{
                cout<<" + ";
            }
        }
        cout<<average[i];
        cout<<endl;
    }
       
}
