#include<stdio.h>
#include "SDB.h"
#include "STD.h"
#include <string.h>


void SDB_APP( SDB *ptr){
	
while(1){
		uint8 option;
printf("\n please choose from those options\n");
printf("1.to add entry so  enter1\n");
printf("2.to get used size in database so enter2\n");
printf("3.to read student data enter3\n");
printf("4.to get the list of all student IDs so enter4\n");
printf("5.to check if ID is exist enter5\n");
printf("6.to delete studenr data enter6\n");
printf("7.to check if database is full enter7\n");
printf("8.to exit enter0\n");
scanf("%d",&option);

if (option==0){
		break;
	}
	
SDB_action(option, ptr);
}
}

void SDB_action(uint8 option, SDB *ptr ){
	uint32 id ;
	bool x;
	int yes,i;
	
	// 1) enter student
	 if (option==1){
		 
		printf("if you get 1 DB is added successfuly if 0 it is not\n");
		printf("please enter at least 3 students & max 10 \n"); 
	
		// to check if the DB more than 3 students & less than 10
		for (i=0;i<10;i++){
			if(i>=3){
				printf("do you want to add another student if you want enter 1 else enter 0");
				scanf("%d",&yes);
				
				if (yes==0){
					break;
					
				}
				else if(yes==1){
					x=SDB_AddEntry(ptr);
					printf("%d",x);
				}
				else{
					printf("please enter one of these options not another \n"); 
				}
			}
			else{
				x=SDB_AddEntry(ptr);
		printf("%d",x);
			}
		
		}
		SDB_AddEntry(ptr);
		
		
		
	}
	//2) get SDB size
	else if (option==2){
		i=SDB_GetUsedSize(ptr);
		printf("%d",i);
	}
	//3)read data from DB
	else if (option==3){
		printf("please enter student ID");
		scanf("%d",&id);
		x=SDB_ReadEntry( id ,ptr);
		printf("**************************************************\n");
		printf("if you get 1 data is exist if 0 this ID is not in your DB\n");
		printf("%d",x);
	}
	//4)get student list
	else if (option==4){
		get_List(ptr);
		
	}
	//5) check if student is exist
	else if (option==5){
		printf("please enter student ID");
		scanf("%d",&id);
		x=SDB_IsExist( id ,ptr);
		printf("**************************************************\n");
		printf("if you get 1 data is exist if 0 this ID is not in your DB\n");
		printf("%d",x);
		
	}
	//6) delete student
	else if (option==6){
		printf("please enter student ID\n");
		scanf("%d",&id);
		
		SDB_DeletEntry( id ,ptr);
	}
	//7) check if DB is full
	else if (option==7){
		printf("**************************************************\n");
		x=SDB_IsFull(ptr);
		printf("if you get 1 data is exist if 0 this ID is not in your DB\n");
		printf("%d",x);
	}
	else{
		
	}
}