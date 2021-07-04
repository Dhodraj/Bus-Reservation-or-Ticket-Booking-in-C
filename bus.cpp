#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void first();
void signup();
void login();
void bus();
void booking();
void intro();
void erbook();
void book();
void oobook();
void kobook();
void cobook();
void chbook();
void cancel();
void view();



char pname[100];
char num[100];
char passw[100];
char repassw[100];
int seats=36;
int eseats=36;
int kseats=36;
int cseats=36;
int hseats=36;
int oseats=36;
int arr[36]={0};
int oarr[36]={0};
int koarr[36];
int coarr[36];
int charr[36];


void first()
{
	system("cls");
	printf("****  WELCOME TO BOOKING PORTAL - SALEM  ****\n\n");
	printf("Not having an account ! Create One through Signup\n");
	printf("\nExisting User ! Try Login\n");
	int ch;
	printf("\n1. Signup\n");
	printf("\n2. Login\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1: signup();
		        break;
		case 2: login();
		        break;
		default : printf("\nInvalid Selection\n");
		          break;
	}
}

void signup()
{
	system("cls");
	printf("\nEnter Your Name : ");
	scanf("%s",pname);
	printf("\nEnter Your Number : ");
	scanf("%s",num);
	if(strlen(num)==10)
	{
		printf("\nEnter Password : ");
		scanf("%s",passw);
		if(strlen(passw)>=8)
		{
			printf("\nRe-Enter Password : ");
			scanf("%s",repassw);
			
			if(passw[0]==repassw[0])
			{
				printf("\nAccount Created Go To Login Page by pressing 1 : ");
				int op;
				scanf("%d",&op);
				if(op==1)
				{
					login();
				}
				else
				{
					printf("\nInvalid\n");
				}
			}
		}
		else{
			printf("\nEnter a strong password with 8 or more characters\n");
		}
		
	}
	else
	{
		printf("\nEnter a valid mobile number\n");
	}
}

void login()
{
	system("cls");
	char lognum[100];
	char logpass[100];
	label:
	printf("\nEnter your Number : ");
	scanf("%s",lognum);
	printf("\nEnter your Password : ");
	scanf("%s",logpass);
	
	if(logpass[0]==passw[0])
	{
		intro();
	}
	else{
		printf("\nWrong Mobile number or Password");
		printf("\n\nTry Again\n\n");
		goto label;
	}
}

void intro()
{
	system("cls");
	int ch;
	printf("****  WELCOME TO BUS BOOKING SYSTEM - SALEM  ****\n\n");
	printf("  1. VIEW BUS LIST \n");
	printf("  2. BOOK TICKETS  \n");
	printf("  3. CANCEL BOOKING \n");
	printf("  4. VIEW SEAT STATUS \n");
	printf("  5. LOGIN PAGE  \n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: bus();
		        break;
		case 2: booking();
		        break;
		case 3: cancel();
		        break;
		case 4: view();
		        break;
		case 5: first();
		        break;
		default: printf("Invalid");
	}
		
}

void bus()
{
	system("cls");
	printf("****  WELCOME TO BUS BOOKING SYSTEM - SALEM  ****\n");
	int i,j;
	int n=5;
	char buslist[5][100]={"Salem to Erode","Salem to Ooty","Salem to Kodaikkanal","Salem to Coimbatore","Salem to Chennai"};
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d . %s\n",i+1,buslist[i]);
	}
	
	printf("\n\n Enter 6 to Return : ");
	scanf("%d",&j);
	if(j==6)
	{
		intro();
	}
	else{
		printf("\nInvalid");
	}
	
}

void booking()
{
	system("cls");
	int choice;
	printf("****  WELCOME TO BOOKING PORTAL - SALEM  ****\n\n");
	printf("  1. Salem to Erode \n");
	printf("  2. Salem to Ooty  \n");
	printf("  3. Salem to Kodaikkanal \n");
	printf("  4. Salem to Coimbatore \n");
	printf("  5. Salem to Chennai \n");
	
	printf("\n\n Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: erbook();
		        break;
		case 2: oobook();
		        break;
		case 3: kobook();
		        break;
		case 4: cobook();
		        break;
		case 5: chbook();
		        break;
		default: printf("\nInvalid");
		         intro();
		         break;
	}	
	
}


void erbook()
{
	system("cls");
	int i,j,k=1;
	int amnt=75;
	printf("\n");
	
	printf("\nNOTE : 0 REFERS TO UNERSERVED, 1 REFERS TO RESERVED\n");
	printf("Ticket Price --> %d\n",amnt);
	printf("Total Number of Seats available : %d\n\n",eseats);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,arr[k-1]);
			k++;
		}
		printf("\n");
	}
	
	int confirm,x,y,z,tick,seatno[eseats],temp[eseats]={0};
	printf("\n\nNo.Of Tickets : ");
	scanf("%d",&tick);
	
	for(z=0;z<tick;z++)
	{
		printf("\nENter Seat Number : ");
		scanf("%d",&seatno[z]);
		
		x=seatno[z];
		
		if(arr[x-1]==1 || x>seats)
		{
			printf("\nTry another\n");
			z--;
		}
		else{
			arr[x-1]={1};
			eseats--;
		}
	}
	
	printf("\n\n Total Booking Amount : %d",amnt*tick);
	
	printf("\n\n Pay to this UPI ID : sdr192@okaxis\n");
	
	printf("\n Press 1 to Confirm Payment : ");
	scanf("%d",&confirm);
	
	if(confirm==1)
	{
		intro();
	}
	else{
		printf("\nInvalid\n");
	}	
	
}

void oobook()
{
	system("cls");
	int i,j,k=1;
	int amnt=185;
	printf("\n");
	printf("\nNOTE : 0 REFERS TO UNERSERVED, 1 REFERS TO RESERVED\n");
	printf("Ticket Price --> %d\n",amnt);
	printf("Total Number of Seats available : %d\n\n",oseats);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,oarr[k-1]);
			k++;
		}
		printf("\n");
	}
	
	int confirm,x,y,z,tick,seatno[oseats],temp[oseats]={0};
	printf("\n\nNo.Of Tickets : ");
	scanf("%d",&tick);
	
	for(z=0;z<tick;z++)
	{
		printf("\nENter Seat Number : ");
		scanf("%d",&seatno[z]);
		
		x=seatno[z];
		
		if(oarr[x-1]==1 || x>seats)
		{
			printf("\nTry another\n");
			z--;
		}
		else{
			oarr[x-1]={1};
			oseats--;
		}
	}
	
	printf("\n\n Total Booking Amount : %d",amnt*tick);
	
	printf("\n\n Pay to this UPI ID : sdr192@okaxis\n");
	
	printf("\n Press 1 to Confirm Payment : ");
	scanf("%d",&confirm);
	
	if(confirm==1)
	{
		intro();
	}
	else{
		printf("\nInvalid\n");
	}	
	
}


void kobook()
{
	system("cls");
	int i,j,k=1;
	int amnt=125;
	printf("\n");
	
	printf("\nNOTE : 0 REFERS TO UNERSERVED, 1 REFERS TO RESERVED\n");
	printf("Ticket Price --> %d\n",amnt);
	printf("Total Number of Seats available : %d\n\n",kseats);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,koarr[k-1]);
			k++;
		}
		printf("\n");
	}
	
	
	int confirm,x,y,z,tick,seatno[kseats],temp[kseats]={0};
	printf("\n\nNo.Of Tickets : ");
	scanf("%d",&tick);
	
	for(z=0;z<tick;z++)
	{
		printf("\nENter Seat Number : ");
		scanf("%d",&seatno[z]);
		
		x=seatno[z];
		
		if(koarr[x-1]==1 || x>seats)
		{
			printf("\nTry another\n");
			z--;
		}
		else{
			koarr[x-1]={1};
			kseats--;
		}
	}
	
	printf("\n\n Total Booking Amount : %d",amnt*tick);
	
	printf("\n\n Pay to this UPI ID : sdr192@okaxis\n");
	
	printf("\n Press 1 to Confirm Payment : ");
	scanf("%d",&confirm);
	
	if(confirm==1)
	{
		intro();
	}
	else{
		printf("\nInvalid\n");
	}	
	
}

void cobook()
{
	system("cls");
	int i,j,k=1;
	int amnt=155;
	printf("\n");
	
	printf("\nNOTE : 0 REFERS TO UNERSERVED, 1 REFERS TO RESERVED\n");
	printf("Ticket Price --> %d\n",amnt);
	printf("Total Number of Seats available : %d\n\n",cseats);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,coarr[k-1]);
			k++;
		}
		printf("\n");
	}
	
	
	int confirm,x,y,z,tick,seatno[cseats],temp[cseats]={0};
	printf("\n\nNo.Of Tickets : ");
	scanf("%d",&tick);
	
	for(z=0;z<tick;z++)
	{
		printf("\nENter Seat Number : ");
		scanf("%d",&seatno[z]);
		
		x=seatno[z];
		
		if(coarr[x-1]==1 || x>cseats)
		{
			printf("\nTry another\n");
			z--;
		}
		else{
			coarr[x-1]={1};
			cseats--;
		}
	}
	
	printf("\n\n Total Booking Amount : %d",amnt*tick);
	
	printf("\n\n Pay to this UPI ID : sdr192@okaxis\n");
	
	printf("\n Press 1 to Confirm Payment : ");
	scanf("%d",&confirm);
	
	if(confirm==1)
	{
		intro();
	}
	else{
		printf("\nInvalid\n");
	}	
	
}

void chbook()
{
	system("cls");
	int i,j,k=1;
	int amnt=400;
	printf("\n");
	
	printf("\nNOTE : 0 REFERS TO UNERSERVED, 1 REFERS TO RESERVED\n");
	printf("Ticket Price --> %d\n",amnt);
	printf("Total Number of Seats available : %d\n\n",hseats);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,coarr[k-1]);
			k++;
		}
		printf("\n");
	}
	
	
	int confirm,x,y,z,tick,seatno[hseats],temp[hseats]={0};
	printf("\n\nNo.Of Tickets : ");
	scanf("%d",&tick);
	
	for(z=0;z<tick;z++)
	{
		printf("\nENter Seat Number : ");
		scanf("%d",&seatno[z]);
		
		x=seatno[z];
		
		if(charr[x-1]==1 || x>hseats)
		{
			printf("\nTry another\n");
			z--;
		}
		else{
			charr[x-1]={1};
			hseats--;
		}
	}
	
	printf("\n\n Total Booking Amount : %d",amnt*tick);
	
	printf("\n\n Pay to this UPI ID : sdr192@okaxis\n");
	
	printf("\n Press 1 to Confirm Payment : ");
	scanf("%d",&confirm);
	
	if(confirm==1)
	{
		intro();
	}
	else{
		printf("\nInvalid\n");
	}		
}


void cancel()
{
	system("cls");
	int choice;
	int seat,n,cn;
	printf("\n****   WELCOME TO TICKET CANCELLING PORTAL   ****\n\n");
	printf("  1. Salem to Erode \n");
	printf("  2. Salem to Ooty  \n");
	printf("  3. Salem to Kodaikkanal \n");
	printf("  4. Salem to Coimbatore \n");
	printf("  5. Salem to Chennai \n");
	
	printf("\n\n Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\nNumber of seats you need to cancel--> ");
		        scanf("%d",&n);
		        for(int i=0;i<n;i++)
		        {
		        printf("\nEnter Your Seat Number --> ");
		        scanf("%d",&seat);
		        if(arr[seat-1]==1 && seat<36)
		        {
		        	arr[seat-1]={0};
		        	printf("\n Ticket Cancelled\n");
		        	seats++;
		        }
		        else{
		        	printf("\nEnter a Valid seat number ");
				}
			    }
			    
			    printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        
		        break;
		        
		case 2: printf("\n Number of seats you need to cancel--> ");
		        scanf("%d",&n);
		        for(int i=0;i<n;i++)
		        {
		        printf("\nEnter Your Seat Number --> ");
		        scanf("%d",&seat);
		        if(oarr[seat-1]==1 && seat<36)
		        {
		        	oarr[seat-1]={0};
		        	printf("\n Ticket Cancelled\n");
		        	oseats++;
		        }
		        else{
		        	printf("\nEnter a Valid seat number ");
				}
			    }
			    
			    printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		case 3: printf("\n Number of seats you need to cancel--> ");
		        scanf("%d",&n);
		        for(int i=0;i<n;i++)
		        {
		        printf("\nEnter Your Seat Number --> ");
		        scanf("%d",&seat);
		        if(koarr[seat-1]==1 && seat<36)
		        {
		        	koarr[seat-1]={0};
		        	printf("\n Ticket Cancelled\n");
		        	kseats++;
		        }
		        else{
		        	printf("\nEnter a Valid seat number ");
				}
			    }
			    
			    printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		case 4: printf("\n Number of seats you need to cancel--> ");
		        scanf("%d",&n);
		        for(int i=0;i<n;i++)
		        {
		        printf("\nEnter Your Seat Number --> ");
		        scanf("%d",&seat);
		        if(coarr[seat-1]==1 && seat<36)
		        {
		        	coarr[seat-1]={0};
		        	printf("\n Ticket Cancelled\n");
		        	cseats++;
		        }
		        else{
		        	printf("\nEnter a Valid seat number ");
				}
			    }
			    
			    printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		case 5: printf("\n Number of seats you need to cancel--> ");
		        scanf("%d",&n);
		        for(int i=0;i<n;i++)
		        {
		        printf("\nEnter Your Seat Number --> ");
		        scanf("%d",&seat);
		        if(charr[seat-1]==1 && seat<36)
		        {
		        	charr[seat-1]={0};
		        	printf("\n Ticket Cancelled\n");
		        	hseats++;
		        }
		        else{
		        	printf("\nEnter a Valid seat number ");
				}
			    }
			    
			    printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		default: printf("\nInvalid");
	             intro();
		         break;
	}	
	
	
}

void view()
{
	
	system("cls");
	int choice,cn;
	printf("****  SEAT STATUS OF BUSSES - SALEM  ****\n\n");
	printf("  1. Salem to Erode \n");
	printf("  2. Salem to Ooty  \n");
	printf("  3. Salem to Kodaikkanal \n");
	printf("  4. Salem to Coimbatore \n");
	printf("  5. Salem to Chennai \n");
	
	printf("\n\n Enter Your Choice : ");
	scanf("%d",&choice);
	int k=1;
	switch(choice)
	{
		case 1: for(int i=0;i<9;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,arr[k]);
			k++;
		}
		printf("\n");
	}
	
		        printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        
		        break;
		        
		        
		case 2: for(int i=0;i<9;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,oarr[k]);
			k++;
		}
		printf("\n");
	}
	
		        printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		case 3: for(int i=0;i<9;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,koarr[k]);
			k++;
		}
		printf("\n");
	}
	
		        
		        printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		case 4: for(int i=0;i<9;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,coarr[k]);
			k++;
		}
		printf("\n");
	}
	
		        
		        printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		case 5: for(int i=0;i<9;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\t%d . %d\t",k,charr[k]);
			k++;
		}
		printf("\n");
	}
	
		        
		        printf("\n\nEnter 1 to Return to Home page : ");
			    scanf("%d",&cn);
			    
			    if(cn==1)
			    {
			    	intro();
				}
				else{
					printf("\nInvalid!\n");
				}
		        break;
		        
		        
		default: printf("\nInvalid");
		intro();
		         break;
	}	
	
	
}
 
int main()
{
	intro();
}
