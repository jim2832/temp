#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void) {
	int input;int output[5];
    
    printf("請輸入金額：");
	scanf("%d",&input);

	if(input>99999 || input==0){
	    printf("數值範圍錯誤\n");
	    return 0;
	}
 
    for(int i=0;i<5;i++)
    {
        output[i]=(input/(int)pow(10,4-i))%10;
 
            switch(output[i])
            {
                case 1:
                    printf("壹");
                    break;
                case 2:
                    printf("貳");
                    break;
                case 3:
                    printf("參");
                    break;
                case 4:
                    printf("肆");
                    break;
                case 5:
                    printf("伍");
                    break;
                case 6:
                    printf("陸");
                    break;
                case 7:
                    printf("柒");
                    break;
                case 8:
                    printf("捌");
                    break;
                case 9:
                    printf("玖");
                    break; 
                default:
                    continue;
                    break;
            }
            switch(i)
            {
                case 0:
                    printf("萬");
                    break;
                case 1:
                    printf("仟");
                    break;
                case 2:
                    printf("佰");
                    break;
                case 3:
                    printf("十");
                    break;                    
            }
    }
    printf("元整");
	return 0;
}