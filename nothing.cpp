
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m ;
    int w[m][m],Q[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> w[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
           if (w[i][j] != 0) {
                Q[i][j] = w[i][j];
            } else {
                Q[i][j] = 9999;
            }
        }
    }
    for(int k=0;k<m;k++){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                Q[i][j]=min(Q[i][j],Q[i][k]+Q[k][j]);
            }
        }
    }
    cout<<endl;cout<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
           cout<<Q[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}




