// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemTraSoNguyen()
{

}
void demoString()
{
	//string = chuoi ky tu
    char name[10] = { 'A', 'n' ,'h' };

void demoMang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
			printf("mang[%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
			printf("%d," ,array[i][j]);
        }
        printf("\n");
    }
 }
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    { 
        switch (chonChucNang)
        {
        case 1:
            kiemTraSoNguyen();
            break;
		case 2:
            demoMang2Chieu(); break;
            case 3
            demoString(); // goi ten ham
			break;
        default:
            printf("chon lai [0-3]");
            break;
        }
		printf("Tiep tuc chuc nang nay? [1=Co | 0 =Khong]: ");
        scanf("%d", &tiepTuc);
		system("cls");// clear screen
    }
}
int main()
{
    int chonChucNang;
    do
    {   
		printf("===== MENU =====\n");
		printf("1. Kiem tra so nguyen\n");
        printf("2. demoMang2Chieu \n");
        printf("moi chon chuc nang:\n");
        scanf("%d", &chonChucNang);
        if (chonChucNang != 0 )
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