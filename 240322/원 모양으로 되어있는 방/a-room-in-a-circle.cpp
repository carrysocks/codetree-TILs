#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[1005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            int dis = (j + n - i) % n;
            sum += dis * arr[j];
        }

        mn = min(mn, sum);
    }

    cout << mn;
}