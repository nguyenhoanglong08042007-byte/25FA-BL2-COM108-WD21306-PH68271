// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
int isPrime(int x)
{
    if (x < 2) return 0;      // <2 là không phải số nguyên tố
    if (x == 2) return 1;  // 2 là số nguyên tố chẵn
    if (x % 2 == 0) return 0;  // loại các số chẵn > 2

    // Kiểm tra các ước số lẻ từ 3 đến sqrt(x)
    for (int i = 3; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;          // nếu chia hết → không nguyên tố
    }
    return 1;
}
int kiemTraSoChinhPhuong(int x)
{
    if (x < 0) return 0;
    if (x > 1 && (sqrt(x) == (int)sqrt(x))) return 1;
    else return 0;
}

void kiemTraSoNguyen()
{
    int chon;
    do
    {
        int x;
        printf("nhap  so nguyen x = ");
        scanf("%d", &x);
        //kiem tra so nguyen
        printf("%d la so nguyen", x);
        printf("\n");
        //kiem tra so nguyen to
        if (isPrime(x))
            printf("%d la so nguyen to\n,", x);
        else
            printf("%d khong phai la so nguyen to\n", x);
        // kiem tra so chinh phuong
        if (kiemTraSoChinhPhuong(x))
            printf("%d la so chinh phuong\n", x);
        else
        {
            printf("%d khong phai so chinh phuong\n", x);
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void uCLNBCNN()
{

    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void tienKaraoke()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void tienDien()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void doiTien()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void laiSuatNganHang()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void tienMuaXe()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void thongTinSinhVien()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void gameFplValott()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
void tinhToanPhanSo()
{
    int chon;
    do
    {
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}

int main()
{
    int chonCn;
    do
    {
        printf("=====MENU=====\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim UC va BC cua 2 so\n");
        printf("3.Tinh tien cho quan Karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Doi tien\n");
        printf("6.Tinh lai suat vay ngan hang\n");
        printf("7.Vay tien mua xe\n");
        printf("8.Sap xep thong tin sinh vien\n");
        printf("9.Xay dung game Fpoly-Lott\n");
        printf("10.Tinh toan phan so\n");
        printf("0.Thoat\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chonCn);

        switch (chonCn)
        {
        case 1: kiemTraSoNguyen(); break;
        case 2: uCLNBCNN(); break;
        case 3: tienKaraoke(); break;
        case 4: tienDien(); break;
        case 5: doiTien(); break;
        case 6:laiSuatNganHang(); break;
        case 7: tienMuaXe(); break;
        case 8: thongTinSinhVien(); break;
        case 9: gameFplValott(); break;
        case 10: tinhToanPhanSo(); break;
        default:
            printf("Hay chon lai Cn tu [1-10]\n");
        }
    } while (chonCn != 0);
}


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184