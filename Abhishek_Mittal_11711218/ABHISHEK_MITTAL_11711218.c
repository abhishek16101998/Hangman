#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
char checkmovie(char movie[50],char test[50]);
int count=0,level,inlevel;
char username[20];
FILE *fptr,*fptr2,*fptr3,*fptr4,*fptr5,*fptr6,*uname1;
int main()
{
	int i=0,dot,j=0,life=3,notf,run=1,len,filen;	
char test[50],movie[50],ch,ch1; 
	fptr=fopen("moviesname.txt","r");
	fptr2=fopen("moviesname2.txt","r");
	fptr3=fopen("moviesname3.txt","r");
	fptr4=fopen("moviesname4.txt","r");
	fptr5=fopen("moviesname5.txt","r");
	fptr6=fopen("moviesname6.txt","r");
	uname1=fopen("username1.txt","a+");
	if(fptr==NULL||fptr2==NULL||fptr3==NULL||fptr4==NULL||fptr5==NULL||fptr6==NULL||uname1==NULL)
	{
	printf("\n\t\t\t\t\tFile Missing\nCannot Open");
	filen=1;
    }
    if(filen==1)
    exit(filen);
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t*********WELCOME TO HANGMAN*******\n\n\n");
	printf("\t\t\t\t\tLoading");               
	for(dot=0;dot<5;dot++)
	{
		printf(" . ");
	    sleep(1);
    }
	system("cls");
	printf("\n\n\n\t\t\tInstructions: \n\n\t\t\tA Movie Is Given With Vowels And You Have To Guess The Movie Name.\n\n\t\t\tYou Have 3 Lifes And If You Made A Wrong Guess,then One Life Will Be Deducted.\n\n\t\t\tFor Making A Correct Guess,you Will Be Given 100 Points. ");
	printf("\n\n\n\n\t\t\t\t\tAll The Very Best");
	sleep(15);
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\tEnter Your Name\n\n\n");
	fflush(stdin);
	printf("\n\n\n\t\t\t\t\t\t");
	gets(username);
	fprintf(uname1,"Name: %s\n",username);
	printf("\n\n\n\t\t\t\t\t\tEnter   1: Easy\n\t\t\t\t\t\t\t2: Medium\n\t\t\t\t\t\t\t3: Hard\n\n\t\t\t\t\t\t");
	scanf("%d",&level);
	printf("\n\n\n\t\t\t\t\tEnter 1   OR    2\n\n\t\t\t\t\t");
	scanf("%d",&inlevel);
	printf("\n\n\n\t\t\t\t\tThe Movie Is:  \n\t\t\t\t\t");
	switch(level)
	{
		case 1:
			switch(inlevel)
			{
				case 1:
					while(1)
                 	{
	                    ch1=fgetc(fptr);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr);
	                break;
	            case 2:
	            	while(1)
                 	{
	                    ch1=fgetc(fptr2);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr2);
	                break;
	            default:
	            	printf("\n\n\n\t\t\t\tPlease Enter Valid Choice");
	        }
	        break;
	    case 2:
	    	switch(inlevel)
			{
				case 1:
					while(1)
                 	{
	                    ch1=fgetc(fptr3);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr3);
	                break;
	            case 2:
	            	while(1)
                 	{
	                    ch1=fgetc(fptr4);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr4);
	                break;
	            default:
	            	printf("\n\n\n\t\t\t\tPlease Enter Valid Choice");
	        }
	        break;
	    case 3:
	    	switch(inlevel)
			{
				case 1:
					while(1)
                 	{
	                    ch1=fgetc(fptr5);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr5);
	                break;
	            case 2:
	            	while(1)
                 	{
	                    ch1=fgetc(fptr6);
	                    if(ch1==EOF)
	                    break;
	                    else
	                    {
	                        movie[i]=ch1;
	                        test[i]=ch1;
	                        i++;
                        } 
                    }
                    len=strlen(movie);
                    for(i=0;i<len;i++)
                    {
    	                if(movie[i]=='A')
    	                test[i]='A';
    	                else if(movie[i]=='E')
    	                test[i]='E';
    	                else if(movie[i]=='I')
    	                test[i]='I';
    	                else if(movie[i]=='O')
    	                test[i]='O';
    	                else if(movie[i]=='U')
    	                test[i]='U';
    	                else if(movie[i]==' ')
    		            test[i]=' ';
    	                else
    	                {
    	                    test[i]='_';
				            count++;	
			            } 
	                }
	                puts(test);
	                checkmovie(movie,test);
	                fclose(fptr6);
	                break;
	            default:
	            	printf("\n\n\n\t\t\t\tPlease Enter Valid Choice");
	        }
	        break;
	    default:
	    	printf("\n\n\n\t\t\t\tPleae Enter Valid Input");
    }
return 0;
}



// The Function Starts







char checkmovie(char movie[50],char test[50])
{
        int r,nr,i=0,j=0,life=3,notf,score=0,o,run=1,again,len;	
		char ch,test2[50],ch1;
		len=strlen(movie);    
		for(i=1;i<=life;i=i)
	{
		run=0;
		printf("\n\t\t\t\t\tEnter Your Choice\n\n\t\t\t\t\t");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		score-=100;
		for(j=0;j<len;j++)
		{
			if(ch==movie[j])
			{
			test[j]=ch;
			run=1;
		    }
		}
		if(run==1)
		{
			score+=100;
			printf("\n\n\n\t\t\t\t\tCorrect Input\n\n\n");
			sleep(2);
			printf("\t\t\t\t\tYour Score is %d\n\n\n\t\t\t\t\t",score);
		    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	        printf("\n\n\t\t\t\t\t");
			puts(test);
	    }
		else
		{
			life--;
			printf("\n\n\n\t\t\t\t\tYou Have Entered Wrong Input\n\n\n");
			sleep(2);
			printf("\t\t\t\t\tLives Left:  %d\n\n\n\t\t\t\t\t",life);
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            printf("\n\n\t\t\t\t\t");
			puts(test);		
	    }
	     	if(life==0)
			{
				sleep(1);
				fprintf(uname1,"Score: %d \n",score);
				printf("\n\n\t\t\t\t\tOops You Lost.....");
			    printf("\n\n\n\t\t\t\tYou Have Reached Maximum Number Of Incorrect Tries\n\t\t\t\t\tGame Over!!!!!!!");
			    printf("\n\n\t\t\t\t\tThe Correct Movie Is:  \n\n\t\t\t\t\t");
				puts(movie);
				sleep(3);
			    printf("\n\n\n\n\t\t\t\t\tDo You Wish To Play The Game Again?\n\t\t\t\t\tIf Yes Press 1 else Press 0\n");
		        scanf("%d",&again);
		        if(again==1)
		        {
		           system("cls");
		           main();
		        }
		    }
		    for(r=0;r<len;r++)
		    {
		    if(test[r]=='_')
		    o=1;
		    else 
		    o=0;
		    if(o==1)
		    break;
		    }
		    if(o==0)
		    {
		    fprintf(uname1,"Score: %d \n",score);
		    printf("\n\t\t\t\t\tCongrats You Won\n");
		    printf("\n\n\t\t\t\t\tDo You Wish To Play The Game Again?\n\n\n\t\t\t\t\tIf Yes Press 1 else Press 0\n");
		    scanf("%d",&again);
		    if(again==1)
		    {
		    system("cls");
		    main();
		    }
		    }
		notf=strcmp(test,movie);
		if(notf==0)
		break;
		
    }
}

