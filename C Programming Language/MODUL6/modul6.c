#include <stdio.h>

static int TOT;
int i, PILIH, c = 1, a[9], HARGA[9];

char NAMA[100];
char items[9][15] = {"ASUS A416JAO",
                     "ASUS X505ZA",
                     "ASUS K513EA",
                     "DELL E7270",
                     "DELL R3515",
                     "DELL C3401",
                     "LENOVO D330",
                     "LENOVO V14",
                     "LENOVO V15"};

void A1_INTRO(char nama1[], int versi)
{

    printf("\t\t\t=======================================\n");
    printf("\t\t\t|         SISTEM KASIR        |\n");
    printf("\t\t\t=======================================\n");
    
    printf("\t\t\tDibuat Oleh : %s\n", nama1);
    printf("\t\t\tVersi Pembuatan : %d\n", versi);
}
void A2_END()
{
    printf("\t\t\t=====================================\n");
    printf("\t\t\t\tHarga Total Rp. %d\n", TOT);
    printf("\t\t\t\tTerimakasih %s.\n", NAMA);
    printf("\t\t\t=====================================");
}

void B1_H1()
{
    HARGA[0] = 1000000;
    HARGA[1] = 1500000;
    HARGA[2] = 2000000;
}


main(void)
{

    // Pembuka antarmuka serta database sumber
    A1_INTRO("Bayu Ardiyansyah", 601);
    for (i = 0; i < 9; i++)
        a[i] = 0;

    printf("\n\n\t\t=====MOHON MASUKKAN NAMA ANDA TERLEBIH DAHULU!!!======\n");
    printf("> ");
    gets(NAMA);
    printf("Hai Kak %s, Selamat datang kak.\n", NAMA);
    do
    {
        if (c == 1)
        {
            printf("Pilih\n1 - ASUS\n2 - DELL\n3 - LENOVO\nTekan angka apapun untuk KELUAR\n");
            printf("> ");
            scanf("%d", &PILIH);
            switch (PILIH)
            {
            case 1:
            {
                int Kategori1;
                B1_H1();
                printf("Pilih\n1 - %s - Rp.%d\n2 - %s - Rp. %d\n3 - %s - Rp. %d\nTekan angka apapun untuk KELUAR\n", items[0], HARGA[0], items[1], HARGA[1], items[2], HARGA[2]);
                scanf("%d", &Kategori1);
                switch (Kategori1)
                {
                case 1:
                {
                    int num;
                    printf("%s Seharga %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[0], HARGA[0]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        TOT += HARGA[0];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("%s Seharga %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[1], HARGA[1]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        TOT += HARGA[1];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[2], HARGA[2]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        TOT += HARGA[2];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori ASUS\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int Kategori2;
                B1_H2();
                printf("Pilih\n1 - %s - Rp.%d\n2 - %s - Rp. %d\n3 - %s - Rp. %d\nTekan angka apapun untuk KELUAR\n", items[3], HARGA[3], items[4], HARGA[4], items[5], HARGA[5]);
                printf("> ");
                scanf("%d", &Kategori2);
                switch (Kategori2)
                {
                case 1:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n", items[3], HARGA[3]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        TOT += HARGA[3];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n", items[4], HARGA[4]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        TOT += HARGA[4];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[5], HARGA[5]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        TOT += HARGA[5];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori DELL\n");
                    break;
                }
                }
            }
            case 3:
            {
                int Kategori3;
                HARGA[6] = 4000000;
                HARGA[7] = 4500000;
                HARGA[8] = 5000000;
                printf("Pilih\n1 - %s - Rp. %d\n2 - %s - Rp. %d\n3 - %s - Rp. %d\nTekan angka apapun untuk KELUAR\n", items[6], HARGA[6], items[7], HARGA[7], items[8], HARGA[8]);
                printf("> ");
                scanf("%d", &Kategori3);
                switch (Kategori3)
                {
                case 1:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[6], HARGA[6]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        TOT += HARGA[6];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("%s Seharga Rp. %d .Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[7], HARGA[7]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        TOT += HARGA[7];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("%s Seharga Rp. %d . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika tidak ketik apapun\n", items[8], HARGA[8]);
                    printf("> ");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        TOT += HARGA[8];
                    }
                    printf("Total Harga %d\n", TOT);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori LENOVO\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Pilih Kategori\n");
                break;
            }
            }
            printf("%s Keranjang\n", NAMA);
            printf("Id\tItems\t\t\tKuantitas\t\t\t Harga\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t\t%d\n", i, items[i], a[i], (HARGA[i] * a[i]));
                }
            }
            printf("--------------------------------------------------------------------------\n");
            printf("|\t\tTotal Harga\t\t\t\tRp. %d      |\n", TOT);
            printf("--------------------------------------------------------------------------\n");
            printf("Tekan '1' Untuk Tambah Item atau Tekan '2' Untuk menghapus item\n1 Tambah Item\n2 Menghapus Item \nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &c);
        }
        if (c == 2)
        {
            int id;
            printf("Masukkanz ID untuk menghapus Item\n");
            scanf("%d", &id);
            if (id < 9 && id > 0)
            {
                TOT = TOT - (HARGA[id] * a[id]);
                a[id] = 0;
            }
            else
            {
                printf("Masukkan ID Item\n\n");
            }
            printf("Perbaruan item \n");
            printf("Id\tItems\t\t\tKuantitas\t\tHarga\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (HARGA[i] * a[i]));
                }
            }
            printf("\n--------------------------------------------------------------------");
            printf("Total Harga\t\t\t\t\t%d\n", TOT);
            printf("\n--------------------------------------------------------------------");
            printf("Tekan '1' Untuk Tambah Item atau Tekan '2' Untuk menghapus item\n1 Tambah Item\n2 to Menghapus Item \nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &c);
        }

    } while (c == 1); // fungsi while sebagai pemindahan posisi terakhir
    A2_END();
    
    char DA;
    printf("\nApakah bersedia Donasi sebesar 15000, juga tambahan 50%% untuk zakat? (Y/T)\n");
    scanf("%s", &DA);
    
    switch (DA)
    {
    
    case 'Y':
        printf("Total Tambahan : Rp %d", don (15000, 1.5,TOT));
        break;
    case 'T':
        printf("Terimakasih");
    default:
        break;
    }

}

int don(int jum, double zak){
    return jum * zak + TOT;
}

void B1_H2()
{
    HARGA[3] = 2500000;
    HARGA[4] = 3000000;
    HARGA[5] = 3500000;
}