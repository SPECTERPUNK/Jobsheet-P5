#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

void proses1() {
   int saldo = 0; 
   int topup; 
   
   printf("Saldo saat ini: %d\n", saldo);
   printf("Masukkan jumlah top up: ");
   scanf("%d", &topup); 
   
   saldo += topup; 
   
   printf("Saldo terbaru: %d\n", saldo);

   
 

}

void proses2() {
   int saldo = 200000;
  int tarik_tunai;

  printf("Saldo Anda saat ini: Rp%d,-\n", saldo);
  printf("Masukkan jumlah uang yang ingin ditarik: Rp");
  scanf("%d", &tarik_tunai);

  if (tarik_tunai > saldo) {
    printf("Maaf, saldo Anda tidak mencukupi.\n");
  } else {
    saldo -= tarik_tunai;
    printf("Penarikan tunai sebesar Rp%d,- berhasil.\n", tarik_tunai);
    printf("Sisa saldo Anda sebesar Rp%d,-\n", saldo);
  }
}

void proses3() {
    int saldo = 200000;
  int transfer;
  int no_rekening;

  printf("Saldo Anda saat ini: Rp%d,-\n", saldo);
  printf("Masukkan nomor rekening tujuan: ");
  scanf("%d", &no_rekening);
  printf("Masukkan jumlah uang yang ingin ditransfer: Rp");
  scanf("%d", &transfer);

  if (transfer > saldo) {
    printf("Maaf, saldo Anda tidak mencukupi.\n");
  } else {
    saldo -= transfer;
    printf("Transfer sebesar Rp%d,- berhasil ke nomor rekening %d.\n", transfer, no_rekening);
    printf("Sisa saldo Anda sebesar Rp%d,-\n", saldo);
  }
}
void proses4() {
	printf("Terima Kasih Sudah menggunakan layanan kami\n");
	
}




int main(){
      char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int attempts = 0;

    while (attempts < 3) {
        printf("<------------silahkan login----------->\n");
        printf("Masukkan username: ");
        scanf("%s", username);

        printf("Masukkan password: ");
        scanf("%s", password);

        if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
            printf("Selamat datang, %s!\n", username);
            break;
        } else {
            printf("Username atau password salah!\n");
            attempts++;
        }
    }

    if (attempts == 3) {
        printf("Anda telah salah login sebanyak 3 kali. Program berhenti.\n");
    }
   int pilihan;
   int from_where;
   do {
        if (from_where == 2) {
            printf("Anda kembali ke program utama\n");
        }
    start:
   printf("Selamat Datang Di E-Money Kel16\n");
   printf("Silahkan Pilih layanan yang anda inginkan\n");
   printf("1. top up\n");
   printf("2. Tarik tunai\n");
   printf("3. Transfer\n");
   printf("4. Log Out\n");
   
   scanf("%d", &pilihan);

   switch(pilihan) {
      case 1 :
         proses1();
         from_where = 1;
         break;
      case 2 :
         proses2();
         break;
      case 3 :
         proses3();
         break;
      case 4 :
         proses4();
         break;
      default :
         printf("Pilihan tidak valid\n");
         return 0;
   }
   } while (pilihan != 4);

   return 0;
}