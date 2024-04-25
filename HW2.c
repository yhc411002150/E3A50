#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	char n;
	int code=0;
	
	printf(" 																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	printf(" 																	      \n");
	printf("    &    ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +   &      \n");
	printf("   &     +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++    &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &                                                                &     \n");
    printf("    $     EEEEEEE   3333        A          555555     00000        &      \n");
	printf("   &      EE            3      A A        55         00   00        &     \n");
	printf("  $       EEEEEE    3333      A   A      5555555    00   00          &    \n");
	printf("   &      EE            3    AA A AA         55    00   00          &     \n");
	printf("    $     EEEEEEE   3333    AA  　 AA   555555      00000          &      \n");
	printf("   &                                                                &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &     ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +    &     \n");
	printf("    &    +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++   &      \n");
	printf("    																      \n");
	printf("   																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	
	system("pause");             // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");               // 清除螢幕
//_________________________________以上為第一題
	printf("請輸入4 個數字的密碼(2023):");		//印出 
	scanf("%d",&code);
	if(code==2023)				//判斷條件 
	{
		printf("輸入正確!歡迎進入~\n");		//印出 
	}
	else
	{
		printf("密碼輸入錯誤!\n");			//印出 
		printf("%c", '\a');					//輸出警告聲響 
		return 0;				//結束程式 
	}
//_________________________________以上為第二題	
	system("CLS");               // 清除螢幕
	//印出主選單 
	{
		printf(" 																	      \n");
		printf("          __________________________________          \n");
		printf("         |                                  |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         *     MENU      *        |							      \n");
		printf("         |                                  |							      \n");
		printf("         |         A ~ Z : Uppercase        |\n");
		printf("         |         a ~ z : Lowercase        |\n");
		printf("         |         0 ~ 9 : Digit            |\n");
		printf("         |     Otherwise : My Class         |							      \n");
		printf("         |                 Seat number      |							      \n");
		printf("         |                 My namer         |							      \n");
		printf("         |                                  |							      \n");	
		printf("         |  please input a character later  |\n");
		printf("    	 |  will output the corresponding   |\n");
		printf("         |                                  |\n");
		printf("         |                                  |							      \n");
		printf("         |__________________________________|							      \n");
	}
//_________________________________以上為第三題	
	printf("請輸入一個字元:");
	fflush(stdin); 					// 使input buffer 淨空，常放在scanf()前;
	scanf("%c",&n);
	if( (n>='A') && (n<='Z') )		//判斷條件(n 在 A~Z) 
	{
		printf("Uppercase\n");
	}
		else if( (n>='a') && (n<='z') )		//判斷條件(n 在 a~z)
		{
			printf("Lowercase\n");	
		}
			else if( (n>='0') && (n<='9') )		//判斷條件(n 在 0~9)
			{
				printf("Digit\n");
			}	
				else 
				{
				printf("班級:E3A\n座號:50\n姓名:陳昱宏\n");
				}
	system("PAUSE");
	return 0;
//_________________________________以上為第四題	
}
