// C structures
#include <stdio.h>
#include <string.h>

struct student{
    char name[20],email[30],reg_no[20], phone[11];
    int id;
    float marks;
}student1,student2;
int main() {
    strcpy(student1.name,"Henok");
    strcpy(student1.email,"mike@gmail.com");
    strcpy(student1.reg_no,"BCS-05-0135/2024");
    strcpy(student1.phone,"0798675463");
    student1.id = 20019;
    student1.marks = 70.5;
    
    printf("Name:%s\n",student1.name);
    printf("Email:%s\n",student1.email);
    printf("Reg No:%s\n",student1.reg_no);
    printf("Phone No:%s\n",student1.phone);
    printf("ID:%d\n",student1.id);
    printf("Marks:%.2f\n",student1.marks);
   
    return 0;
}