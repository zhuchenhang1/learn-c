#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_row 3
#define max_col 3

int menu(){
	//��������
	printf("----------------\n");
	printf("��ӭ������������Ϸ\n");
	printf(" ѡ��1: ��ʼ��Ϸ\n ");
	printf(" ѡ��0:�˳���Ϸ\n  ");
	printf("----------------\n");
	printf(" ���������ѡ��\n  ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//��ʼ������
void init(char chessboard[max_row][max_col]){
	for (int row= 0; row< max_row; row++){
		for(int col= 0; col< max_col; col++){
			chessboard[row][col] =' ';
		}
	}
	srand((unsigned int)time(0));
}
//��ӡ��ʼ������
void print(char chessboard[max_row][max_col]){
	printf("-----------------\n");
	for (int row= 0; row< max_row; row++){
		for (int col= 0; col< max_col; col++){
			//%c��ʾ��ӡÿ���ַ�
			printf("%c ", chessboard[row][col]);
		}
		printf("-----------------\n");
	}
}
//�������
void PlayerMove(char chessboard[max_row][max_col]){
	printf("�������\n");
	while (1){
		printf("������Ҫ���ӵ�λ��\n");
		int row = 0;
		int col = 0;
		scanf("%d,%d", &row, &col);
		if (row < 0 || row >= max_row || col < 0 || col >= max_col){
			printf("������������,����������\n");
			continue;
		}
		if (chessboard[row][col] != ' '){
			printf("��λ���Ѿ�������,����������\n");
			continue;
		}
		chessboard[row][col] = 'x';
	}
}
//��������
void ComputerMove(char chessboard[max_row][max_col]){
	printf("��������\n");
	while (1){
		int row = rand() % max_row;
		int col = rand() % max_col;
		if (chessboard[row][col] != ' '){
			//˵�����λ���Ѿ�������;
			continue;
		}
		chessboard[row][col] = 'o';
		break;
	}
}
//�ж������Ƿ����˵ĺ���,���˷���1,û������0;
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
//�����Ϸ�Ƿ����
//'x' ��ʾ���Ӯ��
//'o' ��ʾ����Ӯ��
//' ' ��ʾ���忪
//'Q' ��ʾ����
char check(char chessboard[max_row][max_col]){
//�ȼ��������
	for (int row = 0; row < max_row; row++){
		//ҲҪ����һ�ж��ǿո�����
		if (chessboard[row][0] != ' '
			&&chessboard[row][0] == chessboard[row][1]
			&& chessboard[row][0] == chessboard[row][2]){
			return chessboard[row][0];
		}
	}
//�ڼ��������
	for (int col = 0; col < max_col; col++){
		if (chessboard[0][col] != ' '
			&&chessboard[0][col] == chessboard[1][col]
			&& chessboard[0][col] == chessboard[2][col]){
			return chessboard[0][col];
		}
	}
//�ټ��Խ���
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
//ִ���������,��ʼһ����Ϸ
void game(){
	//1 �������̲���ʼ������(ÿ��λ�ö���Ϊ�ո�);
	char chessboard[max_row][max_col];
	void init(chessboard);
	char winner = ' ';
	while (1){
		//2 ��ӡ����(��һ�δ�ӡ���ǿհ�����);
		print(chessboard);
		//3 �������(ͨ����������ķ�ʽָ��λ��);
		PlayerMove(chessboard);
		//4 �ж�һ����Ϸ�Ƿ����;
		winner = check(chessboard);
		if (winner != ' '){
			break;
		}
		//5 ��������(�������);
		ComputerMove(chessboard);
		//6 �ж���Ϸ�Ƿ����;
		winner = check(chessboard);
		if (winner != ' '){
			break;
		}
	}
	printf(chessboard);
	if (winner == 'x'){
		printf("��ϲ��,��Ӯ��!\n");
	}
	else if (winner == 'o'){
		printf("�����,����Զ��²���\n");
	}
	else{
		printf("�����,��͵������忪");
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
			printf("������������,����������");
		}
	}
	system("pause");
	return 0;
}

