#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	char c;//case A的變數 
	int count = 0,password = 2023 ;//第一題用的計數跟密碼 
	char MENU;//主選單的輸入 
	int i,j,n;// case B的變數 
	/*printf(" 																	      \n");
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
	//system("pause");             // 螢幕畫面暫停，並等待使用者按任意鍵
	//system("CLS");               // 清除螢幕
	while (count < 3) 
	{
        printf("請輸入四個數字的密碼：");
        scanf("%d",&password);
        count++;
        if (password==2023)
		{
            printf("輸入正確！歡迎~\n");
            break;
        } 
		else 
		{
	        printf("密碼錯誤，已輸入: %d 次。\n", count);
            if (count == 3) 
			{
        		printf("輸入已連續錯誤三次，登入結束！\n");
      		  printf("%c", '\a');					//輸出警告聲響 
				return 0;
    		}
    	}
    }
//_________________________________以上為第一題	
	system("CLS");               // 清除螢幕
	//印出主選單 
	*/
	while(1)
	{
		{
			printf("\n");
			printf("\n");
			printf("         |    *****                  *      |\n");/*螢幕出現主選單，*/ 
			printf("         |     ***  E3A 50  陳昱宏  ***     |\n");
			printf("         |      *                  *****    |\n");
			printf("          __________________________________ \n");
			printf("         |                                  |\n");
			printf("         |      *        MENU        *      |\n");
			printf("         |                                  |\n");
			printf("         |         a. 畫出直角三角形        |\n");
			printf("         |         b. 顯示乘法表            |\n");
			printf("         |         c. 結束                  |\n");
			printf("         |                                  |\n");
			printf("         |                                  |\n");
			printf("         |__________________________________|\n");
		}
	
		printf("    請輸入想執行的選項: ");
		fflush(stdin);
		scanf("%c",&MENU);
		switch(MENU)
		{
			case 'a':
			case 'A':
				system("CLS"); // 清除螢幕
				do 
				{
					printf("    請輸入一個‘a’到‘n’的字元: ");		
					fflush(stdin); 					// 使input buffer 淨空，常放在scanf()前;
					scanf("%c",&c);
					if(c < 'a' || c > 'n')				 
 		  		    {
 		  		    	printf("輸入錯誤!請重新輸入~\n");	//如果有錯，就要給一個提示字句告知輸入有錯。 
					}
				}
				while(c < 'a' || c > 'n');
			//	for(char A= c ; A>'a' ;A-- )
				{
			//	printf("%c",A);		
				}
    	    	getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕			
				break;
			case 'b':
			case 'B':
				system("cls"); // 清除螢幕
				do
				{				
 	  	    	 	printf("請輸入一個1至9的整數n：");
 	 	     	 	fflush(stdin); 					// 使input buffer 淨空，常放在scanf()前;
 	  			    scanf("%d", &n);
 	  			    if(n < 1 || n > 9)		//如果有錯，就要給一個提示字句告知輸入有錯。 
 	 	 		    {
 	 	 		    	printf("輸入錯誤!請重新輸入~\n");	
					}
    			}
    	   		while(n < 1 || n > 9);
     	  		printf("乘法表：\n");
      	  		for (i = 1; i <= n; i++) 
						{
      			      	for (j = 1; j <= n; j++) 
						{
      			          printf("  %d * %d = %2d  ",i,j, i * j);
      			      	}
      			     	printf("\n");
       	 		}
        		getch();						// 按任意鍵清除 
				system("CLS"); 					// 清除螢幕
				break;
		}
	}
	

		
	
	system("PAUSE");
	return 0;
//_________________________________以上為第四題	
}
