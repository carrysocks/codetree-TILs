#include <iostream>

using namespace std;

int n, m;
int board[16][16];
char c;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> c;
            if(c == 'W') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }

    int ans = 0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            for(int k=i+1;k<n-1;k++){
                for(int l=j+1;l<m-1;l++){
                    if(board[0][0] != board[i][j] && 
                        board[i][j] != board[k][l] &&
                        board[k][l] != board[n-1][m-1]
                    ) ans++;
                }
            }
        }
    }

    cout << ans;
}