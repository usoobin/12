#define N_SIZE     5
#define N_LINE	   2 
//��ũ�� ���� ���� 
#define BINGO_NUMSTATUS_ABSCENT   -1
#define BINGO_NUMSTATUS_PRESENT    0





void bingo_init(void); //������ bingoBoard.c ������ ������ �� �ֵ��� �ϱ� ���� void bingo_init�̶�� �ۼ��ϸ� return���� ������ ��

int bingo_countCompletedLine(void); //int�� ��ȯ�� ������ ����ϰڴ�. (void)=����� �ʿ���� 
 
void bingo_inputNume(int sel); 
 
void bingo_printBoard(void);

//int get_number(void);

int bingo_checkNum(int selNum);

