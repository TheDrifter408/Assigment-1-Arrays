#include<iostream>
using namespace std;
void Random(int arr[], int size, int range){ // To fill array
    for(int i=0;i<size;i++){
        arr[i] = rand() % range + 1;
    }
}
void Print(int arr[],int size){ 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int Separate(int arr[],int size,int dupe[]){
    int j = 0;
    dupe[j] = arr[0];
    for(int i = 1;i<size;i++){
        if(dupe[j] == arr[i]){
            continue;
        }
        else{
            j++;
            dupe[j] = arr[i];
        }
    }
    return j;
}
void CountofDupe(int arr[], int size, int dupe[], int counts[]){
    int count = 0;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(dupe[i] == arr[j]){
                count++;
                counts[i] = count;
            }
            else{
                count = 0;
                continue;
            }    
        }
    }
}
int main(){
    int size = 10, range = 5, sizeofDuplicates = 0; // Range must be less than size or there will be less number of repeats
    int arr[size], NoDuplicates[size] = {0}, Counts[size] = {0};
    Random(arr,size,range);
    sort(arr,size);
    cout<<"The array: \n";
    Print(arr,size);
    sizeofDuplicates = Separate(arr,size,NoDuplicates) + 1;
    CountofDupe(arr,size,NoDuplicates,Counts);
    cout<<"\nThe number of repeats: \n";
    for(int i=0;i<sizeofDuplicates;i++){
        cout<<NoDuplicates[i]<<" occured: "<<Counts[i]<<" times\n";
    }
}