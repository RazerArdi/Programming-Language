#include <stdio.h>
#define versi 401

int main()
{
    float basic, gross, da, hra;
    char nama1[] = "BAYU ARDIYANSYAH";


    puts("\t\t\t\t\t===============================");
    puts("\t\t\t\t\t|    GAJI KARYAWAN MANDIRI    |");
    puts("\t\t\t\t\t===============================");
    printf("\t\t\t\t\tDibuat Oleh : %s\n", nama1);
    printf("\t\t\t\t\tVersi Pembuatan : %d\n", versi);

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}