  GNU nano 2.5.3                                                                                                                                   File: shift3.c                                                                                                                                                                                                                                                                            

#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void status_skrg();
void agmal_bangun();
void iraj_bobo();
void pilih();

int Spirit_Status=100;
int WakeUp_Status=0;

int sistem_jln[2]={0}; // 0 untuk iraj_bobo ; 1 untuk agmal_bangun

int i_ayo_bangun=0;
int i_ayo_tidur=0;

void status_skrg()
{
        printf("Agmal WakeUp_Status = %d \n", WakeUp_Status);
        printf("Iraj Spirit_Status = %d \n", Spirit_Status);
}


void agmal_bangun()
{
        while(1)
        {
                while(!sistem_jln[1]);
                if(i_ayo_bangun%3!=0)
                {
                        i_ayo_bangun++;
                        WakeUp_Status+=15;

                }
                else
                {
                        printf("Fitur Iraj Ayo Tidur disabled 10 s\n");
                        sleep(10);
                }
                sistem_jalan[1]=0;
        }
}

void iraj_bobo()
{
        while(1)
        {
                while(!sistem_jln[0]);
                if(i_ayo_tidur%3!=0)
                {
                        i_ayo_tidur++;
                        Spirit_Status-=20;
                }
                else
                {
                        printf("Agmal Ayo Bangun disabled 10 s\n");
                        sleep(10);
                }
                sistem_jalan[0]=0;
        }
}

void pilih()
{
        printf("1. All Status \n");
        printf("2. Agmal ayo bangun\n");
        printf("3. Iraj ayo tidur\n");
}

int main()
{
    pthread_t thread1, thread2;//inisialisasi awal
    int  iret1, iret2;

    iret1 = pthread_create( &thread1, NULL, agmal_bangun, NULL); //membuat thread pertama
    if(iret1) //jika eror
    {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
        exit(EXIT_FAILURE);
    }

    iret2 = pthread_create( &thread2, NULL, iraj_bobo, NULL);//membuat thread kedua
    if(iret2)//jika gagal
    {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
        exit(EXIT_FAILURE);
    }




    if(WakeUp_Status >=100)
    {
        printf("Agmal Terbangun,mereka bangun pagi dan berolahraga\n");
        break;
    }
    else if(SpiritStatus <=0)
    {
        printf("Iraj ikut tidur, dan bangun kesiangan bersama Agmal \n");
        break;
     }
}
