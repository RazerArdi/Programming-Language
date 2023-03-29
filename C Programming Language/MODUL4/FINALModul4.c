#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define versi 401
#define ESC 100
int main()
{
    int x = 0, MILIH, NORMAL[5], JAWAB;
    char nama1[] = "BAYU ARDIYANSYAH";
    char BUDAK[] = "BUDAK KORPORAT";
    char NAME[30], P;
    float JL = 0, TOTAL, TOTAL1;

    puts("\t\t\t\t\t===============================");
    puts("\t\t\t\t\t|    GAJI KARYAWAN MANDIRI    |");
    puts("\t\t\t\t\t===============================");
    printf("\t\t\t\t\tDibuat Oleh : %s\n", nama1);
    printf("\t\t\t\t\tVersi Pembuatan : %d\n", versi);

    printf("Masukkan Nama Anda :");
    gets(NAME);
    printf("Bidang : %s \n", BUDAK);

    do
    {
        puts("===============================");

        printf("\t\tDAFTAR KERJA\n1. Desainer\n2. Analisis\n3. Penjualan\n4. HRD\n5. Konsultan\n6===KELUAR===6\n>PILIHAN :");
        scanf("%d", &MILIH);
        NORMAL[0] = 4000000;
        NORMAL[1] = 5000000;
        NORMAL[2] = 6000000;
        NORMAL[3] = 6000000;
        NORMAL[4] = 6000000;
        switch (MILIH)
        {
        case 1:
            puts("===============================");
            printf("~~~~~~~~~~~~~ Gaji Desainer ~~~~~~~~~~~~~");
            printf("\nMasukkan jam tambahan: ");
            scanf("%d", &JAWAB);
            if (JAWAB <= 30)
            {
                TOTAL = JAWAB * 20000;
            }
            else
            {
                TOTAL = JAWAB * 30000;
            }
            TOTAL1 = NORMAL[0] + TOTAL;

            printf("Total GAJI %.2f\n", TOTAL1);
            break;
        case 2:
            puts("===============================");
            printf("~~~~~~~~~~~~~ Gaji ANALISIS ~~~~~~~~~~~~~");
            printf("\nMasukkan jam tambahan: ");
            scanf("%d", &JAWAB);
            if (JAWAB <= 30)
            {
                TOTAL = JAWAB * 25000;
            }
            else
            {
                TOTAL = JAWAB * 35000;
            }
            TOTAL1 = NORMAL[1] + TOTAL;
            printf("Total GAJI %.2f\n", TOTAL1);
            break;
        case 3:
            puts("===============================");
            printf("~~~~~~~~~~~~~ Gaji PENJUALAN ~~~~~~~~~~~~~");
            printf("\nMasukkan jam tambahan: ");
            scanf("%d", &JAWAB);
            if (JAWAB <= 30)
            {
                TOTAL = JAWAB * 35000;
            }
            else
            {
                TOTAL = JAWAB * 38000;
            }
            TOTAL1 = NORMAL[2] + TOTAL;
            printf("Total GAJI %.2f\n", TOTAL1);
            break;
        case 4:
            puts("===============================");
            printf("~~~~~~~~~~~~~ Gaji HRD ~~~~~~~~~~~~~");
            printf("\nMasukkan jam tambahan: ");
            scanf("%d", &JAWAB);
            if (JAWAB <= 30)
            {
                TOTAL = NORMAL[3] + (JAWAB * 25000);
            }
            else
            {
                TOTAL = NORMAL[3] + (JAWAB * 40000);
            }
            TOTAL1 = NORMAL[3] + TOTAL;
            printf("Total GAJI %.2f\n", TOTAL1);
            break;
        case 5:
            puts("===============================");
            printf("~~~~~~~~~~~~~ Gaji KONSULTAN ~~~~~~~~~~~~~");
            printf("\nMasukkan jam tambahan: ");
            scanf("%d", &JAWAB);
            if (JAWAB <= 30)
            {
                TOTAL = JAWAB * 25000;
            }
            else
            {
                TOTAL = JAWAB * 40000;
            }
            TOTAL1 = NORMAL[4] + TOTAL;
            printf("Total GAJI %.2f\n", TOTAL1);
            break;

        case 6:
            puts("===============================");
            printf("BYE......");
            for (;;)
            {
                P = getche();
                if (P == ESC)
                    exit(0);
                {
                    return 0;
                }
            }

        default:
            printf("WAJIB PILIH!!!!!!!!\n");
            x = 1;
            break;
        }

    } while (x);
    puts("METODE PENGIRIMAN GAJI : ");
    printf("1. BRI,\n2. BCA,\n3. BNI\n");
    printf("> ");
    scanf("%d", &JL);
    JL = (TOTAL1 - 50000);

    if ('1')
    {
        printf("JUMLAH DITERIMA SETELAH PAJAK : Rp. %f", JL);
    }
    else if ('2')
    {
        printf("JUMLAH DITERIMA SETELAH PAJAK : Rp. %f", JL);
    }
    else if ('3')
    {
        printf("JUMLAH DITERIMA SETELAH PAJAK : Rp. %f", JL);
    }
    else
    {
        printf("\n\t\tNULL");
    }
    //==========================================================================================
    if (JL <= 3)
    {
        printf("\n=====================================================================================");
        printf("\nHalo.....Kak %s\n", NAME);
        printf("Sebagai %s \n", BUDAK);
        printf("Transaksi sedang diproses sejumlah Rp. %.2f ke Rekening Tujuan.\nTerimakasih", JL);
    }
    else
    {
        printf("\n===========Maaf Transaksi anda gagal===========");
    }

    return 0;
}
