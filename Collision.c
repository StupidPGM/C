#include <stdio.h>

void collision (int PlayerX,int PlayerY,int PlayerW,int PlayerH, int EnemyX, int EnemyY, int EnemyW, int EnemyH){
	if(PlayerX < EnemyX + EnemyW && PlayerX + PlayerW > EnemyX && PlayerY < EnemyY + EnemyH && PlayerY + PlayerH > EnemyY){
		printf("it collision\n");
	}else{
		printf("not collision\n");
		
	}
}

int main(){
	int PlayerX, PlayerY, PlayerW = 50,PlayerH = 50;
	int EnemyX, EnemyY, EnemyW = 50,EnemyH = 50;
	printf("PX:");
	scanf("%d", &PlayerX);
	printf("PY:");
	scanf("%d", &PlayerY);
	printf("EX:");
	scanf("%d", &EnemyX);
	printf("EY:");
	scanf("%d", &EnemyY);
	collision (PlayerX,PlayerY,PlayerW,PlayerH,EnemyX,EnemyY,EnemyW,EnemyH);
	return 0;
}
