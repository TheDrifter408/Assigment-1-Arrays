#include<iostream>
using namespace std;
bool CheckPrime(int num){
    bool isPrime = true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isPrime = false;
        }
    }
    return isPrime;
}

int main(){
   int count = 0, row = 0, col = 0, range = 0;
   cout<<"Input the number of rows and columns: ";
   cin>>row>>col;
   cout<<"Random number range: ";cin>>range;
   int arr[row][col];
   for(int i=0;i<row;i++){ // getting numbers in the array
       for(int j=0;j<col;j++){
           arr[i][j] = rand() % range + 1;
       }
   }
   for(int i=0;i<row;i++){ // Printing the array
       for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           if(CheckPrime(arr[i][j])){
               count++;
           }
       }
   }
   cout<<"\nThe of prime numbers in the array: "<<count;
}