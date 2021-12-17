#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include "sistem.c"


//kelompok
	
	int menu_utama(){
				int pilih1;
				printf("\n======================================= PT. KAI ====================================\n");
				
				printf("========================= TRAIN SCHEDULING & TICKET BOOKING =========================\n");
				
		        printf("Pilih Role Anda");
		        printf("\n1. USER");
		        printf("\n2. ADMIN");
		        printf("\n3. KELUAR");
		        printf("\n-------------------------------------------\n");
		        printf("Pilihan Menu => ");
		        scanf("%d",&pilih1);
		        printf("\n===========================================\n");
		        if(pilih1>3){
		     		system("cls");
		            printf("#Pilih Sesuai Daftar Menu !!!#");
				}switch(pilih1){
					case 1:
						{
						menu_user();
						break;	
						}
					case 2:
						{
						printf("===================================== Hanya Yang Berkepentingan =====================================");
						login_admin();
						break;
						}
					case 3:
						{
						system("exit");
						}
						
				}return 0;
		}


