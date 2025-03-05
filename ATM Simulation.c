#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<time.h>

void main()
{
    int asdf,zxcv,lk,nm,yt,option,bn,bn1;
    FILE *fp,*fp2;
    int gdriver,gmode,x,q,y,g1,g11;
    int f,b,p,k,w,j,i,c,m,opt,s,g,qwer,dell,multiplesof5;
    long int cd,deposit,money,cash,cash1,integer[4];
    char a[4],v,str0[25],str1[25],str2[25],str3[25],str[25];
    time_t current_time;
    char* c_time_string;

    asdf=0;
    bn=0;
    bn1=0;
    deposit=2000;
    gdriver=DETECT;
    b=0;
    p=0;
    k=0;
    w=0;
    j=0;
    c=0;
    m=1234;
    g=0;
    qwer=0;
    dell=0;

    clrscr();

    do
    {
        clrscr();
        printf("\n\n\n \t\t * * * * * * * *\n");
        if(dell==0) delay(800);
        printf(" \t\t * * * * * * * *\n");
        if(dell==0) delay(800);
        printf(" \t\t * * * * * * * * * *\n");
        if(dell==0) delay(800);
        printf(" \t\t * * * * * * * * * * *\n");
        if(dell==0) delay(800);
        printf(" \t\t * * * * * *\n");
        if(dell==0) delay(1500);
        dell++;

        if(b==0)
        {
            initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
            x=getmaxx()/2;
            y=getmaxy()/2;
            for(q=20;q<=200;q++)
            {
                setcolor(q/10);
                arc(x,y,0,180,10+q);
                delay(5);
            }
            b++;
        }

        printf("\n\n\n\t\t WELCOME TO VAPA BANK \n\n");
        printf("\n\n\n\t\t ENTER YOUR PIN NUMBER \n\n\n\n\n\n\n\n\t\t");

        for(i=0;i<5;i++)
        {
            a[i]=getch();
            if(a[i]=='\b')
            {
                clrscr();
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t YOU HAVE CANCELLED THE TRANSACTION\t\t\t");
                printf("\n\t\t THANKS FOR VISITING VAPA BANK \t\t\t");
                delay(1800);
                w++;
                j=4;
                break;
            }
            if(i<4) printf("*");
        }

        closegraph();

        if(w==0)
        {
            c=atoi(a);
            if(c!=m)
            {
                k++;
                p++;
                printf("\n\t\t THE PIN WHICH YOU HAVE ENTERED IS WRONG\n\n\n\n\n");
                v=getch();
                if(k==4)
                { 
                    clrscr();
                    printf("\n\n\n\n\n\n\n\n\n\n\n\tYOU DID FOUR UNSUCCESSFULL PIN ENTERING TRY AGAIN AFTER 24 HOURS");
                    printf("\n\t THANKS FOR VISITING VAPA BANK ");
                    delay(1800);
                    exit(0);
                    j=4;
                }
            }
            else
            {
                p=0;
                printf("\n\t\t***************************************************\n");
                printf("\t\t********* ENTER 1 FOR CASH DEPOSIT *********\n");
                printf("\t\t********* ENTER 2 FOR CASH BALANCE *********\n");
                printf("\t\t********* ENTER 3 FOR CASH WITHDRAW *********\n");
                printf("\t\t********* ENTER 4 FOR MINI STATEMENT *********\n");
                printf("\t\t********* ENTER 5 FOR PIN CHANGE *********\n");
                printf("\t\t********* ENTER 6 FOR CANCEL *********\n");
                printf("\t\t***************************************************\n");
                printf("\t\t ");
                
                for(option=0,lk=4;option<4;option++,lk--)
                {
                    scanf("%d",&yt);
                    if(yt<=6&&yt>0)
                    {
                        opt=yt;
                        break;
                    }
                    if(option<3)
                        printf("\n YOU ARE LEFT WITH %d CHANCES\n PLEASE ENTER VALID OPTION ",lk-1);
                    if(option==3)
                    { 
                        clrscr();
                        printf("\n\n\n\n\n\n\n\n\n\n\n\t DEAR CUSTOMER YOU HAVE DONE 4 INVALID OPTION ENTERING \n\t\t\t TRY AGAIN AFTER 24 HOURS");
                        delay(1800);
                        clrscr();
                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t THANKS FOR VISITING VAPA BANK \t\t\t");
                        delay(1800);
                        exit(10);
                        j=4;
                    }
                }

                switch(opt)
                {
                    case 1: depositting(&deposit,&j); break;
                    case 2: printf("\n\n\t\t\tWELCOME TO CASH BALANCE SECTION");
                            printf("\n\n\t\t\t YOUR BALANCE AMOUNT\n\n\t\t\t\t ");
                            cash=deposit;
                            printf("%ld",cash);
                            v=getch();
                            break;
                    case 3: printf("\n\t\t\t ENTER CASH TO WITHDRAW\n\t\t\t\t ");
                            scanf("%ld",&cash);
                            if((cash%50)!=0||cash==0)
                                printf("\t\t\tENTER VALID AMOUNT IN MULTIPLES OF 50\n");
                            else if(cash!=0 && (cash%50==0) && cash<deposit)
                            {
                                deposit -= cash;
                                printf("\n\t\t\t YOU WITHDRAWN RUPEES %ld\n",cash);
                            }
                            v=getch();
                            break;
                    case 5: m=pin(&j,m); break;
                    case 6: j=4; 
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t THANKS FOR VISITING VAPA BANK \n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            break;
                }
            }
        }
    }
    while(j!=4);

    getch();
    closegraph();
}

int pin(int *j, int n)
{
    char v;
    int i,o,f,m=n,t;

    printf("\n\t\t WELCOME TO PIN CHANGE SECTION\n");
    o=4;

    for(i=0;i<4;i++,o--)
    {
        printf("\n\t ENTER CURRENT PIN TO CHANGE YOUR PIN WHICH IS FOUR DIGITS ONLY\n\t\t\t ");
        scanf("%d",&f);
        if(f==n)
        {
            printf("\n\t\t ENTER NEW PIN TO CHANGE\n\n\t\t\t ");
            scanf("%d",&n);
            printf("\n\t\t\t\tYOUR PIN WAS CHANGED ");
            v=getch();
            break;
        }
    }

    return n;
}

int depositting(long int *deposit, int *j)
{
    char v;
    long int money;

    printf("\n\n\t\t WELCOME TO CASH DEPOSIT SECTION \n");
    printf("\t\t ENTER CASH TO DEPOSIT MINIMUM OF 50\n\n\n\t\t\t\t ");
    scanf("%ld",&money);
    if(money%50==0)
    {
        *deposit += money;
        printf("\n\t\t\t YOU HAVE DEPOSITED %ld\n\n\n\n\n",money);
    }
    else
    {
        printf("\t\t DEAR CUSTOMER PLEASE ENTER VALID AMOUNT\n\t\t\t\t ");
    }
    
    return 0;
}
