#include<stdio.h>
#define versi 401
main()
{
 int i,PILIH;
 float UANG=0;
 char c;
 
    char nama1[] = "BAYU ARDIYANSYAH";
    char BUDAK[] = "BUDAK KORPORAT";
    char NAME[30];

    puts("\t\t\t\t\t===============================");
    puts("\t\t\t\t\t|  SISTEM PEMBAYARAN ELEKTRONIK |");
    puts("\t\t\t\t\t===============================");
    printf("\t\t\t\t\tDibuat Oleh : %s\n", nama1);
    printf("\t\t\t\t\tVersi Pembuatan : %d\n", versi);

    printf("Masukkan Nama Anda :");
    gets(NAME);
    printf("Bidang : %s \n", BUDAK);

 do{
 printf("Enter\n1-Membayar\n2-TOP UP\n3-SALDO\n");
 scanf("%d",&PILIH);
 switch(PILIH)
 {
  case 1:
  {
   int WD;
   printf("Masukkan jumlah Pembayaran : \n");
   scanf("%d",&WD);
   if(WD%100==0)
   {
    if(UANG>=WD)
        {
        UANG-=WD;
        printf("Sisa saldo %f\n",UANG);
       }
       else
    {
    printf("Saldo anda tidak cukup\n");
        }
   }
   else
   {
    printf("Format Salah\n");
   }
   break;
  }
  case 2:
  {
   int TP;
   printf("Jumlah TOP UP\n");
   scanf("%d",&TP);
   if(TP%100==0)
   {
       UANG=UANG+TP;
       printf("SALDO %f\n",UANG);
   }
   else
   {
    printf("fORMAT SALAH\n");
   }
   break;
  }
  case 3:
  {
   printf("TOTAL SALDO E-MONEY %.2f\n",UANG);
   break;
  }
  default :
  {
   printf("SALAH\n");
   break;
  }
 }
 printf("Tekan'Y' untuk lanjut\n");
 fflush(stdin);
 scanf("%c",&c);
   }while(c=='y' || c=='Y');
   printf("Terimakasih Bpk/Bu %s, Transaksi anda segera diproses\n", NAME);
}