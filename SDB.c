#include<stdio.h>
#include "SDB.h"
#include "STD.h"
#include <string.h>
#include<stdlib.h>

//#include <stdlib.h>

#define MAX 10
#define MIN 3

SDB* create_SDB(){
	SDB * new_SDB = (SDB*)malloc(sizeof(SDB));// men ela5er 3araft pointer 4ayel 3enwan el SDB el gdeda
	new_SDB->size=0;
	return new_SDB;
}

// 1)function to check if DB is full
bool SDB_IsFull(SDB *ptr)
{
	if(ptr->size ==10){
		return true;
	} 
	else {
		return false;
	}
}



// 2)function to size of DB
uint8 SDB_GetUsedSize(SDB *ptr){
	return (ptr->size);
}

// 3) function to add student in DB
bool SDB_AddEntry(SDB *ptr){
	
	if (ptr->size ==10){
		printf("can not add entry (student) becuase the database is full");
		return false;
	}
	// if DB is not full
	else {
		
	printf("please enter student_ID \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].student_ID));
	printf("please enter student_year \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].student_year));
	printf("please enter course1_ID \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course1_ID));
	printf("please enter course1_grade \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course1_grade));
	printf("please enter course2_ID \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course2_ID));
	printf("please enter course2_grade \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course2_grade));
	printf("please enter course3_ID \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course3_ID));
	printf("please enter course3_grade \n");
	scanf("%d",&(ptr->std_arr[(ptr->size)].course3_grade));
	
	printf("the student_ID is : %d \n",ptr->std_arr[(ptr->size)].student_ID);
			printf("the student_year is : %d \n",ptr->std_arr[(ptr->size)].student_year);
			printf("the course1_ID is : %d\n",ptr->std_arr[(ptr->size)].course1_ID);
			printf("the course1_grade is : %d \n",ptr->std_arr[(ptr->size)].course1_grade);
			printf("the course2_ID is : %d \n",ptr->std_arr[(ptr->size)].course2_ID);
			printf("the course2_grade is : %d \n",ptr->std_arr[(ptr->size)].course2_grade);
			printf("the course3_ID is : %d \n",ptr->std_arr[(ptr->size)].course3_ID);
			printf("the course3_grade is : %d \n",ptr->std_arr[(ptr->size)].course3_grade);
	
	ptr->size +=1;
		
		return true;
		
	}
	
}



//4) function to delete student in DB
void SDB_DeletEntry(uint32 id ,SDB *ptr){
	int i;
if (ptr->size ==0){
		printf("can not delete (student) becuase the database is empty");
		
	}
	// if DB is not full
	else {
		for (i=0;i<ptr->size;i++){
		if (ptr->std_arr[i].student_ID  == id){
			ptr->std_arr[i].student_ID =ptr->std_arr[i].student_year=ptr->std_arr[i].course1_ID=ptr->std_arr[i].course1_grade=ptr->std_arr[i].course2_ID=ptr->std_arr[i].course2_grade=ptr->std_arr[i].course3_ID=ptr->std_arr[i].course3_grade=0;
		ptr->size-=1;
		break;
		}
		}
}
}
//5) function to read student in DB
bool SDB_ReadEntry(uint32 id ,SDB *ptr){
int i;
int flag=0;
if (ptr->size==0){
	printf(" the DB is empty \n");
}

else {
		for (i=0;i<ptr->size;i++){
		if (ptr->std_arr[i].student_ID  == id){
			printf("the student_ID is : %d \n",ptr->std_arr[i].student_ID);
			printf("the student_year is : %d \n",ptr->std_arr[i].student_year);
			printf("the course1_ID is : %d\n",ptr->std_arr[i].course1_ID);
			printf("the course1_grade is : %d \n",ptr->std_arr[i].course1_grade);
			printf("the course2_ID is : %d \n",ptr->std_arr[i].course2_ID);
			printf("the course2_grade is : %d \n",ptr->std_arr[i].course2_grade);
			printf("the course3_ID is : %d \n",ptr->std_arr[i].course3_ID);
			printf("the course3_grade is : %d \n",ptr->std_arr[i].course3_grade);
		flag=1;
		return true;
		break;
		}
		}
}
if (flag==0){
	printf(" student not found \n");
	return false;
}


}

//6) function to get students lis in DB
void get_List(SDB *ptr){
	int i;
if (ptr->size==0){
	printf(" the DB is empty & its size equal 0\n");
}
else{
	for (i=0;i<ptr->size;i++){
			printf(" the ID num %d  is : %d\n",i+1,ptr->std_arr[i].student_ID );
		
		}
	printf(" the num of IDs is : %d\n",ptr->size);
}
}



//7) function to ckeck if ID is exist in DB
bool SDB_IsExist(uint32 id ,SDB *ptr){
int flag=0;
int i;
if (ptr->size==0){
	printf(" the DB is empty \n");
}
else{
	
	for (i=0;i<ptr->size;i++){
		if (ptr->std_arr[i].student_ID  == id){
		flag=1;
		return true;
		break;
		}
		}
		
		if (flag==0){
	printf(" student not found \n");
	return false;
}
	
}

}