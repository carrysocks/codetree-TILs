#include <iostream>

using namespace std;

int n;
int arr[101];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] < arr[j] && arr[j] < arr[k]) ans++;
            }
        }
    }

    cout << ans;
}