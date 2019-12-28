#include<iostream>
using namespace std;
int main(){
    int i,j,mat[20][20],transpose[20][20],row,col;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>col;
    cout<<"Enter elements of first matrix : "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            transpose[i][j] = mat[j][i];
        }
    }
    cout<<"The transpose of the above matrix is :"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
