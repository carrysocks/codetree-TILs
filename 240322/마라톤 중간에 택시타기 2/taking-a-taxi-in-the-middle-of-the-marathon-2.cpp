#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int n;
int p,q;
vector<pair<int,int>> check_point;
int dp[105][2];
int dist[105];

int get_distance(int start, int end){
    int sy = check_point[start].first, sx = check_point[start].second;
    int ey = check_point[end].first, ex = check_point[end].second;
    return abs(sy - ey) + abs(sx - ex);
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p >> q;
        check_point.push_back({p, q});
    }

    int total = 0;
    for(int i=0;i<n-1;i++){
        int dis = get_distance(i, i+1);
        dist[i] = dis;
        total += dis;
    }

    int mxSave = 0;
    for(int i=1;i<n-1;i++){
        int save = dist[i-1] + dist[i] - get_distance(i-1, i+1);  
        mxSave = max(mxSave, save);
    }

    cout << total - mxSave;
}