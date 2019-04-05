                                                                                                                                 File: shift3.c                                                                                                                                                                                                                                                                            
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
                if(i_ayo_bangun%3!=0) //gajalan lebih dr 3x
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
                if(i_ayo_tidur%3!=0) //gajalan lebih dr 3x
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
//    pthread_join(thread2,NULL);
//    pthread_join(thread3,NULL);

        printf("1. All Status \n");
        printf("2. Agmal ayo bangun\n");
        printf("3. Iraj ayo tidur\n");

    printf("Masukkan nomor yang tersedia = ");
    scanf("%d", &choose);
    if(choose==1) status_skrg();
    else if(choose==2) sistem_jln=1;
    else if(choose==3) sistem_jln=2;
    else printf("Pilihan tidak tersedia\n");

    while(1)
   {
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
       break;
   }
   return 0;
}
