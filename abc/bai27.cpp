#include<iostream>
using namespace std;
void Xuatmang(int a,int b[]){
        for (int i = 0; i < a; i++)
        {
                cout << b[i] << " ";
        }
}
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
        int so_chan[n],so_le[n]; // Khai bao 2 mang so chan so le
        int so_sochan=0,so_sole=0; // Khai bao so luong so chan va so le
        for (int i = 0; i < n; i++){
                if(a[i]%2) so_le[so_sole++] = a[i]; // Neu la so le thi mang so le tai vi tri so_sole la a[i], sau do tang gia tri so_sole len 1
                else so_chan[so_sochan++] = a[i]; // So chan tuong tu
        }
        cout << "Mang gia tri chan la: \n";
        Xuatmang(so_sochan,so_chan);
        cout << "\nMang gia tri le la: \n";
        Xuatmang(so_sole,so_le);
}