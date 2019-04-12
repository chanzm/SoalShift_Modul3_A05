# SoalShift_Modul3_A05

LAPORAN MODUL3 Kelompok A5

Chaniyah Zulfa M (05111740000115)

Faqih Fathan I. (05111740000175)

# SOAL
1. Buatlah program C yang bisa menghitung faktorial secara parallel lalu menampilkan hasilnya secara berurutan <br>
Contoh:
    ./faktorial 5 3 4
    3! = 6
    4! = 24
    5! = 120

2. Pada suatu hari ada orang yang ingin berjualan 1 jenis barang secara private, dia memintamu membuat program C dengan spesifikasi sebagai berikut:<br>

    a. Terdapat 2 server: server penjual dan server pembeli <br>
    b. 1 server hanya bisa terkoneksi dengan 1 client <br>
    c. Server penjual dan server pembeli memiliki stok barang yang selalu sama <br>
    d. Client yang terkoneksi ke server penjual hanya bisa menambah stok <br>
          - Cara menambah stok: client yang terkoneksi ke server penjual mengirim string “tambah” ke server lalu stok bertambah 1 <br>
    e. Client yang terkoneksi ke server pembeli hanya bisa mengurangi stok <br>
          - Cara mengurangi stok: client yang terkoneksi ke server pembeli mengirim string “beli” ke server lalu stok berkurang 1 <br>
    f. Server pembeli akan mengirimkan info ke client yang terhubung dengannya apakah transaksi berhasil atau tidak berdasarkan ketersediaan stok
          - Jika stok habis maka client yang terkoneksi ke server pembeli akan mencetak “transaksi gagal” <br>
          - Jika stok masih ada maka client yang terkoneksi ke server pembeli akan mencetak “transaksi berhasil” <br>
    g. Server penjual akan mencetak stok saat ini setiap 5 detik sekali <br>
    h. Menggunakan thread, socket, shared memory <br>

3. Agmal dan Iraj merupakan 2 sahabat yang sedang kuliah dan hidup satu kostan, sayangnya mereka mempunyai gaya hidup yang berkebalikan, dimana Iraj merupakan laki-laki yang sangat sehat,rajin berolahraga dan bangun tidak pernah kesiangan sedangkan Agmal hampir menghabiskan setengah umur hidupnya hanya untuk tidur dan ‘ngoding’. Dikarenakan mereka sahabat yang baik, Agmal dan iraj sama-sama ingin membuat satu sama lain mengikuti gaya hidup mereka dengan cara membuat Iraj sering tidur seperti Agmal, atau membuat Agmal selalu bangun pagi seperti Iraj. Buatlah suatu program C untuk menggambarkan kehidupan mereka dengan spesifikasi sebagai berikut: <br>
    a. Terdapat 2 karakter Agmal dan Iraj <br>
    b. Kedua karakter memiliki status yang unik <br>
        - Agmal mempunyai WakeUp_Status, di awal program memiliki status 0 <br>
        - Iraj memiliki Spirit_Status, di awal program memiliki status 100 <br>
        - Terdapat 3 Fitur utama <br>
              + All Status, yaitu menampilkan status kedua sahabat <br>
                Ex: Agmal WakeUp_Status = 75 
                    Iraj Spirit_Status = 30
              + “Agmal Ayo Bangun” menambah WakeUp_Status Agmal sebesar 15 point <br>
              + “Iraj Ayo Tidur” mengurangi Spirit_Status Iraj sebanyak 20 point <br>
        - Terdapat Kasus yang unik dimana: <br>
              + Jika Fitur “Agmal Ayo Bangun” dijalankan sebanyak 3 kali, maka Fitur “Iraj Ayo Tidur” Tidak bisa dijalankan selama 10   detik (Dengan mengirim pesan ke sistem “Fitur Iraj Ayo Tidur disabled 10 s”) <br>
              + Jika Fitur  “Iraj Ayo Tidur” dijalankan sebanyak 3 kali, maka Fitur “Agmal Ayo Bangun” Tidak bisa dijalankan selama 10 detik (Dengan mengirim pesan ke sistem “Agmal Ayo Bangun disabled 10 s”) <br>
        - Program akan berhenti jika Salah Satu : <br>
              + WakeUp_Status Agmal >= 100 (Tampilkan Pesan “Agmal Terbangun,mereka bangun pagi dan berolahraga”) <br>
              + Spirit_Status Iraj <= 0 (Tampilkan Pesan “Iraj ikut tidur, dan bangun kesiangan bersama Agmal”) <br>
        - Syarat Menggunakan Lebih dari 1 Thread <br>

4. Buatlah sebuah program C dimana dapat menyimpan list proses yang sedang berjalan (ps -aux) maksimal 10 list proses. Dimana awalnya list proses disimpan dalam di 2 file ekstensi .txt yaitu  SimpanProses1.txt di direktori /home/Document/FolderProses1 dan SimpanProses2.txt di direktori /home/Document/FolderProses2 , setelah itu masing2 file di  kompres zip dengan format nama file KompresProses1.zip dan KompresProses2.zip dan file SimpanProses1.txt dan SimpanProses2.txt akan otomatis terhapus, setelah itu program akan menunggu selama 15 detik lalu program akan mengekstrak kembali file KompresProses1.zip dan KompresProses2.zip 
Dengan Syarat : <br>
    - Setiap list proses yang di simpan dalam masing-masing file .txt harus berjalan bersama-sama <br>
    - Ketika mengkompres masing-masing file .txt harus berjalan bersama-sama <br>
    - Ketika Mengekstrak file .zip juga harus secara bersama-sama <br>
    - Ketika Telah Selesai melakukan kompress file .zip masing-masing file, maka program akan memberi pesan “Menunggu 15 detik untuk mengekstrak kembali” <br>
    - Wajib Menggunakan Multithreading <br>
    - Boleh menggunakan system <br>
    
5. Angga, adik Jiwang akan berulang tahun yang ke sembilan pada tanggal 6 April besok. Karena lupa menabung, Jiwang tidak mempunyai uang sepeserpun untuk membelikan Angga kado. Kamu sebagai sahabat Jiwang ingin membantu Jiwang membahagiakan adiknya sehingga kamu menawarkan bantuan membuatkan permainan komputer sederhana menggunakan program C. Jiwang sangat menyukai idemu tersebut. Berikut permainan yang Jiwang minta. <br>
  a. Pemain memelihara seekor monster lucu dalam permainan. Pemain dapat  memberi nama pada monsternya. <br>
  b. Monster pemain memiliki hunger status yang berawal dengan nilai 200 (maksimalnya) dan nanti akan berkurang 5 tiap 10 detik.Ketika hunger status mencapai angka nol, pemain akan kalah. Hunger status dapat bertambah 15 apabila pemain memberi makan kepada monster, tetapi banyak makanan terbatas dan harus beli di Market. <br>
  c. Monster pemain memiliki hygiene status yang berawal dari 100 dan nanti berkurang 10 tiap 30 detik. Ketika hygiene status mencapai angka nol, pemain akan kalah. Hygiene status' dapat bertambah 30 hanya dengan memandikan monster. Pemain dapat memandikannya setiap 20 detik(cooldownnya 20 detik). <br>
  d. Monster pemain memiliki health status yang berawal dengan nilai 300. Variabel ini bertambah (regenerasi)daa 5 setiap 10 detik ketika monster dalam keadaan standby. <br>
  e. Monster pemain dapat memasuki keadaan battle. Dalam keadaan ini, food status(fitur b), hygiene status'(fitur c), dan ‘regenerasi’(fitur d) tidak akan berjalan. Health status dari monster dimulai dari darah saat monster pemain memasuki battle. Monster pemain akan bertarung dengan monster NPC yang memiliki darah 100. Baik monster pemain maupun NPC memiliki serangan sebesar 20. Monster pemain dengan monster musuh akan menyerang secara bergantian. <br>
  f. Fitur shop, pemain dapat membeli makanan sepuas-puasnya selama stok di toko masih tersedia.<br>
      - Pembeli (terintegrasi dengan game) <br>
          + Dapat mengecek stok makanan yang ada di toko. <br>
          + Jika stok ada, pembeli dapat membeli makanan. <br>
      - Penjual (terpisah) <br>
          + Bisa mengecek stok makanan yang ada di toko <br>
          + Penjual dapat menambah stok makanan. <br>
    Spesifikasi program: <br>
A. Program mampu mendeteksi input berupa key press. (Program bisa berjalan tanpa perlu menekan tombol enter) <br>
B. Program terdiri dari 3 scene yaitu standby, battle, dan shop. <br>
C. Pada saat berada di standby scene, program selalu menampilkan health status, hunger status, hygiene status, stok makanan tersisa, dan juga status kamar mandi (“Bath is ready” jika bisa digunakan, “Bath will be ready in [bath cooldown]s” jika sedang cooldown). Selain itu program selalu menampilkan 5 menu, yaitu memberi makan, mandi, battle, shop, dan exit. <br> Contoh :

Standby Mode
Health : [health status]
Hunger : [hunger status]
Hygiene : [hygiene status]
Food left : [your food stock]
Bath will be ready in [cooldown]s
Choices
Eat
Bath
Battle
Shop
Exit

D. Pada saat berada di battle scene, program selalu menampilkan health status milik pemain dan monster NPC. Selain itu, program selalu menampilkan 2 menu yaitu serang atau lari. <br> Contoh :

Battle Mode
Monster’s Health : [health status]
Enemy’s Health : [enemy health status]
Choices
Attack
Run

E. Pada saat berada di shop scene versi pembeli, program selalu menampilkan food stock toko dan milik pemain. Selain itu, program selalu menampilkan 2 menu yaitu beli dan kembali ke standby scene. <br> Contoh :

        Shop Mode
        Shop food stock : [shop food stock]
        Your food stock : [your food stock]
        Choices
Buy
Back

F. Pada program penjual, program selalu menampilkan food stock toko. Selain itu, program juga menampilkan 2 menu yaitu restock dan exit. <br> Contoh :

Shop
Food stock : [shop food stock]
Choices
Restock
Exit

Pastikan terminal hanya mendisplay status detik ini sesuai scene terkait (hint: menggunakan system(“clear”))

# JAWABAN
1. Code :

```
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial( void *arr );
void swap(int *xp, int *yp);

pthread_t *thread;//inisialisasi awal
int arr[1000];
int banyak=0;
int main()
{
        int i=0;
        int t=0;
        int iret1;
        while(1)
        {
                char chr;
                scanf("%d%c", &arr[t], &chr);
                thread=malloc(t*sizeof(int));
                t++;
                int  j, min_idx;

                        //One by one move boundary of unsorted subarray 
                for (i=0; i<t; i++) 
                {
                        // Find the minimum element in unsorted array 
                        min_idx = i;
                        for (j=i+1; j<t; j++)
                                if (arr[j] < arr[min_idx]) min_idx = j;
                                        //Swap the found minimum element with the first element
                        swap(&arr[min_idx], &arr[i]);
                }

                if(chr == '\n') break;
        }
        for(i=0;i<t;i++)
        {
                iret1 = pthread_create( &thread[banyak], NULL, faktorial, NULL);//membuat thread pertama
                if(iret1)//jika eror
                {
                        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
                        exit(EXIT_FAILURE);
                }
                pthread_join( thread[i], NULL); 
                 banyak++;
                if(t==banyak) break;
         }
        // for(int i=0;i<banyak;i++) pthread_join( thread[i], NULL); 

        exit(EXIT_SUCCESS);

}


void *faktorial( void *ar )
{
    int x=arr[banyak];
    int total=1;
    int c;
    for(c=x;c>0;c--) total*=c;
    printf("%d! = %d\n", x,total);
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

```

Penjelasan =

pertama, deklarasikan semua variabel yang dibutuhkan. Lalu kita menginput angka yang dipisah dengan karakter spasi yang diwakilkan dengan variabel chr, dan program akan berhenti menginput saat menemui character enter. Untuk Fungsi dari 'malloc' sendiri adalah untuk mengalokasikan memory utuk menampung inputan yang sekiranya menampung banyak memori. Pada setiap inputan, tak lupa juga dilakukan sorting. Sorting yang kami pakai disini adalah Selection Sort dimana ia memeriksa semua bilangan dan langsung diletakkan pada tempatnya sesuai urutan Ascending. Yang dibantu juga dengan fungsi swap. 

Setelah dilakukan sorting dan menginput sampai enter, Kita membuat perulangan untuk membuat thread sebanyak inputan, jadi, setiap inputan akan dibuat thread sendiri, dan tak lupa menambahkan join thread agar program bisa selesai bersamaan. Didalam membuat thread sendiri(pthread_create), tak lupa memanggil fungsi faktorial yang telah dibuat.

Terakhir kami tak lupa membuat fungsi faktorial untuk menampilkan bilangan faktorial tiap inputan yang suda dibuat threadnya. Lalu didalam fungsi faktorial juga, kita mengeprint hasilnya dengan sintaks 'printf' .

3. Code :

```
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void status_skrg();
void *agmal_bangun();
void *iraj_bobo();

int Spirit_Status=100;
int WakeUp_Status=0;

int sistem_jln=0; //cek sistem jalan ato tidak ,, 2 untuk iraj_bobo ; 1 untuk agmal_bangun

int i_ayo_bangun=0;
int i_ayo_tidur=0;

void status_skrg()
{
        printf("Agmal WakeUp_Status = %d \n", WakeUp_Status);
        printf("Iraj Spirit_Status = %d \n", Spirit_Status);
}

void *agmal_bangun()
{
        while(1)
        {
                while(sistem_jln!=1) {};
                if(i_ayo_bangun!=3) //gajalan lebih dr 3x
                {
                        i_ayo_bangun++;
                        WakeUp_Status+=15;

                }
                else
                {
                        printf("Fitur Iraj Ayo Tidur disabled 10 s\n");
                        sleep(10);
                        i_ayo_bangun=0;
                }
                sistem_jln=0;
        }
}

void *iraj_bobo()
{
        while(1)
        {
                while(sistem_jln!=2) {};
                if(i_ayo_tidur!=3) //gajalan lebih dr 3x
                {
                        i_ayo_tidur++;
                        Spirit_Status-=20;
                }
                else
                {
                        printf("Agmal Ayo Bangun disabled 10 s\n");
                        sleep(10);
                        i_ayo_bangun=0;
                }
                sistem_jln=0;
        }
}


int main()
{
    pthread_t thread2, thread3;//inisialisasi awal
    int  iret2, iret3;
    int choose;
    sistem_jln=0;

    iret2 = pthread_create( &thread2, NULL, agmal_bangun, NULL); //membuat thread pertama
    if(iret2) //jika eror
    {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
        exit(EXIT_FAILURE);
    }

    iret3 = pthread_create( &thread3, NULL, iraj_bobo, NULL);//membuat thread kedua
    if(iret3)//jika gagal
    {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret3);
        exit(EXIT_FAILURE);
    }

    while(1)
   {
        printf("1. All Status \n");
        printf("2. Agmal ayo bangun\n");
        printf("3. Iraj ayo tidur\n");

    printf("Masukkan nomor yang tersedia = ");
    scanf("%d", &choose);
    if(choose==1) status_skrg();
    else if(choose==2) sistem_jln=1;
    else if(choose==3) sistem_jln=2;
    else printf("Pilihan tidak tersedia\n");

        if(WakeUp_Status >=100)
        {
                printf("Agmal Terbangun,mereka bangun pagi dan berolahraga\n");
                exit(EXIT_SUCCESS);
        }
        else if(Spirit_Status <=0)
        {
                printf("Iraj ikut tidur, dan bangun kesiangan bersama Agmal \n");
                exit(EXIT_SUCCESS);
        }
   }
   return 0;
}
```

Penjelasan =

Pertama, deklarasikan semua variabel yang dibutuhkan. Lalu membuat 3 fungsi yang dibutuhkan.

Fungsi pertama adalah untuk status sekarang yaitu untuk mengecek wake up status dan spirit status setiap dilakukan pemanggilan.

Fungsi kedua adalah fungsi agmal_bangun(), yaitu fungsi untuk menambah wake up status sebanyak 15 setiap dilakukan pemanggilan, kecuali jika pemanggilan dilakukan sudah 3 kali, maka akan ter print 'fitur iraj ayo tidur disables 10s'. Saat fungsi berjalan pun, sistem_jln untuk fungsi agmal_bangun adalah 1(terletak di main function saat memilih fitur yang memanggil fungsi agmal_bangun). Dan setelah selesai berjalan, sistem_jln di set 0 kembali.

Fungsi ketiga adalah fungsi iraj_bobo(), yaitu fungsi untuk mengurangi spirit status sebanyak 20 setiap dilakukan pemanggilan, kecuali jika pemanggilan dilakukan sudah 3 kali, maka akan ter print 'agmal ayo bangun disables 10s'. Saat fungsi berjalan pun, sistem_jln untuk fungsi iraj_bobo adalah 2(terletak di main function saat memilih fitur yang memanggil fungsi iraj_bobo). Dan setelah selesai berjalan, sistem_jln di set 0 kembali.

Pada main function, dibuat 2 thread dimana thread satu menjalankan fungsi agmal_bangun dan thread satunya lagi menjalankan fungsi iraj_bobo.

Keadaan lain lagi yang terdapat pada main function adalah jika WakeUp_status sudah lebih dari sama dengan 100,  maka akan terprint "Agmal Terbangun,mereka bangun pagi dan berolahraga", dan jika Spirit_Status kurang dari sama dengan nol, maka akan terprint "Iraj ikut tidur, dan bangun kesiangan bersama Agmal".

4. Code :

```c
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

pthread_t tid[2];

void* solve(void *arg)
{
	pthread_t id = pthread_self();
	if (pthread_equal(id, tid[0])) {
		system("mkdir /home/faqih/Documents/FolderProses1");
		system("ps -aux | head -10 > /home/faqih/Documents/FolderProses1/SimpanProses1.txt");
		system("zip -j /home/faqih/Documents/FolderProses1/KompresProses1.zip /home/faqih/Documents/FolderProses1/SimpanProses1.txt");
		system("rm /home/faqih/Documents/FolderProses1/SimpanProses1.txt");
		sleep(15);
		system("unzip -o /home/faqih/Documents/FolderProses1/KompresProses1.zip -d /home/faqih/Documents/FolderProses1/");
	} else  {
		system("mkdir /home/faqih/Documents/FolderProses2");
		system("ps -aux | head -10 > /home/faqih/Documents/FolderProses2/SimpanProses2.txt");
		system("zip -j /home/faqih/Documents/FolderProses2/KompresProses2.zip /home/faqih/Documents/FolderProses2/SimpanProses2.txt");
		system("rm /home/faqih/Documents/FolderProses2/SimpanProses2.txt");
		sleep(15);
		system("unzip -o /home/faqih/Documents/FolderProses2/KompresProses2.zip -d /home/faqih/Documents/FolderProses2/");
	}
	return NULL;
}

int main(void)
{
	pthread_create(&tid[0], NULL, &solve, NULL);
	pthread_create(&tid[1], NULL, &solve, NULL);
	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
	return 0;
}

```

Penjelasan :

Pertama kita membuat file FolderProses1, kemudian membuat fungsi untuk mengambil dan me list 10 proses, lalu membuat fungsi untuk menzip file berkestensi .txt =, kemudiian membuat fungsi untuk mengahapus file .txt setelah di zip, selanjutnya membuat program menunggu selama 15 detik, jika sudah membuat fungsi untuk unzip dari file tsb. Lakukan proses diatas untuk proses 1 dan proses 2.

5. Code :

	-Code 1
```
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<termios.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>

static struct termios old, new;
/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  new = old; /* make new settings same as old settings */
  new.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      new.c_lflag |= ECHO; /* set echo mode */
  } else {
      new.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &new); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}
char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void)
{
  return getch_(0);
}

char monster[800];
int Hung_Stat=200;
int Hyg_Stat=100;
int Health_Stat=300;
int det_mandi=20;
int det_health=10;
int det_hyg=30;
int det_hung=10;
int langsung_mandi=0;
int jeda=0;
pthread_t thread[7];
char choose;
int maem_monster=0;
void* tampilan_asli(void*);

void* laper (void *ptr)
{
    while(1)
    {
        // sleep(10);
        while(jeda!=0)
        {

        }
        sleep(1);
        if(det_hung==1)
        {
        	// berkurang 5 tiap 10 det_mandi
            det_hung=10;
            Hung_Stat-=5;
        }
        else det_hung-=1;
        if(jeda==0)
        {


            if(Hung_Stat<=0) // hunger status = 0
            {
                printf("Kelaperan. Mati deh :(\n");
                exit(EXIT_FAILURE);
            }

        }


    }
}

void* hyginis (void *ptr)
{
    while(1)
    {
        // sleep(30);
        while(jeda!=0)
        {

        }
        sleep(1);
        if(det_hyg==1)
        {
            det_hyg=30;
            Hyg_Stat-=10;
        }
        else det_hyg-=1;
        if(jeda==0)
        {

            if(Hyg_Stat<=0)
            {
                printf("Kotor banget. Monster dah mati\n");
                exit(EXIT_FAILURE);
            }
        }

    }
}

void* sehat (void *ptr)
{
    while(1)
    {
        while(jeda!=0)
        {

        }
        sleep(1);
        if(det_health==1)
        {
            det_health=10;
            Health_Stat+=5;
        }
        else det_health-=1;
        if(jeda==0)
        {


            if(Health_Stat<=0)
            {
                printf("Monster mati. Sakit-sakitan sih\n");
                exit(EXIT_FAILURE);
            }

        }

    }
}

void* itungan_mandi (void *ptr)
{
    while(1)
    {
        while(jeda!=0)
        {

        }
        if(langsung_mandi==0)
        {
            sleep(1);
            if(det_mandi==0)
            {
                det_mandi=20;
                langsung_mandi=1;
            }
            else det_mandi-=1;
        }

    }
}
int *maem_shop;
void* ini_shop (void* arg){
    key_t key = 1234;


    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    maem_shop = shmat(shmid, NULL, 0);

    *maem_shop = 0;
}
void* tampilan_asli(void *arg)
{
    while(1){
    while(jeda!=0)
    {

    }
    system("clear");
    printf("Standby Mode\n");
    printf("monster : %s\n",monster);
    printf("Health : %d\n",Health_Stat);
    printf("Hunger : %d\n",Hung_Stat);
    printf("Hygiene : %d\n",Hyg_Stat);
    printf("Food Left : %d\n",maem_monster);
    if(langsung_mandi==0)
    printf("Bath will be ready in %d\n",det_mandi);
    else printf("Bath is ready\n");
    printf("Choice :\n");
    printf("1. Eat\n");
    printf("2. Bath\n");
    printf("3. Battle\n");
    printf("4. Shop\n");
    printf("5. Exit\n");
    sleep(1);
    }
}

void* tampilan_food(void *arg)
{
    while(1){
    while(jeda!=2)
    {

    }
    system("clear");
    printf("Shop Mode\n");
    printf("Shop food stock : %d\n",*maem_shop);
    printf("Your food stock : %d\n",maem_monster);
    printf("Choices\n");
    printf("1. Buy\n");
    printf("2. Back\n");
    sleep(1);
    }
}

int main()
{
    char c;
    int i;
    printf("Beri monster monstermu > ");
    c=getchar();
    while(c!='\n')
    {
        monster[i]=c;
        c=getchar();
        i++;
    }
    pthread_create(&(thread[0]),NULL,laper,NULL);
    pthread_create(&(thread[1]),NULL,hyginis,NULL);
    pthread_create(&(thread[2]),NULL,sehat,NULL);
    pthread_create(&(thread[3]),NULL,itungan_mandi,NULL);
    pthread_create(&(thread[4]),NULL,tampilan_asli,NULL);
    pthread_create(&(thread[5]),NULL,ini_shop,NULL);
    pthread_create(&(thread[6]),NULL,tampilan_food,NULL);

    while(1)
    {
        // tampilan_asli();
        choose=getch();
        if(choose=='1')
        {
            if(maem_monster>0)
            {
                Hung_Stat+=15;
                maem_monster--;
                if(Hung_Stat>200)
	            {
	                Hung_Stat=200;
	            }
            }

        }
        else if(choose=='2')
        {
            if(langsung_mandi==1)
            {
                Hyg_Stat+=30;
                if(Hyg_Stat>100)
                {
                    Hyg_Stat=100;
                }
                langsung_mandi=0;
            }

        }
        else if(choose=='3')
        {
            int statusLawan=100;
            jeda=1;
            while(1)
            {
                system("clear");
                printf("Battle Mode\n");
                printf("Monster's Health : %d\n",Health_Stat);
                printf("Enemy's Health : %d\n",statusLawan);
                printf("Choices\n");
                printf("1. Attack\n");
                printf("2. Run\n");
                char pilih;
                pilih = getch();
                if(pilih=='1')
                {
                    if(Health_Stat>0 && statusLawan>0)
                    {
                        Health_Stat-=20;
                        if(statusLawan>0)
                        {
                            statusLawan-=20;
                        }
                    }
                    if(Health_Stat<0)
                    {
                        Health_Stat=0;
                        jeda=0;
                        break;
                    }
                    else if(statusLawan<0)
                    {
                        statusLawan=0;
                    }
                }
                else if(pilih=='2')
                {
                    jeda=0;
                    break;
                }


            }
        }
        else if(choose=='4')
        {
            jeda=2;
            char pilih;
            while(1)
            {
                pilih = getch();
                if(pilih=='1')
                {
                    if(*maem_shop > 0)
                    {
                        *maem_shop = *maem_shop - 1;
                        maem_monster++;
                    }

                }
                else if(pilih=='2')
                {
                    jeda=0;
                    break;
                }


            }
        }
        else if(choose=='5')
        {
            system("clear");
            printf("Thanks for playing!\n");
            exit(EXIT_FAILURE);
            break;
        }
    }
    pthread_join(thread[0],NULL);
    pthread_join(thread[1],NULL);
    pthread_join(thread[2],NULL);
    pthread_join(thread[3],NULL);
    pthread_join(thread[4],NULL);
    pthread_join(thread[5],NULL);
    pthread_join(thread[6],NULL);
    return 0;
}
```

   -Code 2
```
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include<stdlib.h>
#include<termios.h>
#include<pthread.h>

static struct termios old, new;
/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  new = old; /* make new settings same as old settings */
  new.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      new.c_lflag |= ECHO; /* set echo mode */
  } else {
      new.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &new); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

int *maem_shop;
pthread_t thread[2];

void* shop_ini (void* arg)
{
    key_t key = 1234;

    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    maem_shop = shmat(shmid, NULL, 0);
  
    *maem_shop = 0;

}

void* shopping (void* arg)
{
    while(1)
    {
        system("clear");
        printf("Shop\n");
        printf("Food Stock : %d\n",*maem_shop);
        printf("Choice : \n");
        printf("1. Restock\n");
        printf("2. Exit\n");
        sleep(1);
    }

}
void main()
{
    pthread_create(&(thread[0]),NULL,shop_ini,NULL);
    pthread_create(&(thread[1]),NULL,shopping,NULL);
    char choose;
    while(1)
    {
        choose=getch();
        if(choose=='1')
        {
            *maem_shop = *maem_shop + 1;
        }
        else if(choose=='2')
        {
            break;
        }
    }
}
```

Penjelasan :

   -Penj_Code1=
Pertama, kita inputkan template termios untuk auto enter dengan memasukkan library '#include<termios.h>' juga. Lalu, deklarasikan semua variabel dengan inisialisasi sesuai pada soal. Disini juga diinisialisasai 'jeda=0' yaitu masih berada pada tampilan menu standby, dengan asumsi jika 'jeda=1', maka tampilan battle yang akan ditampilkan, dan jika 'jeda=2', maka tampilan keranjang makanan yang akan ditampilkan. Lalu membuat fungsi-fungsi yang dibutuhkan.

1.Fungsi laper
Pertama, fungsi lapar harus didalam tampilan menu awal standby. Lalu dilakukan pengurangan 5 detik tiap 10 detik_hungry. Terakhir, jika status hungry nya sampai 0, maka monster mati dengan menampilkan 'printf("Kelaperan. Mati deh :(\n")'

2.Fungsi higinis
Pertama, fungsi lapar harus didalam tampilan menu awal standby.Lalu dilakukan pengurangan 10 detik tiap 30 detik hieginis. Terakhir, jika status higinis nya sampai 0, maka monster mati dengan menampilkan 'printf("Kotor banget. Monster dah mati\n")'

3.Fungsi sehat
Pertama, fungsi lapar harus didalam tampilan menu awal standby.Lalu dilakukan penambahan 5 detik tiap 10 detik health. Terakhir, jika status health nya sampai 0, maka monster mati dengan menampilkan 'printf("Monster mati. Sakit-sakitan sih\n")'

4.Fungsi itungan_mandi
Pertama, fungsi lapar harus didalam tampilan menu awal standby. Fungsi ini sendiri digunakan untuk countdown dari 20-0, ketika det_mandi sudah 0, maka set variabel 'langsung_mandi'=1, yang berarti ia mandi dengan mengeprint "Bath is ready\n" pada tampilan yang ada pada fungsi tampilan_asli

5. Fungsi ini_shop
Fungsi ini adalah fungsi yang 


   -Penj_Code2=
