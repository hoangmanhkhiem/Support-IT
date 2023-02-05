
#include<bits/stdc++.h>

using namespace std;

int arr[105][105];

long long min(long a, long b){
    return (a < b) ? a : b;
}


long long s(long long temp_1, long long temp_2, long long n){
    long long res = 0,
        x = temp_1 - 1,
        y = temp_2 - 1;
    while(x >= 1 && x <= n && y <= n && y >= 1){
        res += arr[x][y];
        x--;
        y--;
    }
    while (temp_1 >= 1 && temp_2 <= n && temp_1 <= n && temp_2 >= 1)
    {
        res += arr[temp_1][temp_2];
        temp_1++;
        temp_2++;
    }
    return res;
}

long long mi(long long temp_1, long long temp_2, long long n){
    long long res = 999999999999,
        x = temp_1 - 1,
        y = temp_2 + 1;
    while(x >= 1 && x <= n && y <= n && y >= 1){
        res = min(res, arr[x][y]);
        x++;
        y--;
    }
    while(temp_1 >= 1 && temp_2 <= n && temp_1 <= n && temp_2 >= 1){
        res = min(res, arr[temp_1][temp_2]);
        temp_1--;
        temp_2++;
    }
    
    return res;
}

void solve(long long temp_1, long long temp_2, long long n){
    long long sum = s(temp_1, temp_2, n);
    long long min = mi(temp_1, temp_2, n);
    cout << sum << " " << min << endl;
}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("INP.TXT", "r", stdin);
	freopen("OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long n,
        q,
        temp_1,
        temp_2;

    cin >> n >> q;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n ; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= q; i++){
        cin >> temp_1 >> temp_2;
        solve(temp_1, temp_2, n);
    }

    return 0;
}
