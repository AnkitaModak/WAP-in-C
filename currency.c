#include<stdio.h>

int main()
{
    int amt, notes;

    printf ("Enter your desired amount:");

    scanf("%d", &amt);

    if(amt > 100) {

        notes = amt / 100;

        amt -= notes *100;

        printf("%d no. of 100 rupees note needed\n" ,notes);}

    if(amt> 50){

        notes =amt /50;

        amt -=notes * 50;

        printf("%d no. of 50 rupees note needed\n", notes);

    }

    if(amt > 10) {

        notes = amt /10;

        amt -= notes *10;

        printf("%d no. of 10 rupees note needed\n" ,notes);
}
    if(0 < amt || amt <10) {

        printf("you keep the change😎😎");}
    return 0;
}