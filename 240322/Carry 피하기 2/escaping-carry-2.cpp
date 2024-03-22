#include <iostream>
#include <map>

using namespace std;

int n;
int arr[21];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    int mx = -1;
    bool isCarry = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                
                isCarry = false;
                int idx = 1;
                int d = 1;
                while(idx++ <= 5){
                    if((arr[i] % (d*10) / d + 
                        arr[j] % (d*10) / d + 
                        arr[k] % (d*10) / d )
                        > 10
                    ) isCarry = true;
                    d *= 10;
                }

                if(!isCarry) mx = max(mx, arr[i] + arr[j] + arr[k]);
            }
        }
    }

    cout << mx;
}