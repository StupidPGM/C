#include <stdio.h>

void collision (int player[],int enemy[]){
	if(player[0] < enemy[0] + enemy[2] && player[0] + player[2] > enemy[0] && player[1] < enemy[1] + enemy[3] && player[1] + player[3] > enemy[1]){
		printf("it collision\n");
	}else{
		printf("not collision\n");
		
	}
int main(){
	int player[4] = {0,0,50,50};
	int enemy[4] = {0,0,25,25};
	
	printf("PlayerX:");
	scanf("%d", &player[0]);
	printf("PlayerY:");
	scanf("%d", &player[1]);
	printf("EnemyX:");
	scanf("%d", &enemy[0]);
	printf("EnemyY:");
	scanf("%d", &enemy[1]);

	collision (player,enemy);
	return 0;
}


			
