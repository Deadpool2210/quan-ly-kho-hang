// ====================================================================
// File : tienich.h
// Mo ta: Cac ham tien ich dung chung - nhap lieu an toan, xu ly chuoi,
//        xu ly ngay thang, va cac thuat toan tu cai dat (sap xep, tim kiem)
// ====================================================================
#ifndef TIENICH_H
#define TIENICH_H

// ---- Nhap lieu an toan ----
int    nhapSoNguyen(const char* thongBao);       // doc 1 so nguyen, lap lai neu sai
long   nhapSoNguyenDuong(const char* thongBao);   // bat buoc > 0
double nhapSoThuc(const char* thongBao);          // doc 1 so thuc >= 0
void   nhapChuoi(const char* thongBao, char* kq, int max); // doc ca dong co dau cach

// ---- Xu ly chuoi (tu cai, khong dung thu vien thuat toan) ----
void   chuanHoaChuoi(char* s);                    // bo dau cach thua dau/cuoi
void   doiChuThuong(const char* nguon, char* dich);// copy + chuyen ve chu thuong
bool   chuaChuoiCon(const char* chuoi, const char* mau); // tim chuoi con (khong phan biet hoa thuong)

// ---- Xu ly ngay dd/mm/yyyy ----
bool   ngayHopLe(const char* ngay);
bool   tachNgay(const char* ngay, int& d, int& m, int& y);

// ---- Thuat toan tu cai dat ----
// Sap xep mang chi so theo khoa (dung de in bao cao da tieu chi ma khong
// lam xao tron du lieu goc). tang = true: tang dan.
void   sapXepChiSo(int* idx, int n, const double* khoa, bool tang); // selection sort
int    timNhiPhanTheoMa(int* idxDaSapXep, int n, char (*dsMa)[15], const char* ma);

#endif
