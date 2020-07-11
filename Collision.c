#include <stdio.h>

int collision (PlayerX,PlayerY,PlayerW,PlayerH,EnemyX,EnemyY,EnemyW,EnemyH){
	if(PlayerX < EnemyX + EnemyW && PlayerX + PlayerW > EnemyX && PlayerY < EnemyY + EnemyH && PlayerY + PlayerH > EnemyY){
		printf("collision\n");
		return 0;
	}else{
		printf("not collision\n");
		return 0;
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

			
