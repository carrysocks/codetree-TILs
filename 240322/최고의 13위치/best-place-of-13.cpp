#include <iostream>

using namespace std;

int board[21][21];
int n;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            ans = max(ans, board[i][j] + board[i][j+1] + board[i][j+2]);
        }
    }

    cout << ans;
}