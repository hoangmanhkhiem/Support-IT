#include<iostream>
#include<math.h>
using namespace std;
bool Kiemtrasonguyento(int n){
         if(n<2) return false; // Neu be hon 2 thi khong phai snt
        else if(n==2) return true; // 2 la snt
        else{
                for (int i = 2; i <= sqrt(n); i++){ // Xet snt toc do nhanh nhat tu 2 den can cua so can xet
                        if(n%i==0) return false; // Neu ma so do chia het cho 1 gia tri trong khoang thi so do khong phai snt
                }
        }
        return true;
}
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
                if(Kiemtrasonguyento(a[i])) continue;
                else{
                        cout << "Tat ca gia tri trong mang deu khong phai la so nguyen to";
                        return 0;
                }
        }
        cout << "Tat ca gia tri trong mang deu la so nguyen to";
}