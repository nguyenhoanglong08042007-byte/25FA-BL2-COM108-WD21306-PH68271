#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
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
        scanf_s("%d", &x);
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
        scanf_s("%d", &chon);
    } while (chon == 1);
}
int UCLN(int a, int b)
{
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int BCNN(int a, int b)
{
    return (a * b) / UCLN(a, b);
}
void uCLNBCNN()
{
    
    int chon;
    do
    {
        int x, y;
        printf("Nhap x: ");
        scanf_s("%d", &x);
        printf("Nhap y: ");
        scanf_s("%d", &y);

        printf("Uoc chung lon nhat: %d\n", UCLN(x, y));
        printf("Boi chung nho nhat: %d\n", BCNN(x, y));
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
float tinhTienKaraoke(int start, int end) {
    if (start < 12 || end > 23 || start >= end) return -1.0;

    int total_hours = end - start;
    float cost;
    const float GIA_GIO_GOC = 150000.0 / 3.0;

    if (total_hours <= 3) {
        cost = 150000.0;
    }
    else {
        float discounted_rate = GIA_GIO_GOC * 0.7;
        int remaining_hours = total_hours - 3;
        cost = 150000.0 + (remaining_hours * discounted_rate);
    }

    if (start >= 14 && start < 17) {
        cost *= 0.9;
    }

    return cost;
}
void tienKaraoke()
{
    
    int chon;
    do
    {
        int start, end;
        printf("Nhap gio bat dau: ");
        scanf_s("%d", &start);

        printf("Nhap gio ket thuc: ");
        scanf_s("%d", &end);

        float kq = tinhTienKaraoke(start, end); // gọi hàm

        if (kq < 0) {
            printf("Moi ban nhap lai gio bat dau va ket thuc!\n");
        }
        else {
            printf("Tong tien phai tra: %.0f VND\n", kq);
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void tienDien()
{
    int chon;
    do
    {       
        int soKwh;
        float tien;
        printf("Nhap so Kwh tieu thu : ");
		scanf_s("%d", &soKwh);
        if(soKwh <= 50)
        {
            tien = soKwh * 1678;
        }
        else if(soKwh <= 100)
        {
            tien = 50 * 1678 + (soKwh - 50) * 1734;
        }
        else if(soKwh <= 200)
        {
            tien = 50 * 1678 + 50 * 1734 + (soKwh - 100) * 2014;
        }
        else if (soKwh <= 300)
        {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soKwh - 200) * 2536;
        }
        else if (soKwh <= 400)
        {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soKwh - 300) * 2834;
        }
        else
        {
			tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soKwh - 400) * 2927;
		}
        printf("Tien dien phai tra: %.0f VND\n", tien);

        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void doiTien()
{
    int chon;
    do
    {
        int soTien;
        int menhGia[] = { 500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000 };
        int soLuong[9]; // mảng lưu số tờ mỗi mệnh giá
        printf("Nhap so tien can doi (VND): ");
        scanf_s("%d", &soTien); // gán giá trị cho soTien
        int tienConLai = soTien;
        for (int i = 0; i < 9; i++) {
            soLuong[i] = soTien / menhGia[i]; // số tờ của mệnh giá i
            soTien = soTien % menhGia[i];     // tiền còn lại
        }

        printf("So tien khong hop le:\n");
        for (int i = 0; i < 9; i++)
        {
            if (soLuong[i] > 0)
                printf("%d x %d VND\n", soLuong[i], menhGia[i]);
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void laiSuatNganHang()
{
    int chon;
    do
    {
        double soTienVay;
        printf("Nhap so tien vay (VND): ");
        scanf_s("%lf", &soTienVay);

        double laiSuat = 5.0; // 5%/thang
        double goc = soTienVay / 12, tong = 0, conLai = soTienVay;

        printf("Thang\tGoc\tLai\tTong\n");
        for (int i = 1; i <= 12; i++) {
            double lai = conLai * laiSuat / 100;
            double tra = goc + lai;
            printf("%2d\t%.2lf\t%.2lf\t%.2lf\n", i, goc,lai,tra);
            tong += tra;
            conLai -= goc;
        }
        printf("Tong da tra: %.2lf VND\n", tong);
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void tienMuaXe()
{
    float phanTramVay;
    int chon;
    do
    {
        printf("nhap phan tram vay (vi du 0.7 la vay 70% )");
		scanf_s("%f", &phanTramVay);
        double phanTramTraTruoc = 1.0 - phanTramVay;
        double soTien = 500000000.0; // 500 triệu
        double laiHangThang = 0.072 / 12; // 7.2%/năm
        int thoiGianVay = 24; // 24 tháng
        double soTienTraTruoc = soTien * phanTramTraTruoc; soTien = soTien - soTienTraTruoc;
        double traHangThang = soTien / thoiGianVay;
        printf(" So tien tra truoc : %.2f\n", soTienTraTruoc);
        printf(" So tien tra hang thang : %.2f\n", traHangThang);
        printf("ky han\tLai\t\tGoc\t\tTong\t\tCon lai\n");
        for (int i = 1; i <= thoiGianVay; i++)
        {
            double tienLai = soTien * laiHangThang;
            double tongTienPhaiTra = traHangThang + tienLai;
            soTien -= traHangThang;
            printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i, tienLai, traHangThang, tongTienPhaiTra, soTien);
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void thongTinSinhVien()
{   
    struct SinhVien
    {
        char hoTen[50];
        float diemTB;
	};
    int chon;
    do
    {
		int soLuong;
		struct SinhVien sv[50];
		printf("Nhap so luong sinh vien: ");
		scanf_s("%d", &soLuong);
        for (int i = 0; i < soLuong; i++)
        {
			fflush(stdin);
            printf("Nhap ho ten sinh vien %d: ", i + 1);
            fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);
            printf("Nhap diem trung binh sinh vien %d: ", i + 1);
			scanf_s("%f", &sv[i].diemTB);
			printf("\n\tưtDanh sach sinh vien vua nhap:\n");
			printf("STT\tHo va Ten\t\tDiem TB\n");
            for (int j = 0; j < soLuong; j++)
            {
                printf("%d\t%s\t%.2f\n", j + 1, sv[j].hoTen, sv[j].diemTB);
            }
            

        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void gameFplValott(int *a, int *b)
{
    int chon;
    srand(time(0));
    do
	{
		int flag ;
        do
        {
            printf("Nhap 2 so (trong khoang 1-15): ");
            scanf_s("%d %d", a, b);
            // kiem tra hop le
            flag = *a < 1 || *a > 15 || *b < 1 || *b > 15;
            if (flag)
            {
                printf("So ban nhap khong hop le. Moi nhap lai!\n");
            }
        } while (flag);
        int rnd1, rnd2;
		rnd1 = 1 + rand() % 15;
		rnd2 = 1 + rand() % 15;
		printf("So duoc sinh ra : so 1 la: %d, so 2 la: %d\n", rnd1, rnd2);
        if ( *a == rnd1 && *b == rnd2)
        {
            printf("Chuc mung ban da trung giai Nhat!\n");
        }
        else if (*a == rnd1 || *b == rnd2)
        {
            printf("Chuc mung ban da trung giai Nhi!\n");
        }
        else
        {
            printf("Chuc ban may man lan sau!\n");
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}

#include <stdio.h>

// Struct phân số
typedef struct {
    int tu;
    int mau;
} PhanSo;
// Hàm tính UCLN
int ucln(int a, int b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}
// Rút gọn phân số
PhanSo rutGon(PhanSo p) {
    int uc = ucln(p.tu, p.mau);
    p.tu /= uc;
    p.mau /= uc;
    if (p.mau < 0) {
        p.tu = -p.tu;
        p.mau = -p.mau;
    }
    return p;
}
// Cộng
PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

// Trừ
PhanSo tru(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

// Nhân
PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

// Chia
PhanSo chia(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return rutGon(kq);
}

// Hàm chính
void tinhToanPhanSo() {
    int chon;
    do {
        PhanSo so1, so2;

        printf("Nhap tu va mau cua phan so thu 1: ");
        scanf_s("%d %d", &so1.tu, &so1.mau);

        printf("Nhap tu va mau cua phan so thu 2: ");
        scanf_s("%d %d", &so2.tu, &so2.mau);

        if (so1.mau == 0 || so2.mau == 0) {
            printf("Loi: Mau so khong duoc bang 0!\n");
            continue;
        }

        printf("Ket qua CONG  = %d / %d\n", cong(so1, so2).tu, cong(so1, so2).mau);
        printf("Ket qua TRU   = %d / %d\n", tru(so1, so2).tu, tru(so1, so2).mau);
        printf("Ket qua NHAN  = %d / %d\n", nhan(so1, so2).tu, nhan(so1, so2).mau);
        if (so2.tu != 0)
            printf("Ket qua CHIA  = %d / %d\n", chia(so1, so2).tu, chia(so1, so2).mau);
        else
            printf("Ket qua CHIA  = Loi: Khong the chia cho 0\n");

        printf("Ban co muon tiep tuc [1|0]? ");
        scanf_s("%d", &chon);

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
            scanf_s("%d", &chonCn);

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
            case 9: {
                int a, b;
                gameFplValott(&a, &b);
                break;
            }
            case 10: tinhToanPhanSo(); break;
            default:
                printf("Hay chon lai Cn tu [1-10]\n");
            }
        } while (chonCn != 0);
    }



