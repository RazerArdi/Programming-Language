#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    printf("=======================================\n");
    printf("                 LOGIN                 \n");
    printf("=======================================\n");
    
    char nama1[] = "Bayu Ardiyansyah";
    char univ1[] = ", Universitas Muhammadiyah Malang";

    strcat(nama1, univ1); // Menambahkan string dari belakang.
    printf("Dibuat Oleh : %s\n", nama1);

    char password[10], username[10], ch;
    char U1[15];
    char S1[15];

    int i, j;
    int benar = 0, salah = 1, Email, Password;
    printf("Email   : ");
    scanf ("%s", U1);
    
    printf("Password_mu : ");
    scanf ("%s", S1);

    Email    = strcmp (U1, "Tes");
    Password = strcmp (S1, "admin");
    {
        if (ch == 13)
        printf("\nLogin Berhasil", U1,S1);
        password[i] = ch;
        ch = '*';
        printf("%c ", ch);
    }
    password[i] = '\0';
    printf("\nPassword Salah : ");
    printf("%c ", password[j]);
    
}