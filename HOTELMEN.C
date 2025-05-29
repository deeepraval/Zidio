#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,gj,sabji,roti,plate,mrp,pj,ci;

	menu:
	clrscr();
	printf("\t \t \t   WELCOME TO TAJ HOTEL \n");
	printf("\n 1> Gujarati Dish");
	printf("\n-------------------------------------------");
	printf("\n 2> Punjabi Dish");
	printf("\n-------------------------------------------");
	printf("\n 3> Chinese Dish");
	printf("\n-------------------------------------------");
	printf("\n 4> Rajasthani Dish ");
	printf("\n-------------------------------------------");
	printf("\n 5> Street Food");
	printf("\n-------------------------------------------");
	printf("\n 6> South Indian Dish");
	printf("\n-------------------------------------------");
	printf("\n 7> ITALIAN ");
	printf("\n-------------------------------------------");
	printf("\n Enter the number between 1 to 7: ");
	scanf("%d",&ch);

	switch(ch)
	{

		case 1: printf("\n you selected Gujarati");
			printf("\n enter 1  sabji ");
			printf("\n enter 2  roti ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&gj);

			switch(gj)
			{
				case 1:	printf("\n you selected Sabji ");
					printf("\n enter 1 for bhindi");
					printf("\n enter 2 for bhaji");
					printf("\n enter 3 for brinjal ");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n You selected Bhindi ");
							printf("\n Enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*100;
							printf(" Your total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n You selected Bhaji");
							printf("\n Enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*120;
							printf(" Your total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n You selected Brinjal");
							printf("\n Enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*80;
							printf("\n Your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  You selected Roti");
						printf("\n enter 1 for tawa roti");
						printf("\n enter 2 for butter roti");
						printf("\n enter 3 for nan");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n You selected Tawa roti ");
							printf("\n enter number of tawa rotis you wanted ");
							scanf("%d",&plate);
							mrp=plate*25;
							printf(" Your total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  You selected Butter roti");
							printf("\n enter number of butter rotis you wanted ");
							scanf("%d",&plate);
							mrp=plate*50;
							printf(" Your total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n You selected Naan");
							printf("\n enter number of nan you wanted ");
							scanf("%d",&plate);
							mrp=plate*80;
							printf("\n Your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		       //--------------------------------gujrati dish over


		case 2: printf("\n you selected Punjabi dish ");
			printf("\n enter 1  punjabi sabji ");
			printf("\n enter 2  roti ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&pj);

			switch(pj)
			{
				case 1:	printf("\n you selected punjabi sabji ");
					printf("\n enter 1 for panner butter masala");
					printf("\n enter 2 for panner angara");
					printf("\n enter 3 for panner hungama ");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected panner butter masala ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*180;
							printf(" you total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n  you selected panner angara");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*200;
							printf(" you total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected panner hungama");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*220;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected roti");
						printf("\n enter 1 for butter roti");
						printf("\n enter 2 for butter nan roti");
						printf("\n enter 3 for cheese butter paratha");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected butter roti ");
							printf("\n enter number of butter rotis you wanted ");
							scanf("%d",&plate);
							mrp=plate*25;
							printf(" you total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected butter nan roti");
							printf("\n enter number of butter nan rotis you wanted ");
							scanf("%d",&plate);
							mrp=plate*50;
							printf(" you total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected cheese butter paratha");
							printf("\n enter number of nan you wanted ");
							scanf("%d",&plate);
							mrp=plate*80;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//------------------------------punjabi dish over

		case 3: printf("\n you selected chinese dish");
			printf("\n enter 1  starter ");
			printf("\n enter 2  rice  ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&ci);

			switch(ci)
			{
				case 1:	printf("\n you selected starter ");
					printf("\n enter 1 for veg manchuarian dry");
					printf("\n enter 2 for veg manchurian with gravy");
					printf("\n enter 3 for veg american chopsy ");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected veg manchuarian dry ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*180;
							printf(" you total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n  you selected veg manchurian gravy ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*200;
							printf(" you total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected veg american chopsy ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*220;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected rice");
						printf("\n enter 1 for veg manchurian rice");
						printf("\n enter 2 for veg hong kong rice");
						printf("\n enter 3 for veg schezwan rice");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected veg manchurian rice ");
							printf("\n enter number of  dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*250;
							printf(" you total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected veg hong kong rice");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*250;
							printf(" you total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected veg schezwan rice");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*280;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//------------------------------chinese dish over
		case 4: printf("\n you selected rajasthani dish ");
			printf("\n enter 1 dal bati ");
			printf("\n enter 2  rice  ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&ci);

			switch(ci)
			{
				case 1:	printf("\n you selected dal bati ");
					printf("\n enter 1 for dal bati with ghee");
					printf("\n enter 2 for dal bati with green chutney");
					printf("\n enter 3 for dal bati with thiki chuttney");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected dal bati with ghee ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*80;
							printf(" you total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n  you selected dal bati with green chutney ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*100;
							printf(" you total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected dal bati with thiki chutney");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*120;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected rice");
						printf("\n enter 1 for dal laziz rice");
						printf("\n enter 2 for bamboo rice");
						printf("\n enter 3 for steam rice");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected dal laziz rice ");
							printf("\n enter number of  dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*250;
							printf(" you total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected bamboo rice");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*250;
							printf(" you total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected steam rice");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*280;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//------------------------------rajasthani  dish over

		case 5: printf("\n you selected street food");
			printf("\n enter 1 vada pav");
			printf("\n enter 2  dabeli ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&ci);

			switch(ci)
			{
				case 1:	printf("\n you selected vada pav ");
					printf("\n enter 1 for  Bombay vada pav ");
					printf("\n enter 2 for  butter vada pav");
					printf("\n enter 3 for  cheese vada pav");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected Bombay vada pav ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*30;
							printf(" \n your total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n you selected Butter vada pav ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*35;
							printf("\n your total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected cheese vada pav");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*40;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected dabeli");
						printf("\n enter 1 for regular dabeli");
						printf("\n enter 2 for butter dabeli");
						printf("\n enter 3 for cheese jumbo dabeli");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected regular dabeli ");
							printf("\n enter number of  dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*25;
							printf(" your total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected butter dabeli");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*30;
							printf(" your total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected cheese jumbo dabeli");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*50;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//------------------------------street food over

		case 6: printf("\n you selected south indian food");
			printf("\n enter 1 DOSA");
			printf("\n enter 2  IDLI ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&ci);

			switch(ci)
			{
				case 1:	printf("\n you selected DOSA ");
					printf("\n enter 1 for  MASALA DOSA ");
					printf("\n enter 2 for  MYSORE DOSA");
					printf("\n enter 3 for  CHEESE MYSORE DOSA");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected MASALA DOSA");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*130;
							printf(" \n your total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n you selected MYSORE DOSA");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*135;
							printf("\n your total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected CHEESE MYSORE DOSA");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*150;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected IDLI");
						printf("\n enter 1 for IDLI WITH SAMBHAR");
						printf("\n enter 2 for IDLI WITH COCONUT CHUTNEY");
						printf("\n enter 3 for FRIED IDLI WITH COCONUT CHUTNEY");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected IDLI WITH SAMBHAR");
							printf("\n enter number of  dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*40;
							printf(" your total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected  IDLI WITH COCONUT CHUTNEY");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*50;
							printf(" your total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected FRIED IDLI WITH COCONUT CHUTNEY");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*70;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//----------------------------- south indian dish over

		case 7: printf("\n you selected ITALIAN");
			printf("\n enter 1 PIZZA");
			printf("\n enter 2  PASTA ");
			printf("\nenter 3 for goto menu");
			printf("\n enter value: ");
			scanf("%d",&ci);

			switch(ci)
			{
				case 1:	printf("\n you selected PIZZA ");
					printf("\n enter 1 for  PERI PERI PIZZA ");
					printf("\n enter 2 for  MARGRETTA PIZZA");
					printf("\n enter 3 for  SEVEN HEAVEN PIZZA");
					printf("\n enter value: ");
					scanf("%d",&sabji);

					switch(sabji)
					{
						case 1:
							printf("\n you selected PERI PERI PIZZA ");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*180;
							printf(" \n your total bill will be :%d",mrp);
							break;

						case 2:
							printf("\n you selected MARGRETTA PIZZA");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*235;
							printf("\n your total bill will be :%d",mrp);
							break;
						case 3:
							printf("\n you selected SEVEN HEAVEN PIZZA");
							printf("\n enter number of plates you wanted ");
							scanf("%d",&plate);
							mrp=plate*250;
							printf("\n your total bill will be :%d",mrp);
							break;

					}
					break;
				case 2: printf("\n  you selected PASTA");
						printf("\n enter 1 for BAKED MACRONI WITH PINAPPLE");
						printf("\n enter 2 for BAKED MACRONI WITHOUT PINAPPLE");
						printf("\n enter 3 for WHITE SAUCE PASTA");
						printf("\n enter value: ");
						scanf("%d",&roti);

						switch(roti)
						{
							case 1:
							printf("\n you selected BAKED MACRONI WITH PINAPPLE");
							printf("\n enter number of  dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*240;
							printf(" your total bill will be :%d",mrp);
							break;

							case 2:
							printf("\n  you selected  BAKED MACRONI WITHOUT PINAPPLE");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*220;
							printf(" your total bill will be :%d",mrp);
							break;

							case 3:
							printf("\n you selected WHITE SAUCE PASTA");
							printf("\n enter number of dish you wanted ");
							scanf("%d",&plate);
							mrp=plate*200;
							printf("\n your total bill will be :%d",mrp);
							break;
						}
					break;
				case 3:
					goto menu;
					break;




			}
			break;
		//---



	}
	//break;
	getch();
}