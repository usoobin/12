#include "bingoBoard.h" 
// bingoBoard.h 내용이 복붙되는 효과 
#include <stdlib.h>
#include <time.h> 

# define BINGONUM_HOLE     -1
//구멍이 뚫려있는 것을 탐지하는 매크로


 
static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE]; //숫자 위 


	



int bingo_checkNum(int selNum)
{
	if(numberStatus[selNum -1] == BINGONUM_HOLE)  //이 보드가 값이 없다.
	 {
	 	return BINGO_NUMSTATUS_ABSCENT;
	 }
	 
	 return BINGO_NUMSTATUS_PRESENT;
	 
}

/*int get_number(void)
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
}*/




void bingo_printBoard(void)
{
	int i,j;
	
	printf("=============================================================================\n");
	
	for(i=0; i<N_SIZE; i++)
	{
		for(j=0; j<N_SIZE; j++)
		{
			if(bingoBoard[i][j] == BINGONUM_HOLE)
				printf("x\t"); // \t는 줄맞춤 
			else
				printf("%i\t", bingoBoard[i][j]);
		}
		printf("\n");
	}
	printf("=============================================================================\n\n");
}

void bingo_init(void)
{
	int i, j, selNum, cnt = 1;
	
	for(i=0; i<N_SIZE; i++)
	{
		for(j=0; j<N_SIZE; j++)
		{
			if(cnt == selNum)
			{
				bingoBoard[i][j] = BINGONUM_HOLE;
				numberStatus[cnt-1] = i*N_SIZE + j ;
				
				cnt++;
			}
			
			else	
			{
				numberStatus[cnt-1] = i*N_SIZE + j ;	
				bingoBoard[i][j] = cnt++;
			}
			
		}	
	}	
}


int bingo_countCompletedLine(void)
{
	int i, j;
	int cnt = 0;
	int checkBingo;
	
	for(i=0; i<N_SIZE; i++)
	{
		if(bingoBoard[i][j] > 0)
		{
			checkBingo = 0;
			break;
		}
	
		if (checkBingo == 1)
		{
			cnt ++;
		}
	}
	
		for(j=0; j<N_SIZE; j++)
	{
		if(bingoBoard[i][j] > 0)
		{
			checkBingo = 0;
			break;
		}
	
		if (checkBingo == 1)
		{
			cnt ++;
		}
	}
	
	
	checkBingo = 1;
	for (i = 0; i<N_SIZE; i++)
	{
		if(bingoBoard[i][j] > 0)
		{
			checkBingo = 0;
			break;
		}
	}
	if(checkBingo == 1)
		cnt ++;
		
		
		
	checkBingo = 1;
	for (i = 0; i<N_SIZE; i++)
	{
		if(bingoBoard[i][N_SIZE - i-1] > 0)
		{
			checkBingo = 0;
			break;
		}
	}
	if(checkBingo == 1)
		cnt ++;
	
}
 
void bingo_inputNum(int sel)
{
	int i,j;
	
	
	i = numberStatus[sel-1]/N_SIZE;
	j = numberStatus[sel-1]%N_SIZE;
	
	//numberStatus[] = i*sel + j;
	
	bingoBoard[i][j] = BINGONUM_HOLE;

 //numberStatus[sel-1] =  
	
}

