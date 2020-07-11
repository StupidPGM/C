#include <stdio.h>

void collision (struct player,struct enemy){
	if(player.x < enemy.x + enemy.width && player.x + player.width > enemy.x && player.y < enemy.y + enemy.height && player.y + player.height > enemy.y){
		printf("it collision\n");
	}else{
		printf("not collision\n");
	}
struct playerbuild{
	int x;
	int y;
	int width;
	int height;
}player;
struct enemybuild{
	int x;
	int y;
	int width;
	int height;
}enemy;

int main(){
	printf("PlayerX: ");
	scanf("%d",player.x);
	printf("PlayerY: ");
	scanf("%d",player.y);
	
	player.width = 50;
	player.height = 50;
	
	printf("EnemyX: ");
	scanf("%d",enemy.x);
	printf("EnemyX: ");
	scanf("%d",enemy.y);
	
	enemy.width = 50;
	enemy.height = 50;
	
	
	collision (player,enemy);
	
	return 0;
}


			
