#include<bits/stdc++.h>
using namespace std;
struct book{
    int ma_sach;
    double gia_tien;
    string ten_tac_gia, ten_sach;
};
double max(double a, double b){
    return a > b ? a : b;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("INP.TXT", "r", stdin);
	freopen("OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, c = 0;
    double mx = -1;
    string ten_tac_gia;
    cin >> n;
    book Book[n+3];
    // nhap theo thu tu: ma sach, ten sach, gia tien, tac gia.
    for (int i = 0; i < n; i++){
        cin >> Book[i].ma_sach >> Book[i].ten_sach >> Book[i].gia_tien >> Book[i].ten_tac_gia;
        mx = max(mx, Book[i].gia_tien);
    }
    cin >> ten_tac_gia;
    cout << "Nhung cuon sach cua thoa man la: " << endl;
    for (int i = 0; i < n; i++){
        if (ten_tac_gia == Book[i].ten_tac_gia){
            cout << "   " << Book[i].ten_sach << endl;
            c++;
        }
    }
    if (!c){
        cout << "-1" << endl;
    }
    cout << "Sach dat nhat la: " << endl;
    for (int i = 0; i < n; i++){
        if (mx == Book[i].gia_tien){
            cout << "   " << Book[i].ten_sach << endl;
        }
    }
    cout << "Sach gia hon 100 la: " << endl;
    for (int i = 0; i < n; i++){
        if (Book[i].gia_tien > 100){
            cout << "   " << Book[i].ten_sach << endl;
        }
    }
    return 0;
}
