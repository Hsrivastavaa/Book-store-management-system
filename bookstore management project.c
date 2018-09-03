#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
main()


{    
        int i,l,j,k,key1,key2,key3,m,n;
		char r[50],s[50],x[50],y[50],a[50],b[50],c[50],d[50];
        char q[]="ANKUR SHUKLA";
        char e[]="THIS BOOK IS ISSUED TO ";
        char f[]="YOUR ADDRESS IS ";
        char g[]=" NUMBER IS ";
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      ++               ANKUR                     ++");
	printf("\n\t\t\t                                      ++            LIBRARY HOUSE                ++");
	printf("\n\t\t\t                                      ++          A PALACE OF BOOKS              ++");
	printf("\n\t\t\t                                      ++          TRUST US,LOVE US               ++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	
	
	printf("\n");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*********************************************\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t WELCOME\t\t\t   **\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t           **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t   TO   \t\t   \t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\tMY PROJECT \t\t\t   **\n");;
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t  OF BOOKSTORE MANAGEMENT\t\t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	/*sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t    &\t\t\t\t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");*/
	/*sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t       BIRTH STONES \t  \t       **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");*/
	printf("\t\t\t\t\t\t\t\t*********************************************\n");
	
	getch();
	
	
	system("cls");
	puts("\n\n\n\t\tENTER YOUR USERNAME :-");
	gets(r);
	puts("\n\t\tENTER THE PASSWORD");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		
	 if(s[i]==q[i])
	 {  
	    //while(i=0)
//		printf("\n\t\tPASSWORD ACCEPTED");
		printf("\n\n\t\tPRESS ENTER TO CONTINUE");
	
		getch();
		b:
		system("cls");
		printf("\n\n\n\t\t1 :- TO KNOW ABOUT DIFFERENT BOOKS AVAILABLE");
		printf("\n\t\t2 :- TO KNOW ABOUT PRICES OF DIFFERENT BOOKS");
		printf("\n\t\t3 :- TO KNOW ABOUT DIFFERENT LOCATION OF  DIFFERENT BOOKS");
		printf("\n\t\t4 :- TO PRINT YOUR RECEIPT");
		
		printf("\n\t\t     enter your choice  :- ");
	scanf("%d",&key1);
	switch(key1)
	{
		case 1:
			system("cls");
			printf("\n\n\n\t\tDIFFERENT BOOKS AVAILABLE ARE :-");
			printf("\n\t\t1  :- THE JUNGLE BOOK");
			printf("\n\t\t2  :- THE MERCHANT OF VANICE");
			printf("\n\t\t3  :- MAALGUDI DAYS");
            printf("\n\t\t4  :- TRIGNOMETRIC IDENTITIES");
            printf("\n\t\t5  :- MECHANICS");
            	printf("\n\n\n\n\t\t\t\t  5:- TO GO TO MAIN MENU ");
			printf("\n\t\t\t\t  6:- TO EXIT PRESS HERE ");
		//	getch();
			printf("\n\t\t\t\t   enter your choice :-"); 
			scanf("%d",&key2);
			switch(key2)
			{
				 
				 case 5:
					goto b;
					case 6:
							//case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			break;
		getch();	
	}
		case 2:
			system("cls");
			printf("\n\n\n\t\tCOST OF BOOKS ARE :- ");
			printf("\n\t\t1  :- THE JUNGLE BOOK  -- 260 RS");
			printf("\n\t\t2  :- THE MERCHANT OF VANICE -- 290 RS");
			printf("\n\t\t3  :- MAALGUDI DAYS -- 150 RS");
			printf("\n\t\t4  :- TRIGNOMETRIC IDENTITIES -- 780 RS");
			printf("\n\t\t5  :- MECHANICS -- 660 RS");
				printf("\n\n\n\n\t\t\t\t  5:- TO GO TO MAIN MENU ");
			printf("\n\t\t\t\t  6:- TO EXIT PRESS HERE ");
			//getch();
			printf("\n\t\t\t\t   enter your choice :-"); 
			scanf("%d",&key2);
			switch(key2)
			{
				 
				 case 5:
					goto b;
					case 6:
							//case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			break;
		getch();
	}
		case 3:
			system("cls");
			printf("\n\n\n\t\tLOCATION OF DIFFERENT BOOKS IN THE LIBRARY IS  :-");
			printf("\n\t\t1  :-  THE JUNGLE BOOK          @SELF NO.-3,DRAWR NO.-6,POSITION NO.-5");
			printf("\n\t\t1  :-  THE MERCHANT OF VANICE   @SELF NO.-4,DRAWR NO.-7,POSITION NO.-4");
            printf("\n\t\t1  :-  MAALGUDI DAYS            @SELF NO.-5,DRAWR NO.-3,POSITION NO.-2");
            printf("\n\t\t1  :-  TRIGNOMETRIC IDENTITIES  @SELF NO.-6,DRAWR NO.-2,POSITION NO.-3");
            printf("\n\t\t1  :-  MECHANICS                @SELF NO.-7,DRAWR NO.-4,POSITION NO.-6");
            printf("\n\n\n\n\t\t\t\t  5:- TO GO TO MAIN MENU ");
			printf("\n\t\t\t\t  6:- TO EXIT PRESS HERE ");
			//getch();
			printf("\n\t\t\t\t   enter your choice :-"); 
			scanf("%d",&key2);
			switch(key2)
			{
				 
				 case 5:
					goto b;
					case 6:
							//case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			break;
		getch();
		
	}
        case 4:
        	system("cls");
        	printf("\n\n\n\t\tENTER YOUR NAME :-");
        	scanf("%s",&a);
        	printf("\n\t\tENTER YOUR ADDRESS  :- ");
        	scanf("%s",&b);
        	system("cls");
        	printf("\n\n\n\t\tENTER YOUR TYPE OF ID  :- ");
        	scanf("%s",&c);
        	printf("\n\t\tENTER YOUR ID NUMBER  :- ");
        	scanf("%d",&d);
        	system("cls");
        	printf("\n\n\n\t\tYOUR RECEIPT IS :-");
        	strcat(e,a);
        	printf("\n\t\t%s",e);
        	strcat(f,b);
        	printf("\n\t\t%s",f);
  /*      	strcat(g,d);
        	strcat(c,g);
        	printf("\n\t\t");
        	puts(c);*/
        		printf("\n\n\n\n\t\t\t\t  5:- TO GO TO MAIN MENU ");
			printf("\n\t\t\t\t  6:- TO EXIT PRESS HERE ");
			//getch();
			printf("\n\t\t\t\t   enter your choice :-"); 
			scanf("%d",&key2);
			switch(key2)
			{
				 
				 case 5:
					goto b;
					case 6:
							//case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			break;
		getch();
	}


		case 5:
		break;
		getch();	
			
			
				//default :
	//printf("\nWrong choice");
	//goto b; 	
			

						//break;
			}
			
            //getch();
	}

	//	getch();
		
		//break;
		
	 
	 else
	 {
		printf("\n\t\tPASSWORD DENIED");
	//	return(0);
	//	goto a;
	 }
    }
   // getch();
    //return(0);
}

