//-----------food-------------//

#include<stdio.h>
main()

{
	int food,pizza,burger,dosa,idli,quantity,total;
	char ch;
	do{
	
	printf("-----food-----\n");
	printf("1.pizza price=180rs/pcs\n");
	printf("2.burger price=100rs/pcs\n");
	printf("3.dosa price=120rs/pcs\n");
	printf("4.idli price=50rs/pcs\n");
	scanf("%d",&food);
	
	switch(food)
	{
		  printf("enter your choice\n");
		  scanf("%d",&food);
	case 1 : printf("enter your pizza\n");
	         printf("enter your quantity\n");
	         scanf("%d",&quantity);
	         total=180*quantity;
	         printf("total bill is: %d",total);
		     break;
	
	case 2 : printf("enter your burger\n");
	         printf("enter your quantity\n");
	         scanf("%d",&quantity);
	         total=100*quantity;
	         printf("total bill is: %d",total);
		     break;
		
	case 3 : printf("enter your dosa\n");
	         printf("enter your quantity\n");
	         scanf("%d",&quantity);
	         total=120*quantity;
	         printf("total bill is: %d",total);
		     break;
		
	case 4 : printf("enter your idli\n");
	         printf("enter your quantity\n");
	         scanf("%d",&quantity);
	         total=60*quantity;
	         printf("total bill is: %d",total);
		     break;
		
		}
		
		printf("\n do you want to continue\n");
		ch=getch();
}
    while(ch =='Y'||ch =='y');
	}
    
    	
	
