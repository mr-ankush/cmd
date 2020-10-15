//header files
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
//global variable
char name[10],input[100];
int i,timer;
long a,a1,a2,n,n1[100],sum;
float n2[100],sumof;

//class
class function
{
 //declaration type
 public:
 //display interface
 void interface();
 //input command
 void commandline();
 //command action
 void basiccommand();
 //time action
 void actualtime();
};

//object calling
function f;

//time function
void function::actualtime()
{
 srand(time(0));
 timer=rand()%75+1;
 textcolor(LIGHTBLUE);
 cprintf(" (0.%dsec)\n",timer);
}

//display interface function
void function::interface()
{
 //background color
 //textbackground(BLUE);
 for(i=1;i<=80;i++)
 {
  for(int j=2;j<=13;j++)
  {
   gotoxy(i,j);
   cprintf(" ");
  }
 }

 //left-top arrow
 gotoxy(1,2);textcolor(YELLOW);cprintf("%c",201);
 //right-top arrow
 gotoxy(80,2);textcolor(YELLOW);cprintf("%c",187);
 //left-bottom arrow
 gotoxy(1,13);textcolor(YELLOW);cprintf("%c",200);
 //right-bottom arrow
 gotoxy(80,13);textcolor(YELLOW);cprintf("%c",188);
 //left-sided vertical arrow
 for(i=3;i<=12;i++)
 {
  gotoxy(1,i);textcolor(YELLOW);cprintf("%c",186);
 }
 //right-sided vertical arrow
 for(i=3;i<=12;i++)
 {
  gotoxy(80,i);textcolor(YELLOW);cprintf("%c",186);
 }
 //left T-shape arrow
 gotoxy(1,4);textcolor(YELLOW);cprintf("%c",204);
 //right T-shape arrow
 gotoxy(80,4);textcolor(YELLOW);cprintf("%c",185);
 //horizontal arrow
 for(i=2;i<=79;i++)
 {
  //top-horizontal arrow
  gotoxy(i,2);textcolor(YELLOW);cprintf("%c",205);
  //middle-horizontal arrow
  gotoxy(i,4);textcolor(YELLOW);cprintf("%c",205);
  //bottom-horizontal arrow
  gotoxy(i,13);textcolor(YELLOW);cprintf("%c",205);
 }

 //comment box
 gotoxy(1,1);cout<<"Type EXIT to return to Turbo C++ Programming...";
 gotoxy(25,3);textcolor(YELLOW);cprintf(" DOS shell (Command Prompt-CDM) ");
 gotoxy(3,5);textcolor(GREEN);cprintf("Welcome to Artificial DOSBox v127.0.0.1");
 gotoxy(3,7);textcolor(WHITE);
 cprintf("For a short introduction for new users type: ");
 textcolor(YELLOW);cprintf("INTRO");
 gotoxy(3,8);textcolor(WHITE);
 cprintf("For supported shell commands type: ");
 textcolor(YELLOW);cprintf("HELP");
 gotoxy(3,10);textcolor(WHITE);
 cprintf("For more information type ");
 textcolor(YELLOW);cprintf("GETHELP");
 textcolor(WHITE);cprintf(", knowledge for DOSBox directory/command.");
 gotoxy(3,12);textcolor(GREEN);
 cprintf("HAVE FUN with compiler to auto-suggest command's !!!");
 //entire screen theme
 gotoxy(1,14);
 textbackground(BLACK);textcolor(WHITE);
}

//command input function
void function::commandline()
{
 //entire command-box theme
 textbackground(BLACK);textcolor(WHITE);
 //command tag
 cout<<endl;cprintf("CDM:\\C++\\workplace>>");
 //get input
 //scanf("%s",&input);
 gets(input);
 //call for action
 f.basiccommand();
 //entire background screen
 textcolor(WHITE);textbackground(BLACK);
}

//command action function
void function::basiccommand()
{
 switch(input[0])
 {
  //help command
  case 'h': case'H':
   if(strlen(input)<=4)
   {
    if(input[3]=='p'||input[3]=='P')
    {
     if(input[2]=='l'||input[2]=='L')
     {
      if(input[1]=='e'||input[1]=='E')
      {
       if(input[0]=='h'||input[0]=='H')
       {
	cout<<" try command..."<<endl;
	//intro command line
	cout<<" <  ";textcolor(BLUE);cprintf("INTRO");
	textcolor(WHITE);cout<<"          >\ttest a command."<<endl;
	//exit command line
	cout<<" <  ";textcolor(BLUE);cprintf("EXIT");
	textcolor(WHITE);cout<<"           >\tterminate DOSBox v127.0.0.1."<<endl;
	//date command line
	cout<<" <  ";textcolor(BLUE);cprintf("DATE");
	textcolor(WHITE);cout<<"           >\tCurrent date."<<endl;
	//version command line
	cout<<" <  ";textcolor(BLUE);cprintf("VER");
	textcolor(WHITE);cout<<"            >\tVersion of DOSBox v127.0.0.1."<<endl;
	//clear screen command line
	cout<<" <  ";textcolor(BLUE);cprintf("CLS");
	textcolor(WHITE);cout<<"            >\tClear recent task/Clear device screen."<<endl;
	//gethelp command line
	cout<<" <  ";textcolor(BLUE);cprintf("GETHELP");
	textcolor(WHITE);cout<<"        >\tRead documentary of DOSBox v127.0.0.1"<<endl;
	//time command line
	cout<<" <  ";textcolor(BLUE);cprintf("TIME");
	textcolor(WHITE);cout<<"           >\tCurrent time."<<endl;
	//rest command line
	cout<<" <  ";textcolor(BLUE);cprintf("REST");
	textcolor(WHITE);cout<<"           >\tDoes nothing, for rest [eg. rest2,rest3,..,rest(sec.)]."<<endl;
	//wait command line
	cout<<" <  ";textcolor(BLUE);cprintf("WAIT");
	textcolor(WHITE);cout<<"           >\tWaits for 1 keypress & set for ERROELEVEL."<<endl;
	//directory path command line
	cout<<" <  ";textcolor(BLUE);cprintf("LIB");
	textcolor(WHITE);cout<<"            >\tDisplays current directory of AI DOSBox v127.0.0.1"<<endl;
	//msg command line
	cout<<" <  ";textcolor(BLUE);cprintf("MSG");
	textcolor(WHITE);cout<<"            >\tDisplay message, Enaable/Dissable command echoing."<<endl;
	//help command line
	cout<<" <  ";textcolor(BLUE);cprintf("HELP");
	textcolor(WHITE);cout<<"           >\tShow help."<<endl;
	//music command line
	cout<<" <  ";textcolor(BLUE);cprintf("JAZZ");
	textcolor(WHITE);cout<<"           >\tPlay musical command."<<endl;
	//
	cout<<" <  ";textcolor(BLUE);cprintf("SYSASSIST");
	textcolor(WHITE);cout<<"      >\tTalk to AI - Assistant."<<endl;
	//ascii command line
	cout<<" <  ";textcolor(BLUE);cprintf("ASCII");
	textcolor(WHITE);cout<<"          >\tASCII value chart."<<endl;
	//file command line
	cout<<" <  ";textcolor(BLUE);cprintf("FILE");
	textcolor(WHITE);cout<<"           >\tPath/File name."<<endl;
	//repaint command line
	cout<<" <  ";textcolor(BLUE);cprintf("SET");
	textcolor(WHITE);cout<<"            >\tRe-paint desktop."<<endl;
	//pause command line
	cout<<" <  ";textcolor(BLUE);cprintf("PAUSE");
	textcolor(WHITE);cout<<"          >\tWaits for 1 keystroke for continue."<<endl;
	cout<<"Press any key to continue !"<<endl;
	getch();
	//addition task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NADD");
	textcolor(WHITE);cout<<"           >\tPerform number additon task."<<endl;
	//subtraction task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NSUB");
	textcolor(WHITE);cout<<"           >\tPerform number subtraction task."<<endl;
	//multiplication task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NMUL");
	textcolor(WHITE);cout<<"           >\tPerform number multiplication task."<<endl;
	//division task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NDIV");
	textcolor(WHITE);cout<<"           >\tPerform number division task."<<endl;
	//maximum task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NMAX");
	textcolor(WHITE);cout<<"           >\tPerform number maximum/minimum task."<<endl;
	//even/odd task command line
	cout<<" <  ";textcolor(BLUE);cprintf("NEVN");
	textcolor(WHITE);cout<<"           >\tPerform number even/odd task."<<endl;
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean HELP, try HELP command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean HELP, try HELP command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean HELP, try HELP command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean HELP, try HELP command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //directory path command
  case 'l': case 'L':
   if(strlen(input)<=3)
   {
    if(input[2]=='b'||input[2]=='B')
    {
     if(input[1]=='i'||input[1]=='I')
     {
      if(input[0]=='l'||input[0]=='L')
      {
       cout<<" Current directory path : CDM:\\C++\\workplace>>"<<endl;
       cout<<" & Directory path never changable."<<endl;
       //action on timer
       f.actualtime();
       //action on command line
       f.commandline();
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean LIB, try LIB command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean LIB, try LIB command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean LIB, try LIB command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //wait command
  case 'w': case 'W':
   if(strlen(input)<=4)
   {
    if(input[3]=='t'||input[3]=='T')
    {
     if(input[2]=='i'||input[2]=='I')
     {
      if(input[1]=='a'||input[1]=='A')
      {
       if(input[0]=='w'||input[0]=='W')
       {
	char y,n,ans[4];
	wait:
	cout<<"[Y,N,Exit]?";
	cin>>ans;
	if(ans[0]=='Y'||ans[0]=='y'||ans[0]=='N'||ans[0]=='n')
	{
	 delay(150);
	 //action on command line
	 f.commandline();
	}
	else if(ans[0]=='e'||ans[0]=='E')
	{
	 if(ans[1]=='x'||ans[1]=='X')
	 {
	  if(ans[2]=='i'||ans[2]=='I')
	  {
	   if(ans[3]=='t'||ans[3]=='T')
	   {
	    exit(0);
	   }
	   else
	   {
	    cout<<" Don't take stress, take a rest..."<<endl;
	    sound(780);
	    delay(50);
	    nosound();
	    goto wait;
	   }
	  }
	  else
	  {
	   cout<<" Don't take stress, take a rest..."<<endl;
	   sound(780);
	   delay(50);
	   nosound();
	   goto wait;
	  }
	 }
	 else
	 {
	  cout<<" Don't take stress, take a rest..."<<endl;
	  sound(780);
	  delay(50);
	  nosound();
	  goto wait;
	 }
	}
	else
	{
	 cout<<" Don't take stress, take a rest..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 goto wait;
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean WAIT, try WAIT command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean WAIT, try WAIT command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean WAIT, try WAIT command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean WAIT, try WAIT command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //intro command
  case 'i': case 'I':
   if(strlen(input)<=5)
   {
    if(input[4]=='o'||input[4]=='O')
    {
     if(input[3]=='r'||input[3]=='R')
     {
      if(input[2]=='t'||input[2]=='T')
      {
       if(input[1]=='n'||input[1]=='N')
       {
	if(input[0]=='i'||input[0]=='I')
	{
	 cout<<" command working properly, try HELP command..."<<endl;
	 //action on timer
	 f.actualtime();
	 //action on command line
	 f.commandline();
	}
	else
	{
	 cout<<" Illegal command : "<<strupr(input)<<", still command working."<<endl;
	 cout<<" error check from 1st character..."<<endl;
	 cout<<" Did you mean INTRO, try again..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<", still command working."<<endl;
	cout<<" error check from 2nd character..."<<endl;
	cout<<" Did you mean INTRO, try again..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<", still command working."<<endl;
       cout<<" error check from 3rd character..."<<endl;
       cout<<" Did you mean INTRO, try again..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<", still command working."<<endl;
      cout<<" error check from last 2nd character..."<<endl;
      cout<<" Did you mean INTRO, try again..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<", still command working."<<endl;
     cout<<" error check in last character..."<<endl;
     cout<<" Did you mean INTRO, try again..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" you entered extra characters..."<<endl;
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //ascii command
  case 'a': case 'A':
   if(strlen(input)<=5)
   {
    if(input[4]=='i'||input[4]=='I')
    {
     if(input[3]=='i'||input[3]=='I')
     {
      if(input[2]=='c'||input[2]=='C')
      {
       if(input[1]=='s'||input[1]=='S')
       {
	if(input[0]=='a'||input[0]=='A')
	{
	 //ascii chart
	 cout<<"ASCII Chart with value:\t[CHART 1st]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 //ascii 1st chart
	 for(i=0;i<=16;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 2nd chart
	 cout<<"ASCII Chart with value:\t[CHART 2nd]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=17;i<=35;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 3rd chart
	 cout<<"ASCII Chart with value:\t[CHART 3rd]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=36;i<=54;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 4th chart
	 cout<<"ASCII Chart with value:\t[CHART 4th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=55;i<=73;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 5th chart
	 cout<<"ASCII Chart with value:\t[CHART 5th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=74;i<=92;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 6th chart
	 cout<<"ASCII Chart with value:\t[CHART 6th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=93;i<=111;i++)
	 {
	  printf("\t\t     %d\t\t\t\t       %c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 7th chart
	 cout<<"ASCII Chart with value:\t[CHART 7th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=112;i<=130;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 8th chart
	 cout<<"ASCII Chart with value:\t[CHART 8th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=131;i<=149;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 9th chart
	 cout<<"ASCII Chart with value:\t[CHART 9th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=150;i<=168;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 10th chart
	 cout<<"ASCII Chart with value:\t[CHART 10th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=169;i<=187;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 11th chart
	 cout<<"ASCII Chart with value:\t[CHART 11th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=188;i<=206;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 12th chart
	 cout<<"ASCII Chart with value:\t[CHART 12th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=207;i<=225;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 13th chart
	 cout<<"ASCII Chart with value:\t[CHART 13th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=226;i<=244;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //ascii 14th chart
	 cout<<"ASCII Chart with value:\t[CHART 14th]"<<endl;
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 printf("\t\tASCII VALUE\t\t\tASCII CHARACTER\n");
	 for(i=1;i<=80;i++)
	 {
	  cout<<"-";
	 }
	 for(i=245;i<=263;i++)
	 {
	  printf("\t\t     %d\t\t\t\t%c\n",i,i);
	 }
	 cout<<"Press any key to continue !\n";
	 getch();
	 //action on command line
	 clrscr();
	 f.commandline();
	}
	else
	{
	 cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	 cout<<" Did you mean ASCII, try ASCII command..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean ASCII, try ASCII command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean ASCII, try ASCII command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean ASCII, try ASCII command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean ASCII, try ASCII command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //gethelp command
  case 'g': case 'G':
   if(strlen(input)<=7)
   {
    if(input[6]=='p'||input[6]=='P')
    {
     if(input[5]=='l'||input[5]=='L')
     {
      if(input[4]=='e'||input[4]=='E')
      {
       if(input[3]=='h'||input[3]=='H')
       {
	if(input[2]=='t'||input[2]=='T')
	{
	 if(input[1]=='e'||input[1]=='E')
	 {
	  if(input[0]=='g'||input[0]=='G')
	  {
	   textcolor(WHITE);textbackground(BLACK);
	   char msg1[]=" This is a\n  Command Prompt - CDM";//32
	   char msg2[]=" ===========================================";//44
	   char msg3[]=" if you're beginner/new user,";//29
	   char msg4[]=" => first try INTRO command for practice...";//44
	   char msg5[]=" => try HELP command to perform Dos-Shell...";//45
	   i=0;
	   while(msg1[i] != '\0')
	   {
	    printf("%c",msg1[i]);
	    delay(85);
	    i++;
	   }
	   i=0;
	   delay(500);
	   cout<<endl;
	   while(msg2[i] != '\0')
	   {
	    printf("%c",msg2[i]);
	    delay(15);
	    i++;
	   }
	   i=0;
	   delay(500);
	   cout<<endl;
	   while(msg3[i] != '\0')
	   {
	    printf("%c",msg3[i]);
	    delay(85);
	    i++;
	   }
	   i=0;
	   delay(500);
	   cout<<endl;
	   while(msg4[i] != '\0')
	   {
	    printf("%c",msg4[i]);
	    delay(85);
	    i++;
	   }
	   i=0;
	   delay(500);
	   cout<<endl;
	   while(msg5[i] != '\0')
	   {
	    printf("%c",msg5[i]);
	    delay(85);
	    i++;
	   }
	   delay(500);
	   cout<<endl<<endl;
	   cout<<"Click any button to continue..."<<endl;
	   getch();
	   //action on command line
	   f.commandline();
	  }
	  else
	  {
	   cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	   cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
	   sound(780);
	   delay(50);
	   nosound();
	   //action on command line
	   f.commandline();
	  }
	 }
	 else
	 {
	  cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	  cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
	  sound(780);
	  delay(50);
	  nosound();
	  //action on command line
	  f.commandline();
	 }
	}
	else
	{
	 cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	 cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean GETHELP, try GETHELP command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //date command
  case 'd': case 'D':
   if(strlen(input)<=4)
   {
    if(input[3]=='e'||input[3]=='E')
    {
     if(input[2]=='t'||input[2]=='T')
     {
      if(input[1]=='a'||input[1]=='A')
      {
       if(input[0]=='d'||input[0]=='D')
       {
	cout<<" Date : "<<__DATE__<<endl;
	cout<<"        MMM DD YYYY"<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean DATE, try DATE command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean DATE, try DATE command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean DATE, try DATE command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean DATE, try DATE command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //file command
  case 'f': case 'F':
   if(strlen(input)<=4)
   {
    if(input[3]=='e'||input[3]=='E')
    {
     if(input[2]=='l'||input[2]=='L')
     {
      if(input[1]=='i'||input[1]=='I')
      {
       if(input[0]=='f'||input[0]=='F')
       {
	cout<<" File Extention/File Name : "<<__FILE__<<endl;
	cout<<" "<<__FILE__<<" is open in path C:\Turboc++ at "
		<<__TIME__<<", "<<__DATE__<<"."<<endl;
	cout<<" file name & file extention never changable."<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean FILE, try FILE command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean FILE, try FILE command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean FILE, try FILE command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean FILE, try FILE command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //musical command
  case 'j': case 'J':
   if(strlen(input)<=4)
   {
    if(input[3]=='z'||input[3]=='Z')
    {
     if(input[2]=='z'||input[2]=='Z')
     {
      if(input[1]=='a'||input[1]=='A')
      {
       if(input[0]=='j'||input[0]=='J')
       {
	cout<<" ENJOY MUSICAL BEAT..."<<endl;
	//action on timer
	f.actualtime();
	//AIRTEL music sound
	float A = 440;
	float G = 780;
	float Bb = 461;
	float D = 586;
	float F = 687;
	sound(G);
	delay(500);
	nosound();
	sound(G);
	delay(250);
	nosound();
	sound(G);
	delay(250);
	nosound();
	sound(G);
	delay(500);
	nosound();
	sound(2*D);
	delay(500);
	nosound();
	sound(2*A);
	delay(250);
	nosound();
	sound(2*Bb);
	delay(250);
	nosound();
	sound(2*A);
	delay(250);
	nosound();
	sound(G);
	delay(250);
	nosound();
	sound(F);
	delay(500);
	nosound();
	sound(2*A);
	delay(500);
	nosound();
	sound(G);
	delay(250);
	nosound();
	sound(2*A);
	delay(250);
	nosound();
	sound(G);
	delay(250);
	nosound();
	sound(F);
	delay(250);
	sound(G);
	delay(250);
	sound(2*A);
	delay(250);
	sound(2*Bb);
	delay(500);
	sound(2*A);
	delay(500);
	sound(G);
	delay(250);
	sound(F);
	delay(250);
	sound(D);
	delay(500);
	nosound();
//end 1
	//sound(G);
	//delay(500);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(500);
	//nosound();
	//sound(2*D);
	//delay(500);
	//nosound();
	//sound(2*A);
	//delay(250);
	//nosound();
	//sound(2*Bb);
	//delay(250);
	//nosound();
	//sound(2*A);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(F);
	//delay(500);
	//nosound();
	//sound(2*A);
	//delay(500);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(2*A);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(F);
	//delay(250);
	//sound(G);
	//delay(250);
	//sound(2*A);
	//delay(250);
	//sound(2*Bb);
	//delay(500);
	//sound(2*A);
	//delay(500);
	//sound(G);
	//delay(250);
	//sound(F);
	//delay(250);
	//sound(D);
	//delay(500);
	//nosound();
//end 2
	//sound(2*A);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(F);
	//delay(250);
	//sound(G);
	//delay(250);
	//sound(2*A);
	//delay(250);
	//sound(2*Bb);
	//delay(500);
	//sound(2*A);
	//delay(500);
	//sound(G);
	//delay(250);
	//sound(F);
	//delay(250);
	//sound(D);
	//delay(500);
	//nosound();
	//sound(2*A);
	//delay(250);
	//nosound();
	//sound(G);
	//delay(250);
	//nosound();
	//sound(F);
	//delay(250);
	//sound(G);
	//delay(250);
	//sound(2*A);
	//delay(250);
	//sound(2*Bb);
	//delay(500);
	//sound(2*A);
	//delay(500);
	//sound(G);
	//delay(250);
	//sound(F);
	//delay(250);
	//sound(D);
	//delay(500);
	//nosound();
	//cout<<"Press any key to continue !"<<endl;
	//getch();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean JAZZ, try JAZZ command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean JAZZ, try JAZZ command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean JAZZ, try JAZZ command..."<<endl;
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean JAZZ, try JAZZ command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //time command
  case 't': case 'T':
   if(strlen(input)<=4)
   {
    if(input[3]=='e'||input[3]=='E')
    {
     if(input[2]=='m'||input[2]=='M')
     {
      if(input[1]=='i'||input[1]=='I')
      {
       if(input[0]=='t'||input[0]=='T')
       {
	cout<<" Time : "<<__TIME__<<endl;
	cout<<"        HH:MM:SS"<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean TIME, try TIME command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean TIME, try TIME command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean TIME, try TIME command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean TIME, try TIME command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //task command
  case 'n': case 'N':
   if(strlen(input)<=4)
   {
    //addition task
    if(input[3]=='d'||input[3]=='D')
    {
     if(input[2]=='d'||input[2]=='D')
     {
      if(input[1]=='a'||input[1]=='A')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Enter number of cases you want to ADD:";
	cin>>n;
	cout<<" Enter "<<n<<" digits to ADD:"<<endl;
	for(i=0;i<n;i++)
	{
	 cout<<" ";
	 cin>>n1[i];
	}
	cout<<" ADDITION : "<<n1[0];
	for(i=1;i<n;i++)
	{
	 cout<<"+"<<n1[i];
	}
	sum=0;
	for(i=0;i<n;i++)
	{
	 sum=sum+n1[i];
	}
	cout<<" = "<<sum<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NADD, try NADD command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NADD, try NADD command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NADD, try NADD command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    //multiplication task
    else if(input[3]=='l'||input[3]=='L')
    {
     if(input[2]=='u'||input[2]=='U')
     {
      if(input[1]=='m'||input[1]=='M')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Enter number of cases you want to MULTIPLY:";
	cin>>n;
	cout<<" Enter "<<n<<" digits to MULTIPLY:"<<endl;
	for(i=0;i<n;i++)
	{
	 cout<<" ";
	 cin>>n1[i];
	}
	cout<<" MULTIPLICATION : "<<n1[0];
	for(i=1;i<n;i++)
	{
	 cout<<"*"<<n1[i];
	}
	sum=1;
	for(i=0;i<n;i++)
	{
	 sum=sum*n1[i];
	}
	cout<<" = "<<sum<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NMUL, try NMUL command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NMUL, try NMUL command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NMUL, try NMUL command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    //subtraction task
    else if(input[3]=='b'||input[3]=='B')
    {
     if(input[2]=='u'||input[2]=='U')
     {
      if(input[1]=='s'||input[1]=='S')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Only 2(two) cases you can SUBTRACTED..."<<endl;
	cout<<" Press any key to continue !"<<endl;
	cout<<" ";
	getch();
	cout<<"Enter 2 digits to SUBTRACT:"<<endl;
	for(i=0;i<2;i++)
	{
	 cout<<" ";
	 cin>>n1[i];
	}
	cout<<" SUBTRACTION : "<<n1[0];
	for(i=1;i<2;i++)
	{
	 cout<<"-"<<n1[i];
	}
	sum=n1[0]-n1[1];
	cout<<" = "<<sum<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NSUB, try NSUB command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NSUB, try NSUB command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NSUB, try NSUB command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    //division task
    else if(input[3]=='v'||input[3]=='V')
    {
     if(input[2]=='i'||input[2]=='I')
     {
      if(input[1]=='d'||input[1]=='D')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Only 2(two) cases you can DIVIDED..."<<endl;
	cout<<" Press any key to continue !"<<endl;
	cout<<" ";
	getch();
	cout<<"Enter 2 digits to DIVIDE:"<<endl;
	for(i=0;i<2;i++)
	{
	 cout<<" ";
	 cin>>n2[i];
	}
	cout<<" DIVISION : "<<n2[0];
	for(i=1;i<2;i++)
	{
	 printf("%c",246);
	 cout<<n2[i];
	}
	sumof=n2[0]/n2[1];
	cout<<" = "<<sumof<<endl;
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NDIV, try NDIV command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NDIV, try NDIV command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NDIV, try NDIV command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    //even/odd task
    else if(input[3]=='n'||input[3]=='N')
    {
     if(input[2]=='v'||input[2]=='V')
     {
      if(input[1]=='e'||input[1]=='E')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Enter number to find EVEN/ODD: ";
	cin>>n;
	if(n%2==0)
	{
	 cout<<" "<<n<<" is Even number."<<endl;
	 //action on timer
	 f.actualtime();
	 //action on command line
	 f.commandline();
	}
	else
	{
	 cout<<" "<<n<<" is Odd number."<<endl;
	 //action on timer
	 f.actualtime();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NEVN, try NEVN command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NEVN, try NEVN command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NEVN, try NEVN command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    //maximum/minimum task
    else if(input[3]=='x'||input[3]=='X')
    {
     if(input[2]=='a'||input[2]=='A')
     {
      if(input[1]=='m'||input[1]=='M')
      {
       if(input[0]=='n'||input[0]=='N')
       {
	cout<<" Only 3(three) cases you can COMPARE..."<<endl;
	cout<<" Press any key to continue !"<<endl;
	cout<<" ";
	getch();
	cout<<"Enter 3 numbers to COMPARE:"<<endl;
	for(i=0;i<3;i++)
	{
	 cout<<" ";
	 cin>>n1[i];
	}
	if(n1[2]==n1[0]&n1[2]==n1[1])
	{
		cout<<" "<<n1[2]<<", all three numbers are equal."<<endl;
	}
	else if(n1[0]>n1[1]&n1[0]>n1[2])
	{
		cout<<" Maximum number is : "<<n1[0]<<endl;
	}
	else if(n1[1]>n1[0]&n1[1]>n1[2])
	{
		cout<<" Maximum number is : "<<n1[1]<<endl;
	}
	else if(n1[2]>n1[0]&n1[2]>n1[1])
	{
		cout<<" Maximum number is : "<<n1[2]<<endl;
	}
	else if(n1[0]==n1[1])
	{
	 if(n1[0]>n1[2])
	 {
	  cout<<" Maximum number is : "<<n1[0]<<endl;
	 }
	 else
	 {
	  cout<<" Maximum number is : "<<n1[2]<<endl;
	 }
	}
	else if(n1[0]==n1[2])
	{
	 if(n1[0]>n1[1])
	 {
	  cout<<" Maximum number is : "<<n1[0]<<endl;
	 }
	 else
	 {
	  cout<<" Maximum number is : "<<n1[1]<<endl;
	 }
	}
	else if(n1[2]==n1[1])
	{
	 if(n1[2]>n1[0])
	 {
	  cout<<" Maximum number is : "<<n1[2]<<endl;
	 }
	 else
	 {
	  cout<<" Maximum number is : "<<n1[0]<<endl;
	 }
	}
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean NMAX, try NMAX command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean NMAX, try NMAX command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean NMAX, try NMAX command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" try NADD,NSUB,NMUL,NDIV,NEVN,NMAX command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //version command
  case 'v': case 'V':
   if(strlen(input)<=3)
   {
    if(input[2]=='r'||input[2]=='R')
    {
     if(input[1]=='e'||input[1]=='E')
     {
      if(input[0]=='v'||input[0]=='V')
      {
       cout<<" This version is manually designed : DOSBox v127.0.0.1"<<endl;
       printf(" Programming Team %c : %c%ck%c%ch %c%ckh%c%cd%c",158,146,252,230,36,156,248,224,164,238);
       cout<<endl;
       //action on timer
       f.actualtime();
       //action on command line
       f.commandline();
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean VER, try VER command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean VER, try VER command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean VER, try VER command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //pause command
  case 'p': case 'P':
   if(strlen(input)<=5)
   {
    if(input[4]=='e'||input[4]=='E')
    {
     if(input[3]=='s'||input[3]=='S')
     {
      if(input[2]=='u'||input[2]=='U')
      {
       if(input[1]=='a'||input[1]=='A')
       {
	if(input[0]=='p'||input[0]=='P')
	{
	 cout<<" Press any key to continue !"<<endl;
	 getch();
	 //action on command line
	 f.commandline();
	}
	else
	{
	 cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	 cout<<" Did you mean PAUSE, try PAUSE command..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean PAUSE, try PAUSE command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean PAUSE, try PAUSE command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean PAUSE, try PAUSE command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean PAUSE, try PAUSE command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //clear device command
  case 'c': case 'C':
   if(strlen(input)<=3)
   {
    if(input[2]=='s'||input[2]=='S')
    {
     if(input[1]=='l'||input[1]=='L')
     {
      if(input[0]=='c'||input[0]=='C')
      {
       delay(500);
       clrscr();
       cout<<"Type EXIT to return to Turbo C++ Programming..."<<endl;
       //action on command line
       f.commandline();

      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean CLS, try CLS command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean CLS, try CLS command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean CLS, try CLS command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //rest command
  case 'r': case 'R':
   if(strlen(input)<=6)
   {
    if(input[3]=='t'||input[3]=='T')
    {
     if(input[2]=='s'||input[2]=='S')
     {
      if(input[1]=='e'||input[1]=='E')
      {
       if(input[0]=='r'||input[0]=='R')
       {
	a1=input[4];
	a1=(a1-48);
	a2=input[5];
	a2=(a2-48);
	if(a1<=0&&a2<=0)
	{
	 //cout<<" The syntax of this command is incorrect."<<endl;
         textcolor(LIGHTRED);
         cprintf("Use rest command with proper attribute.");
         cout<<endl;
         textcolor(WHITE);
         cprintf("rest5 means... rest[sec]");
         cout<<endl;
         textcolor(CYAN);
         cprintf("System is in rest position for 5 seconds.\n");
         textcolor(WHITE);
	 //action on command line
	 f.commandline();
	}
	else if(a1>=0&&a2<0 || a1<=0&&a2>=0)
	{
	 a=a1;
	 cout<<" Getting rest for "<<a<<" seconds, Wait!"<<endl;
	 delay((a*1000)-250);
	 sound(780);
	 delay(250);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
	else if(a1>0&&a2>0)
	{
	 a=a1*10+a2*1;
	 cout<<" Getting rest for "<<a<<" seconds, Wait!"<<endl;
	 delay((a*1000)-250);
	 sound(780);
	 delay(250);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
	else if(a1==1||a1==2||a1==3||a1==4||a1==5||
		a1==6||a1==7||a1==8||a1==9 && a2==0)
	{
	 a=a1*10;
	 cout<<" Getting rest for "<<a<<" seconds, Wait!"<<endl;
	 delay((a*1000)-250);
	 sound(780);
	 delay(250);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean REST, try REST command with proper attribute..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean REST, try REST command with proper attribute..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean REST, try REST command with proper attribute..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean REST, try REST command with proper attribute..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //echo command
  case 'm': case 'M':
   if(strlen(input)>3||strlen(input)<=3)
   {
    if(strlen(input)<=3)
    {
     if(input[2]=='g'||input[2]=='G')
     {
      if(input[1]=='s'||input[1]=='S')
      {
       if(input[0]=='m'||input[0]=='M')
       {
	cout<<"type message in formate :-    msg:type a text"<<endl;
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean MSG, try MSG command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean MSG, try MSG command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean MSG, try MSG command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else if(strlen(input)>4||strlen(input)<100)
    {
     if(input[2]=='g'||input[2]=='G')
     {
      if(input[1]=='s'||input[1]=='S')
      {
       if(input[0]=='m'||input[0]=='M')
       {
	cout<<" Your msg is:"<<endl;
	cout<<" ";
        //puts(input);
	for(i=4;i<=99;i++)
	{
	 //cout<<input[i]
         textcolor(LIGHTRED);
         cprintf("%c",input[i]);
         textcolor(WHITE);
        }
	//for(i=4;i<=99;i++)
	//action on timer
	f.actualtime();
	//action on command line
	f.commandline();
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean MSG, try MSG command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean MSG, try MSG command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean MSG, try MSG command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //exit command
  case 'e': case 'E':
   if(strlen(input)<=4)
   {
    if(input[3]=='t'||input[3]=='T')
    {
     if(input[2]=='i'||input[2]=='I')
     {
      if(input[1]=='x'||input[1]=='X')
      {
       if(input[0]=='e'||input[0]=='E')
       {
	cout<<" Artificial DOSBox v127.0.0.1 terminated."<<endl;
	delay(1200);
	exit(0);
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean EXIT, try EXIT command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean EXIT, try EXIT command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean EXIT, try EXIT command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean EXIT, try EXIT command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //repaint desktop/display
  case 's': case 'S':
   if(strlen(input)<=3)
   {
    if(input[2]=='t'||input[2]=='T')
    {
     if(input[1]=='e'||input[1]=='E')
     {
      if(input[0]=='s'||input[0]=='S')
      {
       delay(500);
       clrscr();
       //call to interface line
       f.interface();
       //action on command line
       f.commandline();
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean SET, try SET command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean SET, try SET command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean SET, try SET command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   //sysassist command
   else if(strlen(input)==9)
   {
    if(input[8]=='t'||input[8]=='T')
    {
     if(input[7]=='s'||input[7]=='S')
     {
      if(input[6]=='i'||input[6]=='I')
      {
       if(input[5]=='s'||input[5]=='S')
       {
	if(input[4]=='s'||input[4]=='S')
	{
	 if(input[3]=='a'||input[3]=='A')
	 {
	  if(input[2]=='s'||input[2]=='S')
	  {
	   if(input[1]=='y'||input[1]=='Y')
	   {
	    if(input[0]=='s'||input[0]=='S')
	    {
	     textcolor(WHITE);textbackground(BLACK);
	     char msg1[]=" Welcome in System Assistant";
	     char msg2[]=" ===========================";
	     char msg3[]=" Hey, I'm QCI...\n it's my name \n";
	     char msg4[]=" =>> some commands required to talk with me";
	     char msg5[]=" =>> try this !!!";
	     i=0;
	     while(msg1[i] != '\0')
	     {
	      textcolor(YELLOW);textbackground(BLACK);
	      cprintf("%c",msg1[i]);
	      delay(85);
	      i++;
	     }
	     i=0;
	     delay(500);
	     cout<<endl;
	     while(msg2[i] != '\0')
	     {
	      textcolor(YELLOW);textbackground(BLACK);
	      cprintf("%c",msg2[i]);
	      delay(15);
	      i++;
	     }
	     i=0;
	     delay(500);
	     cout<<endl;
	     while(msg3[i] != '\0')
	     {
	      textcolor(YELLOW);textbackground(BLACK);
	      cprintf("%c",msg3[i]);
	      delay(85);
	      i++;
	     }
	     i=0;
	     delay(500);
	     cout<<endl;
	     while(msg4[i] != '\0')
	     {
	      textcolor(YELLOW);textbackground(BLACK);
	      cprintf("%c",msg4[i]);
	      delay(85);
	      i++;
	     }
	     i=0;
	     delay(500);
	     cout<<endl;
	     while(msg5[i] != '\0')
	     {
	      textcolor(YELLOW);textbackground(BLACK);
	      cprintf("%c",msg5[i]);
	      delay(85);
	      i++;
	     }
	     delay(500);
	     cout<<endl<<endl;
	     cout<<"Press any key to continue !"<<endl;
	     getch();
	     //command line
	     cout<<"try this..."<<endl;
	     cout<<" <  ";textcolor(BLUE);cprintf("QCI:COMMAND");
	     textcolor(WHITE);cout<<"  >\tQue. suggestion to user for asking with QCI"<<endl;

	     //formate of typing que.

	     // cout<<"Press any key to continue !"<<endl;
	     //getch();
	     //QCI  command
	     //textcolor(WHITE);textbackground(BLACK);
	     //cout<<" formate to ask que. to QCI"<<endl;
	     //cout<<"  QCI:writeyourquestion"<<endl;
	     //cout<<"  QCI:WRITEYOURQUESTION"<<endl;
	     //cout<<"  QCI:WriteYourQuestion"<<endl;
	     //cout<<"  QCI:Writeyourquestion"<<endl;
	     //cout<<"  QCI:write_your_question"<<endl;
	     //cout<<"  QCI:WRITE_YOUR_QUESTION"<<endl;
	     //cout<<"  QCI:write-your-question"<<endl;
	     //cout<<"  QCI:WRITE-YOUR-QUESTION"<<endl<<endl;

	     //action on command line
	     f.commandline();
	    }
	    else
	    {
	     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	     cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	     sound(780);
	     delay(50);
	     nosound();
	     //action on command line
	     f.commandline();
	    }
	   }
	   else
	   {
	    cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	    cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	    sound(780);
	    delay(50);
	    nosound();
	    //action on command line
	    f.commandline();
	   }
	  }
	  else
	  {
	   cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	   cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	   sound(780);
	   delay(50);
	   nosound();
	   //action on command line
	   f.commandline();
	  }
	 }
	 else
	 {
	  cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	  cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	  sound(780);
	  delay(50);
	  nosound();
	  //action on command line
	  f.commandline();
	 }
	}
	else
	{
	 cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	 cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	 sound(780);
	 delay(50);
	 nosound();
	 //action on command line
	 f.commandline();
	}
       }
       else
       {
	cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
	cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
	sound(780);
	delay(50);
	nosound();
	//action on command line
	f.commandline();
       }
      }
      else
      {
       cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
       cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
       sound(780);
       delay(50);
       nosound();
       //action on command line
       f.commandline();
      }
     }
     else
     {
      cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
      cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
      sound(780);
      delay(50);
      nosound();
      //action on command line
      f.commandline();
     }
    }
    else
    {
     cout<<" Illegal command : "<<strupr(input)<<" -(syntax error)"<<endl;
     cout<<" Did you mean SYSASSIST, try SYSASSIST command..."<<endl;
     sound(780);
     delay(50);
     nosound();
     //action on command line
     f.commandline();
    }
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //QCI command line
  case 'q': case'Q':
   if(input[0]=='q'||input[0]=='Q')
   {
    textcolor(LIGHTRED);
    cprintf(" Sorry for Inconvienence...");
    cout<<endl;
    cout<<" QCI:COMMAND is under in developing..."<<endl;
    cout<<" Try another command, Thanks for getting Interest..."<<endl;
    //action on timer
    f.actualtime();
    //action on command line
    f.commandline();
   }
   else
   {
    sound(780);
    delay(50);
    nosound();
    cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
    //action on command line
    f.commandline();
   }

  //default command
  default:
   sound(780);
   delay(50);
   nosound();
   cout<<" Illegal command : "<<strupr(input)<<", try HELP command..."<<endl;
   //action on command line
   f.commandline();
 }
}
void main()
{
 clrscr();
 //call to interface line
 f.interface();
 //action on command line
 f.commandline();
 getch();
}