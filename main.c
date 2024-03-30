#include<stdio.h>

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


int main(){
	char board[8];
	char center;
	printBoard(center, board);

}
