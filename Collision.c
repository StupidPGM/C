#include <stdio.h>

struct build{
	int x;
	int y;
	int width;
	int height;
}player, enemy;

void collision (struct build player, struct build enemy){
	if(player.x < enemy.x + enemy.width && player.x + player.width > enemy.x && player.y < enemy.y + enemy.height && player.y + player.height > enemy.y){
		printf("it collision\n");
	}else{
		printf("not collision\n");
	}
}

int main(){
	printf("PlayerX: ");
	scanf("%d",&player.x);
	printf("PlayerY: ");
	scanf("%d",&player.y);
	
	player.width = 50;
	player.height = 50;
	
	printf("EnemyX: ");
	scanf("%d",&enemy.x);
	printf("EnemyY: ");
	scanf("%d",&enemy.y);
	
	enemy.width = 50;
	enemy.height = 50;
	
	collision (player,enemy);
	
	return 0;
}


			
