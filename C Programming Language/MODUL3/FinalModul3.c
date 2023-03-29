// FINAL_PROGDAS_IIIA.
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define versi 301

typedef struct mynode
{
    char name[20];
    char gen[6];
    int age;
    struct mynode *link;
} Node;

Node *start = NULL;

void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);

// Sumber variable
char source[20], des[20], Lay[40];
char Lay2[40], cla[40];
int time1, time2, a[55];
char nama1[] = "Bayu Ardiyansyah";
char univ1[] = ", Universitas Muhammadiyah Malang";

// CODE UTAMA
void main()
{

    printf("=======================================\n");
    printf("         SISTEM LAYANAN TRAVEL                  \n");
    printf("=======================================\n");

    printf("Dibuat Oleh : %s\n", nama1);
    printf("Versi Pembuatan : %d\n", versi);
    printf("=======================");

    int i, j, a1, a2, b, c, x = 0, d, e, r;
    char o;
    printf("\nJumlah Penumpang Layanan Travel: ");
    fflush(stdin);
    scanf("%d", &j);

    details(j);
    printf("Kabupaten Asal: ");
    fflush(stdin);
    gets(source);
    printf("Kabupaten Tujuan: ");
    gets(des);
    printf("\t\t===LAYANAN TERSEDIA===\n");
    printf("\t1. Mitra Travel     05:00 A.M\n");
    printf("\t2. Travel Hoki      05:00 A.M\n");
    printf("\t3. Argo Travel      10:00 P.M\n");
    printf("\t4. Malang Indah     06:00 P.M\n");
    printf("\t5. Dieng Travel     07:00 P.M\n");
    scanf("%d", &i);
    do
    {
        switch (i)
        {
        case 1:
        {
            strcpy(Lay, "Mitra Travel");
            strcpy(Lay2, "Stasiun");

            time1 = 05;
            time2 = 00;
            a1 = 175000;
            a2 = 300000;

            d = cal(a1, a2, j);
            printf("Tagihan: %d\n",d);
        };
        break;
        case 2:
        {
            strcpy(Lay, "Travel Hoki");
            strcpy(Lay2, "Bandara");

            time1 = 05;
            time2 = 00;
            a1 = 300000;
            a2 = 490000;

            d = cal(a1, a2, j);
            printf("Tagihan: %d\n", d);
        };
        break;
        case 3:
        {
            strcpy(Lay, "Argo Travel");
            strcpy(Lay2, "Alun-alun");
            time1 = 10;
            time2 = 00;
            a1 = 210000;
            a2 = 340000;

            d = cal(a1, a2, j);
            printf("Tagihan: %d\n", d);
        };
        break;
        case 4:
        {
            strcpy(Lay, "Malang Indah");
            strcpy(Lay2, "Terminal Indah Bus");
            time1 = 06;
            time2 = 00;
            a1 = 175000;
            a2 = 300000;

            d = cal(a1, a2, j);
            printf("Tagihan: %d\n", d);
        };
        break;
        case 5:
        {
            strcpy(Lay, "Dieng Travel");
            strcpy(Lay2, "Semua area Kota");
            time1 = 07;
            time2 = 00;
            a1 = 225000;
            a2 = 375000;

            d = cal(a1, a2, j);
            printf("Tagihan: %d\n", d);
        };
        break;
        default:
            printf("NULL\n");
            x = 1;
            break;
        }
    } while (x);
    printf("==========SILAHKAN PILIH KURSI==========\n");

    // NUM Kursi
    seat(j);
    bill(d, j);
}

// Kalkulasi
int cal(int y1, int y2, int h)
{
    int b, c, i, t, r, n;
    printf("\t\tPilih Tipe:\n");
    printf("\t\t1. Reguler\n");
    printf("\t\t2. Premium\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
    {
        strcpy(cla, "Reguler");
        b = y2 * h;
        c = b + (b * 0.15);
    }
    break;
    case 2:
    {
        printf("\t\tPilih Kursi\n");
        printf("\t\t1. kursi 3\n");
        printf("\t\t2. Kursi 2\n");
        printf("\t\t3. Kursi 1\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            strcpy(cla, "Kursi 3");
            b = y1 * h;
            c = b + (b * 0.18);
        }
        break;
        case 2:
        {
            strcpy(cla, "Kursi 2");
            b = (y1 + 250000) * h;
            c = b + (b * 0.18);
        }
        break;
        case 3:
        {
            strcpy(cla, "Kursi 1");
            b = (y1 + 450000) * h;
            c = b + (b * 0.18);
        }
        break;
        default:
        {
            printf("\t\tDipilih\n");
        }
        }
    }
    break;
    default:
    {
        printf("\t\tDipilih\n");
    }
    }
    return c;
}

/*
   Detail Client
*/
void details(int k)
{
    int i, a;
    char val[20], gen[6];
    for (i = 1; i <= k; i++)
    {
        printf("\t\tPenumpang %d.\nNama Penumpang: ", i);
        fflush(stdin);
        gets(val);
        printf("Jenis Kelamin: ");
        fflush(stdin);
        gets(gen);
        printf("Umur: ");
        fflush(stdin);
        scanf("%d", &a);

        //Fungsi add_node() 
        add_node(val, gen, a);
    }
}

// Deskripsi Penumpang (node)
void add_node(char lol[20], char der[6], int b)
{
    Node *newptr = NULL, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    strcpy(newptr->name, lol);
    strcpy(newptr->gen, der);
    newptr->age = b;
    newptr->link = NULL;
    if (start == NULL)
        start = newptr;
    else
    {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newptr;
    }
}

// Memilih Kursi
int seat(int p)
{
    int i;
    printf("\t		 -:KURSI:-	 \n");
    printf("\t(L)\t(T)\t(R)\n\n");
    printf("\tL01\t\t X\n\tR02\tT03\tR04\n");
    printf("\tL05\tT06\tR07\n");
    printf("\tPilih Kursi: \n");
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);
}

// Struk
void bill(int y, int j)
{
    int i;
    Node *ptr = start;
    for (i = 1; i <= j; i++)
    {
        printf("\t\t%dst Nama klien: ", i);
        puts(ptr->name);
        printf("\t\t%dst Jenis Kelamin: ", i);
        puts(ptr->gen);
        printf("\t\t%dst Umur: %d\n\n", i,
               ptr->age);
        ptr = ptr->link;
    }
    printf("\t\tAsal: ");
    puts(source);
    printf("\t\tTujuan: ");
    puts(des);
    printf("\t\tTitik Penjumpatan: ");
    puts(Lay2);
    printf("\t\tLayanan: ");
    puts(Lay);
    printf("\t\tTipe: ");
    puts(cla);
    printf("\t\tWaktu Pemberangkatan: %d:%d\n", time1, time2);
    printf("\t\tTotal Harga: %d\n", y);
    printf("\t\tJumlah Penumpang: \n");
    for (i = 0; i < j; i++)
    {
        printf("\t\t%d", a[i]);
    }
    printf("\n");
    printf("\t\t\t\tTERIMAKASIH\n");
}
