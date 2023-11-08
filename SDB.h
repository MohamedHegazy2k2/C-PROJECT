#include "STD.h"
#ifndef SDB_H_
#define SDB_H_

#define MAX 10
#define MIN 3
typedef struct simpleDb {
	uint32 student_ID;
	uint32 student_year;
	uint32 course1_ID;
	uint32 course1_grade;
	uint32 course2_ID;
	uint32 course2_grade;
	uint32 course3_ID;
	uint32 course3_grade;
	struct simpleDb * next;
	
}student;// student is the new struct name instead of struct simpleDb

//define this queue to make student DB contanis element of student data type which has all student data
typedef struct DB_array {
	student std_arr[10];
	int size;
}SDB;
SDB* create_SDB();
void SDB_APP( SDB *ptr);
void SDB_action(uint8 option, SDB *ptr );
bool SDB_IsFull(SDB *ptr);
uint8 SDB_GetUsedSize(SDB *ptr);
bool SDB_AddEntry(SDB *ptr);
void SDB_DeletEntry(uint32 id ,SDB *ptr);
bool SDB_ReadEntry(uint32 id ,SDB *ptr);
void get_List(SDB *ptr);
bool SDB_IsExist(uint32 id ,SDB *ptr);



#endif