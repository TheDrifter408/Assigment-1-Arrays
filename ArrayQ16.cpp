#include<iostream>
using namespace std;
int main(){
    int A[4][3], B[3][2], C[4][2]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            A[i][j] = rand() % 20 + 1;
        }
    }    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            B[i][j] = rand() % 10 + 1;
        }
    }
    cout<<"The Matrix A: \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Matrix B: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            C[i][j] = 0;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    cout<<"The matrix C: \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}