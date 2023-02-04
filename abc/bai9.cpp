#include<iostream>
#include<math.h>
using namespace std;
bool KiemtraSochinhphuong(int n){
        if(n==sqrt(n)*sqrt(n)) return true;
        return false;
}
int main(){
        freopen("INP.TXT", "r", stdin);
        freopen("OUT.TXT", "w", stdout);
        int n;
        cout << "Nhap n=";
        cin >> n;
        int a[n];
        int sum =0;
        for (int i = 0; i < n; i++)
        {
                printf("Nhap gia tri a[%d]= ",i);
                cin >> a[i];
                if(KiemtraSochinhphuong(a[i])) sum += a[i];
        }
        cout << "Tong cac so chinh phuong co trong mang bang " << sum ;
}