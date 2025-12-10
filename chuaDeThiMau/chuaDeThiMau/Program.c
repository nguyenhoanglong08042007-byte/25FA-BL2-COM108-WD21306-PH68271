// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <conio.h>
#include <math.h>
void thongTinMonHoc()
{
	char tenMonHoc[50];
	int maMonHoc;
	int soTinChi;
	printf("Nhap ten mon hoc: ");
	fgets(tenMonHoc, sizeof(tenMonHoc), stdin);
	printf("Nhap ma mon hoc: ");
	scanf_s("%d", &maMonHoc);
	printf("Nhap so tin chi: ");
	scanf_s("%d", &soTinChi);
	printf("Ten mon hoc: %s", tenMonHoc);
	printf("Ma mon hoc: %d\n", maMonHoc);
	printf("So tin chi: %d\n", soTinChi);
	int tienHocPhi = soTinChi * 500000;
	printf("Tien hoc phi : %d vnd\n", tienHocPhi);

}
void tinhTongSoLe()
{
	int n, tong = 0;
	printf(" nhap so nguyen duong n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf(" vui long nhap so nguyen duong !!");
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			tong += i;
		}
	}
	printf(" Tong cac so le tu 1 den %d la: %d\n", n, tong);
	
}

void thongTinDiemLab()
{

}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:thongTinMonHoc();
			break;
		case 2:tinhTongSoLe(); break;
		case 3:thongTinDiemLab(); 
			break;
		default:
			printf("chon lai [0-3]");
			break;
		}
		printf("Tiep tuc chuc nang nay? [1=Co | 0 =Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");// clear screen
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("===== MENU =====\n");
		printf("1. thong tin mon hoc\n");
		printf("2.  tinh tong so le\n");
		printf("3. thong tin diem lab \n");
		printf("moi chon chuc nang:\n");
		scanf_s("%d", &chonChucNang);
		if (chonChucNang != 0)
		{
			lapChucNang(chonChucNang);
		}

	} while (chonChucNang != 0);
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