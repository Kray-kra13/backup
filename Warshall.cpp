#inlcude<iostream>
#include<vector>
using namespace std;



int main(){
    int m,n; cin>>m>>n;
    int w[m][n],Q[m][n];
    for(int i=0;i<4;i++){
        for(int j=0;i<4;j++){
            cin>>w[i][j];
            if(w[i][j]==0){
                Q[i][j]=10000000;
            }else{
                Q[i][j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<w[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
