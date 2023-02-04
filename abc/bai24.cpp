#include<iostream>
using namespace std;
int main(){
        // freopen("INP.TXT", "r", stdin);
        // freopen("OUT.TXT", "w", stdout);
        int n;
        cout << "Nhap n= ";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
                printf("Nhap gia tri a[%d]= ",i);
                cin >> a[i];
        }
        for (int i = 0; i < n-1; i++){
                if(a[i]*a[i+1]<0) continue; // am va duong xen ke khi tich cua chung be hon 0
                else{
                        cout << "Day khong phai la day co cac gia tri am duong xen ke";
                        return 0;
                }
        }
        cout << "Day la day co cac gia tri am duong xen ke";
}