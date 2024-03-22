#include <iostream>

using namespace std;

int board[21][21];

bool isRow(int i, int j, int t){
    if(j+5 >= 19) return false;
    for(int d=0;d<5;d++)
        if(board[i][j+d] != t) return false;
    return true;
}

bool isCol(int i, int j, int t){
    if(i+5 >= 19) return false;
    for(int d=0;d<5;d++)
        if(board[i+d][j] != t) return false;
    return true;
}

bool isDiagonal(int i, int j, int t){
    if(j+5 >= 19 || i+5 >= 19) return false;
    for(int d=0;d<5;d++)
        if(board[i+d][j+d] != t) return false;
    return true;
}

int main() {
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cin >> board[i][j];
        }
    }

    int ans = 0;
    int y = 0, x = 0;
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            if(isRow(i,j,1)){
                ans = 1;
                y = i, x = j + 2;
            }
            else if(isCol(i,j,1)){
                ans = 1;
                y = i + 2, x = j;
            }
            else if(isDiagonal(i,j,1)){
                ans = 1;
                y = i + 2, x = j + 2;
            }
            else if(isRow(i,j,2)){
                ans = 2;
                y = i, x = j + 2;
            }
            else if(isCol(i,j,2)){
                ans = 2;
                y = i + 2, x = j;
            }
            else if(isDiagonal(i,j,2)){
                ans = 2;
                y = i + 2, x = j + 2;
            }
        }
    }

    if(ans == 0) cout << ans;
    else{
        cout << ans << '\n';
        cout << y+1 << ' ' << x+1;
    }
}