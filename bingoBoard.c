#include "bingoBoard.h" 
// bingoBoard.h ������ ���ٵǴ� ȿ�� 
#include <stdlib.h>
#include <time.h> 

# define BINGONUM_HOLE     -1
//������ �շ��ִ� ���� Ž���ϴ� ��ũ��

 
static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE]; //���� �� 


int bingo_checkNum(int selNum)
{
	if(numberStatus[selNum -1] == BINGONUM_HOLE)  //�� ���尡 ���� ����.
	 {
	 	return BINGO_NUMSTATUS_ABSCENT;
	 }
	 
	 return BINGO_NUMSTATUS_PRESENT;
	 
}


void bingo_printBoard(void)
{
	int i,j;
	
	printf("=============================================================================\n");
	
	for(i=0; i<N_SIZE; i++)
	{
		for(j=0; j<N_SIZE; j++)
		{
			if(bingoBoard[i][j] == BINGONUM_HOLE)
				printf("x\t"); // \t�� �ٸ��� 
			else
				printf("%i\t", bingoBoard[i][j]);
		}
		printf("\n");
	}
	printf("=============================================================================\n\n");
}

void bingo_init(void)
{
	int i, j, cnt = 1;
	
	for(i=0; i<N_SIZE; i++)
	{
		for(j=0; j<N_SIZE; j++)
		{
			if(cnt ==15)
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
	
}
 
void bingo_inputNum(int sel)
{
	int i,j;
	
	
	i = numberStatus[sel-1]/N_SIZE;
	j = numberStatus[sel-1]%N_SIZE;
	
	//numberStatus[] = i*sel + j;
	
	bingoBoard[i][j] = BINGONUM_HOLE;

	
}

