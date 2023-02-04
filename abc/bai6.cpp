#include<iostream>
#include<math.h>
using namespace std;
int main(){
        // freopen("INP.TXT", "r", stdin);
        // freopen("OUT.TXT", "w", stdout);
        int n; // Khai bao so luong phan tu
        cout << "Nhap n: ";
        cin >> n;
        int a[n]; // Khai bao mang gia tri
        int count = 0,sum=0; // Dem so luong so le, tong so le
        for (int i = 0; i < n; i++){ // Nhap gia tri cho mang
                printf("Nhap gia tri a[%d] = ",i);
                cin >> a[i];
                if(a[i]&1){
                        sum += a[i];
                        count++; // Neu a[i] la so le thi dem cong them 1
                }
        }
        if(count) cout << "Trung binh cong cac so le trong mang bang " << sum/count;
        else cout << "Khong co so le trong mang";
        
}