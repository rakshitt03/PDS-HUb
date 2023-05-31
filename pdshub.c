#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();
int features();

void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
	wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);

}
}
struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
    char a;
}s;

int main(){     // MAIN FUNCTION
	int i=0;
    char ans; int ch;
	time_t t;
	time(&t);
	char customername;
	char choice;
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		printf("\n                       :::::::::::::::::::::::::::::::::::::");
   printf("\n                       ::                                 ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @      WELCOME TO     @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @       PDS HUB       @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::                                 ::");
   printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
		printf("\n");
		setcolor(10);
		printf("\n\t             322, Jatni, Bhubaneswar\n\t\t\t\t Odisha 752050, INDIA");
   printf("\n\n                              Ph. No.:+91 9889096360");
   printf("\n\n\n                             WELCOMES YOU..............");
   printf("\n\n                             AMENITIES .......\n");
   printf("\n\t\t\t1. 100%% Power backup.\n");
   printf("\t\t\t2. Automatic lift.\n");
   printf("\t\t\t3. Ample parking space.\n");
   printf("\t\t\t4. Round the clock security.\n");
   printf("\t\t\t5. Running hot and cold water.\n");
   printf("\t\t\t6. Free internet service.\n");
   printf("\t\t\t7. 24 hours room service.\n");
   printf("\t\t\t8. Laundary service.\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
        printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Resturant");
		printf("\n-----------------------");
		printf(" \n Enter 7 -> Exit");
		printf("\n-----------------");
		printf("\n");
       scanf("%d",&ch);
       switch (ch)
       {
        case 1:
        system("cls");
        setcolor(10);
        add(features());
        break;
        case 2:
        system("cls");
        setcolor(10);
        list();
        break;
	case 3:
	system("cls");
	setcolor(10);
				delete1();break;
			case 4:
			system("cls");
			setcolor(10);
				search();break;
			case 5:
			system("cls");
			setcolor(10);
				edit();break;
			case 7:
				system("cls");
				setcolor(10);
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
       }
    }
}

int features()
 {
   int typ; char ans;
   system("cls");
   printf("\nChoose the room type:\n1. Sp. Delux\n2. Delux");
   printf("\n3. General\n4. Couple\n5. C. Delux\n");
   scanf("%d",&typ);
   if(typ>5)
     {
       printf("\nWrong choice!! Choose a number between 1-5:");
       features();
     }
   switch(typ)
     {
       case 1:
       system("cls");
       printf("\n Room number            >>>1");
       printf("\n Advance                >>>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Sp.delux");
       printf("\n\n Room charges         >>> Rs.1500 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 3. Balcony available     ");
       printf("\n\n 2. Capacity           >>>      5");
       printf("\n------------------------------------------------------------------");
       printf("\n                     ADDITIONAL FEATURES                        ");
       printf("\n------------------------------------------------------------------");
       printf("\n\n 1.A/C  available ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       break;
       case 2:
       system("cls");
       printf("\n Room number            >>>2\n\n");
       printf("\n Advance                >>>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Delux                                      ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       break;
       case 3:
       system("cls");
       printf("\n Room number            >>>3\n\n");
       printf("\n Advance                >>>325\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> General                                    ");
       printf("\n\n Room charges         >>>Rs.750 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.Geyser available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       break;
       case 4:system("cls");
       printf("\n Room number            >>>4\n\n");
       printf("\n Advance                >>>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Couple                                     ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      1");
       printf("\n\n 2.Capacity           >>>      2");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.Geyser available");
       printf("\n\n 2.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       break;
       case 5:system("cls");
       printf("\n Room number            >>>5\n\n");
       printf("\n Advance                >>>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Couple Delux                                    ");
       printf("\n\n Room charges         >>>Rs.1500 per day");
       printf("\n\n 1. Bed               >>>      1");
       printf("\n\n 2.Capacity           >>>      2");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       break;
     }
     printf("\nAre you Happy with the room? (y/n): ");
     scanf("%c", &ans);
     scanf("%c",&ans);
     if (ans!='y')
        features();
	else
		return typ;
	return 0;
         }

void add(int r_typ)
{
	FILE *f, *g;
	char test;
	
	int prices[5]={1500,1000,750,1000,1500};
	printf("Thanks \nYou Bill is %d",prices[r_typ-1]);
	char detail[10];
	char price[10];
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
	f=fopen(detail,"a+");
	if(f==0)
	{   f=fopen(detail,"w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
        s.a='\n';
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");

		test=getche();
		if(test==27)
			break;

	}

	fclose(f);
	g=fopen("add.txt", "a+");
	fwrite(&s,sizeof(s),1,f);
	fclose(g);
}

void list()
{
	FILE *f;
	int i;
	char detail[10];
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		for(i=0;i<118;i++)
		printf("-");
		printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY: %s \n",s.nationality);
		printf("EMAIL:\t%s\n",s.email);
		printf("PERIOD:\t%s\n",s.period);
		printf("ARRIVAL DATE:\t%s\n",s.arrivaldate);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
	}

	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}
void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%s[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			printf("\nEnter Period :");
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
	}
}

void resturant(){

}