#include <stdio.h>
#include <string.h>
#define versi 301

int main()
{

    printf("=======================================\n");
    printf("         Sistem Pembelian barang                 \n");
    printf("=======================================\n");

    char nama1[] = "Bayu Ardiyansyah";
    char univ1[] = ", Universitas Muhammadiyah Malang";
    int Tes1;
    int pilih;

    strcat(nama1, univ1);
    printf("Dibuat Oleh : %s\n", nama1);
    printf("Versi Pembuatan : %d\n", versi);

    printf("Masukkan Nama Anda:\t ");
    scanf("%d", &Tes1);

    scanf("%lf %lf", &first, &second);

    do
    {

        if (a == 1)
        {
            printf("1. Menghitung Harga Wajar\n2. Daftar Update Harga Per Tanggal 29 Oktober 2022");
            scanf("%d", &pilih);
            switch (pilih)
            {
            case 1:
                int pertama, Thutang, Tmodal, Total;
                printf("1. Menghitung Harga Wajar\n2. Daftar Update Harga Per Tanggal 29 Oktober 2022");
                scanf("%d", &pertama);
                switch (pertama)
                {
                case 1:
                {
                    printf("Metode Debt to (DER)\n");
                    scanf("%d\n___\n%d", &Thutang, &Tmodal);
                    if (/* condition */)
                    {
                        /* code */
                    }
                    printf("Total Harga %d\n", totalCost);

                    break;
                }

                case 2:
                {
                    printf("Metode Price To Earning\n")
                    scanf("%d\n___\n, &")
                }



                default:
                    break;
                }
                break;

            default:
                break;
            }
        }

    } while (c == 1 || c == 2);
    printf("Harga Total %d\n", totalCost);
    printf("Terimakasih %s.\n", Tes1);
    return 0;
}