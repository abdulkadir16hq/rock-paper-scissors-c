#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
 int Move,ComputerMove,UserScore=0,CompScore=0,i=1;
 //char Choice;
 clrscr();
 srand(time(0));
 ComputerMove = rand()%3;
 printf("\n\t\t\t   Welcome to Rock-Paper-Scissors!");
 printf("\n\t\t\t   ===============================\n\n");
 printf("\nRules:");
 printf("\n1.You will play against the computer.");
 printf("\n2.Enter 1 for Rock, 2 for Paper, 3 for Scissors.");
 printf("\n3.First to 3 points wins the game!");
 printf("\nLet's Begin!\n");
 printf("\nRound %d:\n",i);
 do
 {
  printf("\nChoose your move:");
  printf("\n[1] Rock");
  printf("\n[2] Paper");
  printf("\n[3] Scissor");
  printf("\n[4] Exit");
  printf("\n\nEnter your choice : ");
  scanf("%d",&Move);
  switch(Move)
  {
   case 1:
   case 2:
   case 3:
	  if(Move == 1)
	  {
	   printf("\nYou chose: Rock");
	  }
	  else if(Move == 2)
	  {
	   printf("\nYou chose: Paper");
	  }
	  else
	  {
	   printf("\nYou chose: Scissor");
	  }
	  if(ComputerMove == 0)
	  {
	   printf("\nComputer chose: Rock");
	  }
	  else if(ComputerMove == 1)
	  {
	   printf("\nComputer chose: Paper");
	  }
	  else
	  {
	   printf("\nComputer chose: Scissor");
	  }
	  printf("\n");
	  if(Move==1 && ComputerMove==0 || Move==2 && ComputerMove==1 || Move==3 && ComputerMove==2)
	  {
	   printf("\nIt's a DRAW! No points awarded.");
	  }
	  else if(Move==1 && ComputerMove==1 || Move==2 && ComputerMove==2 || Move==3 && ComputerMove==0)
	  {
	   printf("\nYou LOST this round. Try again!");
	   CompScore++;
	  }
	  else if(Move==1 && ComputerMove==2 || Move==2 && ComputerMove==0 || Move==3 && ComputerMove==1)
	  {
	   printf("\nYou WIN this round!");
	   UserScore++;
	  }
	  if(UserScore==3 || CompScore==3)
	  {
	   /*printf("\n\nDo you want to continue the game? (y/n) ");
	   scanf(" %c",Choice);*/
	   printf("\n\n----------------------------");
	   printf("\n-: GAME OVER! FINAL SCORE :-");
	   printf("\n----------------------------");
	   printf("\n   You [%d] - [%d] Computer",UserScore,CompScore);
	   printf("\n----------------------------");
	   if(UserScore > CompScore)
	   {
	    printf("\nYOU WON THE GAME!\n");
	   }
	   else if(UserScore < CompScore)
	   {
	    printf("\nCOMPUTER WINS! BETTER LUCK NEXT TIME.\n");
	   }
	   else
	   {
	    printf("\nIT'S A TIE!\n");
	   }
	   printf("\nChoose [4] to exit the game :");
	  }
	  else
	  {
	   printf("\n");
	   printf("\nRound %d:\n",i+1);
	   i++;
	  }
	  break;
   case 4:
	  printf("\nThanks for playing! See you next time.");
	  break;
   default:
	   printf("\nInvalid choice! Please enter 1,2,or3.\n");
	   break;
  }
 }while(Move != 4);
 getch();
}
//@abdulkadir16hq
