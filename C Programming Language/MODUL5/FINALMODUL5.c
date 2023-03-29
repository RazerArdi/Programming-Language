#include <stdio.h>
#define versi 501

void main()
{

    char nama1[] = "BAYU ARDIYANSYAH";
    int NAMA, HARGA[5], P = 1, tunjuk, c, HG, B[5], PIL, i, num;
    static int TOT;

    char Brand[5][100] = {"Lenovo Thinkpad", "Asus x505ZA", "Dell Alienware", "Hp Victus 16", "MSI Titan"};

    puts("\t\t\t\t\t===============================");
    puts("\t\t\t\t\t|            Retail           |");
    puts("\t\t\t\t\t===============================");
    printf("\t\t\t\t\tDibuat Oleh : %s\n", nama1);
    printf("\t\t\t\t\tVersi Pembuatan : %d\n\n", versi);

    printf("\t\t\t=====MOHON MASUKKAN NAMA ANDA TERLEBIH DAHULU!!!======\n");
    printf("> ");
    scanf("%i\n", &NAMA);

    do
    {
        if (P == 1)
        {

            printf("-------------------------------------------------------------------------------------\n");
            puts("                                   (PILIH ITEM)                                        ");
            printf("-------------------------------------------------------------------------------------\n");

            printf("\t\t\t1. Lenovo Thinkpad\n\t\t\t2. Asus X505ZA\n\t\t\t3. Dell Alienware\n\t\t\t4. Hp Victus 16\n\t\t\t5. MSI Tita");
            scanf("Jawaban: %d\n", &PIL);

            HARGA[0] = 42000;
            HARGA[1] = 55000;
            HARGA[2] = 62000;
            HARGA[3] = 75000;
            HARGA[4] = 82000;

            switch (PIL)
            {
            case 1:
                printf("Laptop: %c\n", Brand[0]);
                printf("Pilih 1 untuk lanjut atau Ketik angka apapun untuk tidak!!!");
                if (num == 1)
                {
                    B[0];
                    TOT += 42000;
                }
                printf("Total Harga %d\n", TOT);
                break;
            case 2:
                printf("Laptop: %c\n", Brand[1]);
                printf("Pilih 1 untuk lanjut atau Ketik angka apapun untuk tidak!!!");
                if (num == 1)
                {
                    B[1];
                    TOT += 55000;
                }
                printf("Total Harga %d\n", TOT);
                break;
            case 3:
                printf("Laptop: %c\n", Brand[2]);
                printf("Pilih 1 untuk lanjut atau Ketik angka apapun untuk tidak!!!");
                if (num == 1)
                {
                    B[2];
                    TOT += 62000;
                }
                printf("Total Harga %d\n", TOT);
                break;
            case 4:
                printf("Laptop: %c\n", Brand[3]);
                printf("Pilih 1 untuk lanjut atau Ketik angka apapun untuk tidak!!!");
                if (num == 1)
                {
                    B[3];
                    TOT += 75000;
                }
                printf("Total Harga %d\n", TOT);
                break;
            case 5:
                printf("Laptop: %c\n", Brand[4]);
                printf("Pilih 1 untuk lanjut atau Ketik angka apapun untuk tidak!!!");
                if (num == 1)
                {
                    B[4];
                    TOT += 82000;
                }
                printf("Total Harga %d\n", TOT);
                break;

            default:
            {
                printf("\n\t\t\tPilih\n");
                break;
            }
            }
            printf("%i Keranjang\n", NAMA);
            printf("Id\tItems\t\t\tKuantitas\t\t\tHarga\n");
            for (i = 0; i < 5; i++)
            {
                if (B[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, Brand[i], B[i], (HARGA[i] * B[i]));
                }
            }
            printf("Total Harga\t\t\t\t\t%d\n", HG);
            printf("Tekan '1' Untuk Tambah Item atau Tekan '2' Untuk menghapus item\n1 Tambah Item\n2 Menghapus Item \nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &P);
        }

        if (P == 2)
        {
            int id;
            printf("Masukkanz ID untuk menghapus Item\n");
            scanf("%d", &id);
            if (id < 5 && id > 0)
            {
                TOT = TOT - (HARGA[id] * B[id]);
                B[id] = 0;
            }
            else
            {
                printf("Masukkan ID Item\n\n");
            }
            printf("Perbaruan item \n");
            printf("Id\tItems\t\t\tKuantitas\t\tHarga\n");
            for (i = 0; i < 9; i++)
            {
                if (B[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t%d\n", i, Brand[i], B[i], (HARGA[i] * B[i]));
                }
            }
            printf("Total Harga\t\t\t\t\t%d\n", TOT);
            printf("Tekan '1' Untuk Tambah Item atau Tekan '2' Untuk menghapus item\n1 Tambah Item\n2 to Menghapus Item \nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &c);
        }

    } while (P == 2);
    puts("-----------------------------------ITEM-----------------------------------");
    printf("Harga Total %d\n", TOT);
    printf("Terimakasih %i.\n", NAMA);
}
