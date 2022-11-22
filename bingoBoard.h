#define N_SIZE     5
#define N_LINE	   2 
//매크로 정의 문구 
#define BINGO_NUMSTATUS_ABSCENT   -1
#define BINGO_NUMSTATUS_PRESENT    0





void bingo_init(void); //변수를 bingoBoard.c 에서만 관리할 수 있도록 하기 위해 void bingo_init이라고 작성하며 return값이 없도록 함

int bingo_countCompletedLine(void); //int로 변환한 값으로 출력하겠다. (void)=출력이 필요없다 
 
void bingo_inputNume(int sel); 
 
void bingo_printBoard(void);

//int get_number(void);

int bingo_checkNum(int selNum);

