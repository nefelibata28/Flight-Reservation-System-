#include <stdio.h>
#include <stdlib.h>
typedef struct
{
 char name[20];
 int ID;
 int status;
} Seat;
Seat seat[5];
void listTakenSeat(int seatEmpty,Seat seat[]);
void assignSeat(int seatOccupied,Seat seat[]);
void removeSeat(int seatEmpty,Seat seat[]);


int main()
{   int seatOccupied,seatEmpty;
    seatOccupied = (seat[0].status) && (seat[1].status) && (seat[2].status) && (seat[3].status) && (seat[4].status);
    seatEmpty = (seat[0].status) || (seat[1].status) || (seat[2].status) || (seat[3].status) || (seat[4].status);
    printf("NTU AIRLINES SEATING RESERVATION PROGRAM:\n 1: listTakenSeat()\n 2: assignSeat()\n 3: removeSeat()\n 4: quit\n");
    int choice;
    do{
    printf("enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:

        listTakenSeat(seatEmpty, seat);
        break;
    case 2:

        assignSeat(seatOccupied, seat);
        break;
    case 3:

        removeSeat(seatEmpty, seat);

        break;
    case 4:

        exit(0);
        break;
    default:
        printf("invalid input\n");
    }
    } while ((0<choice) && (choice<5));
    return 0;
}



void listTakenSeat(int seatEmpty,Seat seat[]){
    int i;
    printf(" listTakenSeat():\n");
 if (seatEmpty == 0)
            printf("The seat assignment list is empty\n");
     return;
    for (i=0; i<5; i++) {
       if(seat[i].status==1)
            printf("the seat is taken%d",seat[i].ID);
             printf("customer name: %s\n", seat[i].name);

        }
    }




void assignSeat(int seatOccupied,Seat seat[]){


   char name;
    int ID;
    char *p;
    printf("assignSeat():\n");
    if (seatOccupied== 1) {
         printf("The plane is full\n");
        return;
    }
    do {
        if (seat[ID-1].status == 1) {
            printf("“Occupied! Please choose another seat\n");
            printf("Enter a  seat  between 1 and 5:\n");
            scanf("%d", &ID);
        }
        else {
            if (ID>=1 && ID<=5) {
                printf("Enter customer name:\n");
                scanf("%s",&name);
                if (p=strchr(seat[ID-1].name,'\n')) {
                    *p = '\0';
                }
               seat[ID-1].status = 1;
                printf("The seat has been assigned successfully\n");

                return;
            }
            else {
                printf("Enter a seat number between 1 and 5:\n");
                scanf("%d", &ID);
            }
        }
    } while (seat[ID-1].status == 1);
}

void removeSeat(int seatEmpty,Seat seat[]){




    char arr[] = {};
    int ID;
    printf("removeSeat\n");
    if (seatEmpty == 0) {
        printf("All the seats are vacant\n");
        return;
    }
    do {
        if (seat[ID-1].status == 0) {
            printf("Empty! Enter another seat number for removal\n");
            scanf("%d", &ID);
        }
        else {
            if ((ID>=1 && ID<=5)){
           seat[ID-1].status = 0;
                strcpy(seat[ID-1].name, arr);
                printf("Removal is successful\n");
                return;
            }
            else {
                printf("Please enter a seat number between 1 and 5\n");
                scanf("%d", &ID);
            }
        }
    } while (seat[ID-1].status != 1);
}


