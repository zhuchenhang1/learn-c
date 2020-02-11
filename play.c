#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_row 3
#define max_col 3

int menu(){
	//交互界面
	printf("----------------\n");
	printf("欢迎来到三子棋游戏\n");
	printf(" 选择1: 开始游戏\n ");
	printf(" 选择0:退出游戏\n  ");
	printf("----------------\n");
	printf(" 请输入你的选择\n  ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//初始化棋盘
void init(char chessboard[max_row][max_col]){
	for (int row= 0; row< max_row; row++){
		for(int col= 0; col< max_col; col++){
			chessboard[row][col] =' ';
		}
	}
	srand((unsigned int)time(0));
}
//打印初始化棋盘
void print(char chessboard[max_row][max_col]){
	printf("-----------------\n");
	for (int row= 0; row< max_row; row++){
		for (int col= 0; col< max_col; col++){
			//%c表示打印每个字符
			printf("%c ", chessboard[row][col]);
		}
		printf("-----------------\n");
	}
}
//玩家落子
void PlayerMove(char chessboard[max_row][max_col]){
	printf("玩家落子\n");
	while (1){
		printf("请输入要落子的位置\n");
		int row = 0;
		int col = 0;
		scanf("%d,%d", &row, &col);
		if (row < 0 || row >= max_row || col < 0 || col >= max_col){
			printf("您的输入有误,请重新输入\n");
			continue;
		}
		if (chessboard[row][col] != ' '){
			printf("该位置已经有子了,请重新输入\n");
			continue;
		}
		chessboard[row][col] = 'x';
	}
}
//电脑落子
void ComputerMove(char chessboard[max_row][max_col]){
	printf("电脑落子\n");
	while (1){
		int row = rand() % max_row;
		int col = rand() % max_col;
		if (chessboard[row][col] != ' '){
			//说明这个位置已经有子了;
			continue;
		}
		chessboard[row][col] = 'o';
		break;
	}
}
//判断棋盘是否满了的函数,满了返回1,没满返回0;
int isfull(char chessboard[max_row][max_col]){
	for (int row = 0; row < max_row; row++){
		for (int col = 0; col < max_col; col++){
			if (chessboard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//检查游戏是否结束
//'x' 表示玩家赢了
//'o' 表示电脑赢了
//' ' 表示五五开
//'Q' 表示和棋
char check(char chessboard[max_row][max_col]){
//先检查所有行
	for (int row = 0; row < max_row; row++){
		//也要考虑一行都是空格的情况
		if (chessboard[row][0] != ' '
			&&chessboard[row][0] == chessboard[row][1]
			&& chessboard[row][0] == chessboard[row][2]){
			return chessboard[row][0];
		}
	}
//在检查所有列
	for (int col = 0; col < max_col; col++){
		if (chessboard[0][col] != ' '
			&&chessboard[0][col] == chessboard[1][col]
			&& chessboard[0][col] == chessboard[2][col]){
			return chessboard[0][col];
		}
	}
//再检查对角线
	if (chessboard[0][0] != ' '
		&&chessboard[0][0] == chessboard[1][1]
		&&chessboard[0][0] == chessboard[2][2]){
		return chessboard[0][0];
	}
	if (chessboard[0][2] != ' '
		&&chessboard[0][2] == chessboard[1][1]
		&&chessboard[0][2]==chessboard[2][0]){
		return chessboard[0][2];
	}
	if (isfull(chessboard)){
		return 'Q';
	}
	return ' ';
}
//执行这个函数,开始一次游戏
void game(){
	//1 创建棋盘并初始化棋盘(每个位置都设为空格);
	char chessboard[max_row][max_col];
	void init(chessboard);
	char winner = ' ';
	while (1){
		//2 打印棋盘(第一次打印的是空白棋盘);
		print(chessboard);
		//3 玩家落子(通过输入坐标的方式指定位置);
		PlayerMove(chessboard);
		//4 判断一下游戏是否结束;
		winner = check(chessboard);
		if (winner != ' '){
			break;
		}
		//5 电脑落子(随机落子);
		ComputerMove(chessboard);
		//6 判断游戏是否结束;
		winner = check(chessboard);
		if (winner != ' '){
			break;
		}
	}
	printf(chessboard);
	if (winner == 'x'){
		printf("恭喜你,你赢了!\n");
	}
	else if (winner == 'o'){
		printf("你真菜,这电脑都下不过\n");
	}
	else{
		printf("你真菜,你和电脑五五开");
	}
}
int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if(choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("您的输入有误,请重新输入");
		}
	}
	system("pause");
	return 0;
}

