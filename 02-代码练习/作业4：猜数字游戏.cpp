#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));              // 初始化随机数种子
    int secret = rand() % 100 + 1;  // 生成 1~100
    int guess;
    int cnt = 1;

    // TODO 1: while 循环让用户输入猜的数（scanf %d）
    // TODO 2: 比大小，大了/小了给提示
    // TODO 3: 猜中 break，循环外输出"恭喜！你猜了 X 次"
    printf("请输入你猜的数字：");
	scanf("%d",&guess);
    while(secret!=guess){
    	if(secret<guess){
    	printf("大了，请再输入一个数：");
    	scanf("%d",&guess);
		}else if(secret>guess){
    	printf("小了，请再输入一个数：");
    	scanf("%d",&guess);
		}
		cnt++;
    }
    
    printf("恭喜！你猜了%d次\n",cnt);
    
    return 0;
}