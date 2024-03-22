#include <iostream>

using namespace std; 

int main() {
    string str;
    cin >> str;
    int n = str.size();

    int ans = 0;
    for(int i=0;i<n;i++){
        if(str[i] == ')') continue;
        for(int j=i+1;j<n;j++){
            if(str[j] == ')') ans++;
        }
    }

    cout << ans;
}