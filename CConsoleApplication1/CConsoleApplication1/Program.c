// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void tienMuaXe(float phanTramVay)
{
    int chon;
    do
    {
        double phanTramTraTruoc = 1.0 - phanTramVay;
        double soTien = 50000000.0; // 500 triệu
        double laiHangThang = 0.072 / 12; // 7.2%/năm
        int thoiGianVay = 24; // 24 tháng
        double soTienTraTruoc = soTien * phanTramTraTruoc; soTien = soTien - soTienTraTruoc;
        double traHangThang = soTien / thoiGianVay;
        printf(" So tien tra truoc : %.2f\n", soTienTraTruoc);
        printf(" So tien tra hang thang : %.2f\n", traHangThang);
        printf("ky han\tien lai phai tra\ Goc phai tra\ tong tien phai tra\so tien con lai\n");
        for (int i = 1; i <= thoiGianVay; i++)
        {
            double tienLai = soTien * laiHangThang;
            double tongTienPhaiTra = traHangThang + tienLai;
            soTien -= traHangThang;
            printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i, tienLai, traHangThang, tongTienPhaiTra, soTien);
        }
        printf("Ban co muon tiep tuc[1|0]\n");
        scanf("%d", &chon);
    } while (chon == 1);
}
int main()
{
    tienMuaXe(float phanTramVay);
	return 0;
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