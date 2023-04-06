#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int x = 10, y = 10; // koordinat awal
    char input;

    while (1) // loop utama
    {
        system("cls"); // hapus layar

        // cetak posisi karakter
        printf("Karakter berada di koordinat (%d, %d)\n", x, y);

        // cetak map
        printf("----------------------\n");
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 22; j++)
            {
                if (i == y && j == x)
                {
                    printf("| O ");
                }
                else if (i == 0 || i == 19 || j == 0 || j == 21)
                {
                    printf("| X "); // tambahkan border
                }
                else
                {
                    printf("|   ");
                }
            }
            printf("|\n");
        }

        // membaca input dari keyboard
        input = _getch();

        // gerakan karakter sesuai input
        switch (input)
        {
        case 'w':
        case 72:
            if (y > 1) // jika pemain belum mencapai border atas
                y--;
            break;
        case 'a':
        case 75:
            if (x > 1) // jika pemain belum mencapai border kiri
                x--;
            break;
        case 's':
        case 80:
            if (y < 18) // jika pemain belum mencapai border bawah
                y++;
            break;
        case 'd':
        case 77:
            if (x < 20) // jika pemain belum mencapai border kanan
                x++;
            break;
        }
    }

    return 0;
}