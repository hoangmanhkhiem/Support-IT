#include<iostream>
#include<math.h>
using namespace std;
int main(){
        // freopen("INP.TXT", "r", stdin);
        // freopen("OUT.TXT", "w", stdout);
        int n;
        cout << "Nhap n=";
        cin >> n;
        int a[n];
        int sum =0;
        for (int i = 0; i < n; i++){
                printf("Nhap gia tri a[%d]= ",i);
                cin >> a[i];
        }
        for (int i = 0; i < n; i++){
                if(a[i]>0&&a[i]%2) continue; // Duong lon hon 0 va le lay du cua 2 la 1
                else{
                        cout << "Tat ca gia tri trong mang deu khong phai la so duong le";
                        return 0;
                }
        }
        cout << "Tat ca gia tri trong mang deu la so duong le";
}