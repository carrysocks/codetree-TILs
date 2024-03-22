#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int arr[101];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += abs(i - j) * arr[j];
        }

        mn = min(mn, sum);
    }

    cout << mn;
}