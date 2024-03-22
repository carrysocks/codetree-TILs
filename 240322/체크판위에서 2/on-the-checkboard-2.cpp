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
    int color1 = board[0][0];
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(board[i][j] != (1 - color1)) continue;

            for(int k=i+1;k<n-1;k++){
                for(int l=j+1;l<n-1;l++){
                    if(board[k][l] == color1) ans++;
                }
            }
        }
    }

    cout << ans;
}