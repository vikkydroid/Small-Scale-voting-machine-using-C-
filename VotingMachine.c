#include<stdio.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "NARENDRA MODI"
#define CANDIDATE2 "RAHUL GANDHI"
#define CANDIDATE3 "ARVIND KEJRIWAL"
#define CANDIDATE4 "MAMATHA BANNERJI"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote()
{
int choice;

printf("\n\n####Please choose your Candidate ####\n\n");

printf("\n CANDIDATE NAME\t\tPARTY NAME\t\t\t");
printf("\n\n 1. %s \tBJP\t\t\t", CANDIDATE1);
printf("\n 2. %s\tINC\t\t\t", CANDIDATE2);
printf("\n 3. %s\tAAP\t\t\t", CANDIDATE3);
printf("\n 4. %s\tTMC\t\t\t", CANDIDATE4);
printf("\n 5. %s\tNIL\t\t\t", "None of These");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice)
{
    case 1: votesCount1++;
    break;

    case 2:
    votesCount2++;
    break;

    case 3: votesCount3++;
    break;

    case 4: votesCount4++;
    break;

    case 5: spoiledtvotes++;
    break;

    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for voting!!");
}

void votesCount()
{
printf("\n\n\t\t ##### Voting Statistics #### \n\n\t\t");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate()
{
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");



}

int main()
{
int i, b;
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2021 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();
break;
case 2:
    printf("\n\n\n\n");
    printf("\t\t enter password to unlock\n\n");
    scanf("\n%d",&b);
    if(b==11111)
    {
        votesCount();
         break;
    }
    else{

        printf("\t\t Wrong Password\n\n");
    }

break;
case 3: printf("\n\n\n\n");
    printf("\t\t Enter password to unlock\n\n");
    scanf("\n%d",&b);
    if(b==11111)
    {
        getLeadingCandidate();
         break;
    }
    else{

        printf("\t\t Wrong Password\n\n");
    }
break;

default: printf("\n Shutting down...");
}

}while(choice!=0);

//hold the screen
getchar();

return 0;
}