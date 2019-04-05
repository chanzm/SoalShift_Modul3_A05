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
