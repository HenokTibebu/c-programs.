//Library fine program that has the user input bookID, due date and return date
#include <stdio.h>
int main(){
    int bookid, duedate, returndate, days_overdue;
    days_overdue = returndate - duedate;

    printf("Enter the bookID, due date and return date:");
    scanf("%d%d%d",&bookid,&duedate,&returndate);
    days_overdue = returndate - duedate;
    
    if (duedate <= returndate){
        printf("The bookID , due date and return date are %d, %d and %d\n",bookid,duedate,returndate);
        printf("The days overdue are %d\n",days_overdue);
        
        if (days_overdue > 0 && days_overdue <= 7){
            int finerate = 20 , fineamount;
            fineamount = days_overdue * finerate;
            printf("The fine rate and fine amount are %d Ksh per day and %d Ksh\n",finerate,fineamount);
        }
        else if (days_overdue >= 8 && days_overdue <= 14){
            int finerate = 50, fineamount;
            fineamount = days_overdue * finerate;
            printf("The fine rate and fine amount are %d Ksh per day and %d Ksh\n",finerate,fineamount);
        }
        else if (days_overdue >=15){
        int finerate = 100, fineamount;
        fineamount = days_overdue * finerate;
        printf("The fine rate and fine amount are %d Ksh per day and %d Ksh\n",finerate,fineamount);
        }
        else{
            printf("Thanks for returning the book on time");
        }
    }
    else{
        printf("Invalid due date and return date");
     }
    
    return 0;
}