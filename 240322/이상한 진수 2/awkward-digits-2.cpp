#include <iostream>
#include <cmath>

using namespace std;

string str;

int main() {
    cin >> str;
    int n = str.size();

    for(int i=0;i<n;i++){
        if(str[i] == '0'){
            str[i] = '1';
            break;
        }
    }
    int ans = 0;
    int idx = 0;
    for(int i=n-1;i>=0;i--){
        if(str[i] == '1') ans += pow(2, idx);
        idx++;
    }

    cout << ans;
}