// ====================================================================
// Project: Quan ly kho hang (Chu de 3 - Ky thuat lap trinh 20252)
// File   : khohang.h
// Mo ta  : Khai bao cau truc du lieu va prototype cac ham xu ly chinh
// ====================================================================
#ifndef KHOHANG_H
#define KHOHANG_H

// Do bai yeu cau khong dung cac container/thuat toan co san (vector, sort,
// search ...) nen toan bo cau truc du lieu, sap xep, tim kiem deu tu cai dat.

const int MAX_CHUOI   = 60;   // do dai toi da cua chuoi ten/loai...
const int MAX_MA      = 15;   // do dai ma san pham / ma giao dich
const int MAX_NGAY    = 11;   // dd/mm/yyyy + ky tu '\0'

// --- Mot mat hang trong kho ---
struct SanPham {
    char maSP[MAX_MA];          // ma san pham, vd SP001
    char tenSP[MAX_CHUOI];       // ten san pham
    char loaiHang[MAX_CHUOI];    // nhom hang, vd "Do uong"
    char donViTinh[20];          // cai, thung, kg...
    long soLuongTon;             // ton kho hien tai
    double donGia;               // don gia tham chieu (VND)
    long nguongToiThieu;         // muc ton kho toi thieu de canh bao
};

// --- Mot giao dich nhap (N) hoac xuat (X) kho ---
struct GiaoDich {
    char maGD[MAX_MA];           // ma giao dich, vd GD0001
    char maSP[MAX_MA];           // ma san pham lien quan
    char loai;                   // 'N' = nhap, 'X' = xuat
    long soLuong;                // so luong nhap/xuat
    double donGia;               // don gia tai thoi diem giao dich
    char ngay[MAX_NGAY];         // ngay thuc hien, dinh dang dd/mm/yyyy
};

// --- Toan bo du lieu cua kho ---
// Dung mang dong tu quan ly (con tro + so luong + dung luong) thay cho vector.
struct Kho {
    SanPham*  dsSP;       // mang san pham
    int       soSP;       // so san pham hien co
    int       dungLuongSP;// suc chua hien tai cua mang san pham

    GiaoDich* dsGD;       // mang giao dich
    int       soGD;
    int       dungLuongGD;
};

// ---- Khoi tao / giai phong ----
void khoiTaoKho(Kho& k);
void giaiPhongKho(Kho& k);

// ---- File du lieu ----
void docDuLieu(Kho& k);
void luuDuLieu(const Kho& k);

// ---- Quan ly danh muc san pham ----
void themSanPham(Kho& k);
void suaSanPham(Kho& k);
void xoaSanPham(Kho& k);
void hienThiTatCa(const Kho& k);

// ---- Tim kiem ----
int  timTheoMa(const Kho& k, const char* ma);  // tra ve chi so, -1 neu khong co
void timKiemSanPham(const Kho& k);

// ---- Nghiep vu nhap / xuat ----
void nhapKho(Kho& k);
void xuatKho(Kho& k);

// ---- Bao cao / thong ke ----
void canhBaoSapHet(const Kho& k);
void nhatKyTheoThang(const Kho& k);
void thongKeGiaTriTon(const Kho& k);

#endif
