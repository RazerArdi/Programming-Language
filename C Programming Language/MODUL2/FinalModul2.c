#include <stdio.h>
#include <string.h> // strcpy, strcat, strlen, strcmp, strchr,strstr.
#include <stdbool.h>

main(void)
{

    // Pembuka antarmuka serta database sumber


    printf("=======================================\n");
    printf("         Sistem Pembelian barang                 \n");
    printf("=======================================\n");

    char nama1[] = "Bayu Ardiyansyah";
    char univ1[] = ", Universitas Muhammadiyah Malang";
    const double versi_aplikasi = 1.5;

    strcat(nama1, univ1);
    printf("Dibuat Oleh : %s\n", nama1);
    printf("Versi Pembuatan : %d\n");

    static int totalCost;
    int i, j, choice, c = 1, a[9], cost[9];
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char str[100];
    char items[9][100] = {"SSD V-GeN 512 Gb",
                          "SSD Samsung 980 500 Gb",
                          "Sandisk Flashdisk 64 Gb",
                          "Logitech C270 WebCam HD",
                          "Logitech M220 Mouse",
                          "Logitech MK275 Combo Keyboard and Mouse",
                          "Redmi PowerBank 20000 MaH",
                          "TP LINK Archer C54 AC1200",
                          "Google Nest Mini 2nd Gen"};
    printf("Nama anda?\n");
    gets(str);
    printf("Hai Kak %s, Selamat datang kak.\n", str);
    do
    {
        if (c == 1)
        {
            printf("Pilih\n1 - Penyimpanan\n2 - Perangkat Input\n3 - Aksesoris\nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                int Kategori1;
                printf("Pilih\n1 - SD V-GeN 512 Gb - Rs.650000\n2 - Logitech Mouse- Rp. 950000\n3 - Sandisk Flashdisk 64 Gb - Rp. 60000\nTekan angka apapun untuk KELUAR\n");
                scanf("%d", &Kategori1);
                cost[0] = 650000;
                cost[1] = 950000;
                cost[2] = 60000;
                switch (Kategori1)
                {
                case 1:
                {
                    int num;
                    printf("SSD-VGen 512 Gb Seharga 650000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 355;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("SSD Samsung 980 500 Gb Seharga 950000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 950000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("Sandisk Flashdisk 64 Gb Seharga Rp. 60000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 60000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori Penyimpanan\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int Kategori2;
                printf("Pilih\n1 - Logitech C270 WebCam HD 720P - Rp.300000\n2 - Logitech M220 Mouse - Rp. 175000\n3 - Logitech MK275 Combo Keyboard and Mouse - Rp. 268000\nTekan angka apapun untuk KELUAR\n");
                scanf("%d", &Kategori2);
                cost[3] = 650000;
                cost[4] = 950000;
                cost[5] = 60000;
                switch (Kategori2)
                {
                case 1:
                {
                    int num;
                    printf("Logitech C270 WebCam HD 720P Seharga Rp. 300000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 300000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("Logitech M220 Mouse Seharga Rp. 175000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 175000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("Logitech MK275 Combo Keyboard and Mouse Seharga Rp. 268000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 268000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori Hardware Input\n");
                    break;
                }
                }

            }
            case 3:
            {
                int Kategori3;
                printf("Pilih\n1 - Redmi PowerBank 20000 MaH - Rp.250000\n2 - TP LINK Archer C54 AC1200 - Rp. 340000\n3 - Google Nest Mini 2nd Gen - Rp. 500000\nTekan angka apapun untuk KELUAR\n");
                scanf("%d", &Kategori3);
                cost[6] = 250000;
                cost[7] = 340000;
                cost[8] = 500000;
                switch (Kategori3)
                {
                case 1:
                {
                    int num;
                    printf("Redmi PowerBank 20000 MaH Seharga Rp.250000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 250000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("TP LINK Archer C54 AC1200 Seharga Rp. 340000 .Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 340000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("Google Nest Mini 2nd Gen Seharga Rp. 500000 . Yakin Ingin Membeli?.Jika 'Setuju' Ketik 1, Jika ketik apapun\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 500000;
                    }
                    printf("Total Harga %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Keluar dari Kategori Aksesoris\n");
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
            printf("%s Keranjang\n", str);
            printf("Id\tItems\t\t\tKuantitas\t\t\tHarga\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Harga\t\t\t\t\t%d\n", totalCost);
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
                totalCost = totalCost - (cost[id] * a[id]);
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
                    printf("%d\t%s\t\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Harga\t\t\t\t\t%d\n", totalCost);
            printf("Tekan '1' Untuk Tambah Item atau Tekan '2' Untuk menghapus item\n1 Tambah Item\n2 to Menghapus Item \nTekan angka apapun untuk KELUAR\n");
            scanf("%d", &c);
        }

    } while (c == 1); // fungsi while sebagai pemindahan posisi terakhir
    printf("Harga Total %d\n", totalCost);
    printf("Terimakasih %s.\n", str);
}