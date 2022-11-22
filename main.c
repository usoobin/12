#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_number(void)
{
	int selNum=0;
	
	do
	{
		printf("select a number");
		scanf("%d", &selNum);
		fflush(stdin);
		
		if(bingo_checkNum(selNum)== BINGO_NUMSTATUS_ABSCENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		}
	} while(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSCENT);
	
	return selNum;
}


int main(int argc, char *argv[]) 
{
	srand((unsigned)time (NULL));
	
	printf("=============================================================================\n");
	printf("*****************************************************************************\n");
	printf("                                  BINGO GAME                                 \n");
	printf("*****************************************************************************\n");
	printf("=============================================================================\n\n\n");
	
	bingo_init();
	bingo_printBoard();
	int selNum = get_number();
	bingo_inputNum(selNum);
	bingo_printBoard();
	
	
	
	//initialize bingo boards
	
	/*
	while (게임이 끝나기 전까지) //줄수가 N_BINGO보다 작음 
	{
		//빙고번호 매번 출력
		//print no. of completed lines
		// select a proper number
		// 선택된 번호에 x로 대체  
    }
	
	*/
	
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("=============================================================================\n");
	printf("*****************************************************************************\n");
	printf("                             !!!CONGRATULATION!!!                            \n");
	printf("                             !!!*****BINGO*****!!!                           \n");
	printf("                                 !!!YOU WIN!!!                               \n");
	printf("*****************************************************************************\n");
	printf("=============================================================================\n\n\n");
	
	
	
	
	return 0;
}
