
#include <bits/stdc++.h>

using namespace std;

bool isInteger(double number) {
    return std::floor(number) == number;
}

int main(){
   
    double x, n;

    cin >> n;
    cin >> x;

    if (!isInteger(n)){
        cout << "Error" << endl;
        return 0;
    }

    double res = 1;
        
    for (int i = 1; i <= n; i++){
        if ( i % 2 == 0){
            res += pow(x, i);
        }
        else {
            res -= pow(x, i);
        }
    }

    cout << "S = " << res << endl;

    return 0;
}