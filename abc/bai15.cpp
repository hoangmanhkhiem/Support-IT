#include<iostream>
#include<math.h>
using namespace std;
bool Kiemtra(int n){
        while(n){
                int check = n%10; // Lay chu so hang don vi de kiem tra co chia het cho 3 hay khong
                n /= 10; // Chia so can xet di 10 thi hang chuc se thanh hang don vi
                if(check%3==0) continue; // Neu chia het cho 3 thi tiep tuc xet cac chu so tiep theo
                else return false; // Neu khong thi tra ve sai
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
        for (int i = 0; i < n; i++)
        {
                printf("Nhap gia tri a[%d]= ",i);
                cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
                if(Kiemtra(a[i])) continue;
                else{
                        cout << "Sai";
                        return 0;
                } 
        }
        cout << "Dung";
}