
#include <iostream>

using namespace std;

struct clr{ // mã lớp học, tên lớp học, tổng số giờ học, học phí, số học viên.
    int ma_lop_hoc, tong_gio_hoc, hoc_phi, so_hoc_vien;
    string ten_lop_hoc;
};

int max(int a, int b){
    return  (a > b) ? a : b;
}

int tong_so_gio_hoc(clr *lh, int so_lop_hoc){
    int res = 0;
    for (int i = 0; i < so_lop_hoc; i++){
        res += lh[i].tong_gio_hoc;
    }
    return res;
}

int tong_so_hoc_vien(clr *lh, int so_lop_hoc){
    int res = 0;
    for (int i = 0; i < so_lop_hoc; i++){
        res += lh[i].so_hoc_vien;
    }
    return res;
}

void sap_xep_lop_hoc_theo_hoc_phi(clr *lh, int so_lop_hoc){
    clr temp;
    for (int i = 0; i < so_lop_hoc - 1; i++){
        for (int j = i + 1; j < so_lop_hoc; j++){
            if (lh[i].hoc_phi <= lh[j].hoc_phi){
                temp = lh[i];
                lh[i] = lh[j];
                lh[j] = temp;
            }
        }
    }
}

int tong_doanh_thu(clr *lh, int so_lop_hoc){
    int res = 0;
    for (int i = 0; i < so_lop_hoc; i++){
        res += lh[i].hoc_phi;
    }
    return res;
}

void in_ds_cac_lop_co_so_hoc_vien_nhieu_nhat(clr *lh, int so_lop_hoc){
    int max_sv = -1;
    for (int i = 0; i < so_lop_hoc; i++){
        max_sv = max(max_sv, lh[i].so_hoc_vien);
    }
    cout << "Danh sach cac lop hoc co so sinh vien nhieu nhat la: " << endl;
    for (int i = 0; i < so_lop_hoc; i++){
        if (lh[i].so_hoc_vien == max_sv) cout << "  " << lh[i].ten_lop_hoc << endl;
    }
    cout << endl;
}

void in_ds_cac_lop_co_so_hoc_vien_lon_hon_10(clr *lh, int so_lop_hoc){
    cout << "Danh sach cac lop hoc co so sinh vien lon hon 10 la: " << endl;
    for (int i = 0; i < so_lop_hoc; i++){
        if (lh[i].so_hoc_vien > 10) cout << "   " << lh[i].so_hoc_vien << endl;
    }
    cout << endl;
}

int main(){
    freopen("INP.TXT", "r", stdin);
    freopen("OUT.TXT", "w", stdout);
    // nhap thong tin cac lop hoc.
    int so_lop_hoc;
    cout << "Nhap so lop hoc";
    cin >> so_lop_hoc;
    clr lh[so_lop_hoc];
    cout << endl << "Nhap du lieu cua tung lop hoc: " << endl;
    // chu y thu tu nhap phai dung.
    for (int i = 0; i < so_lop_hoc; i++){
        cin >> lh[i].ma_lop_hoc >> lh[i].ten_lop_hoc >> lh[i].tong_gio_hoc >> lh[i].hoc_phi >> lh[i].so_hoc_vien;
    }
    //
    cout << endl << "Tong so gio hoc cua tat ca cac lop hoc la: " << tong_so_gio_hoc(lh, so_lop_hoc) << endl;
    cout << "Tong so hoc vien theo hoc cac lop hoc la: " << tong_so_hoc_vien(lh, so_lop_hoc) << endl;
    // sap xep lop hoc theo danh sach giam dan
    sap_xep_lop_hoc_theo_hoc_phi(lh, so_lop_hoc);
    //
    cout << "Tong doanh thu: " << tong_doanh_thu(lh, so_lop_hoc) << endl;
    //
    in_ds_cac_lop_co_so_hoc_vien_nhieu_nhat(lh, so_lop_hoc);
    in_ds_cac_lop_co_so_hoc_vien_lon_hon_10(lh, so_lop_hoc);
    return  0;
}
