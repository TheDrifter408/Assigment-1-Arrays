#include<iostream>
using namespace std;
int arr[20];
int DecToBinary(int num, int arr[]){
    int i = 0;
    while( num != 0){
        arr[i] = num % 2;
        i++;
        num /= 2;
    }
    return i;
}
int Convert(int arr[], int size){
    int result = 0;
    for(int i=size-1;i>=0;i--){
        result = result*10 + arr[i];
    }
    return result;
}
int main(){
    int input = 0, result = 0, size = 0;
    cout<<"Input the number to be converted: ";cin>>input;
    size = DecToBinary(input,arr);
    result = Convert(arr,size);
    cout<<"The result: "<<result;

}