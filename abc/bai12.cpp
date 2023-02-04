#include<iostream>
#include<math.h>
using namespace std;
bool Kiemtrasonguyento(int n){
        if(n<2) return false;
        else if(n==2) return true;
        else{
                for (int i = 3; i <= sqrt(n); i++){
                        if(n%i==0) return false;
                }
        }
        return true;
}
int main(){
        freopen("INP.TXT", "r", stdin);
        freopen("OUT.TXT", "w", stdout);
        int n;
        cout << "Nhap n=";
        cin >> n;
        int a[n];
        int count =0;
        for (int i = 0; i < n; i++)
        {
                printf("Nhap gia tri a[%d]= ",i);
                cin >> a[i];
                if(Kiemtrasonguyento(a[i])) count++;
        }
        cout << "Trong mang co " << count << " so nguyen to";

}