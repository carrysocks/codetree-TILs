#include <iostream>
#include <cmath>

using namespace std;

string str;

int main() {
    cin >> str;
    bool isZero = false;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(str[i] == '0'){
            str[i] = '1';
            isZero = true;
            break;
        }
    }

    if(!isZero) str[n-1] = '0';

    int ans = 0, idx = 0;
    for(int i=n-1;i>=0;i--){
        if(str[i] == '1') ans += pow(2, idx);
        idx++;
    }

    cout << ans;
}