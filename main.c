#include<stdio.h>
#define bool _Bool

void print(char center, char* board){
	printf("Center: %i\n", center);
	for(int i = 0; i < 8; i++){
		printf("%i: %i\n",i, board[i]);
	}
}

void printBoard(char center, char* board){
	int array[9];
	for(int i = 0; i < 8; i++){
		if(board[i] == -1){
			array[i] = 'X';
		}else if(board[i] == 1){
			array[i] = 'O';
		}else{
			array[i] = ' ';
		}
	}
	if(center == -1){
		array[8] = 'X';
	}else if(center == 1){
		array[8] = 'O';
	}else{
		array[8] = ' ';
	}

	printf("%c%c%c\n",array[0],array[1],array[2]);
	printf("%c%c%c\n",array[7],array[8],array[3]);
	printf("%c%c%c\n",array[6],array[5],array[4]);

}

bool didPlayerWin(char center, char* board, char player){
	if(center == player){
		for(int i = 0; i < 4; i++){
			if(board[i] == player){
				if(board[i] == board[i+4]){
					return 1;
				}
			}
		}
	}
	for(int i = 1; i<7; i+=2){
		if(board[i] == player){
			if(board[i] == board[(i+1)%8]){
				if(board[i] == board[i-1]){
					return 1;
				}
				i+=2;
			}
		}
	}
	return 0;
}

int main(){
	char board[8];
	char center;
	printBoard(center, board);

}
