#include<stdio.h>
using namespace std;


int main()
{
	char answer1, answer2, answer3, answer4, answer5, tryagain;


	int counter = 0;

	printf("1. What was the name of the film that made the idea of global warming famous?\na.An Inconvenient Lie\nb.Global Warming, Is It True?\nc.An Inconvenient Truth\nd.The Future of the Earth: Global Warming");
	scanf("%c", &answer1);

	if(answer1=='C' || answer1=='c')

		{
            printf("Right!\n");
			counter++;
		}
	else
		printf("Wrong!");


	printf("2. What is the main idea behind global warming?\na. The Butterfly Effect.\nb. The Greenhouse Effect.\nc. Theory of Relativity.\nd. The Smoke Effect.");
	scanf("%c", &answer2);

	if(answer2=='B' || answer2=='b')

		{

            printf("Right!\n");
			counter++;

		}

	else

		printf("Wrong!");

	printf("3. How much has the average global temperature risen/decreased by?\na. 3.3 degrees Fahrenheit.\nb. -1.2 degrees Fahrenheit\nc. 1.4 degrees Fahrenheit.\nd. 5 degrees Fahrenheit.");
	scanf("%c", &answer3);


	if(answer3=='C' ||answer3=='c')
		{
            printf("Right!\n");
			counter++;
		}

	else
		printf("Wrong!");

	printf("4. How much carbon dioxide does the U.S emit? (approximately)\na. 1 billion tons.\nb. 6 billion tons. \nc. 1 trillion tons.\nd. 9 billion tons.");
	scanf("%c", &answer4);


	if(answer4=='B' ||answer4=='b')
	{

            printf("Right!\n");
			counter++;
	}
	else

		printf("Wrong!");

	printf("5. When has 'Global Warming' occured in the past?\na. 10,000 years ago\nb. 1 billion years ago\nc. 40 million years ago.\nd. Never occured, happening now.");
	scanf("%c", &answer5);


	if(answer5=='C' ||answer5=='c')
		{
            printf("Right!\n");
			counter++;
		}
	else
		printf("Wrong!");


	if(counter == 5)

            printf("Excelent!\n");

	else if(counter == 4)

            printf("Very Good!\n");

	else
            printf("Time to brush up on your knowledge of global warming. You scored 3 or lower.\n");

	printf("Would you like to try again? Y or N");
    scanf("%c", &tryagain);



return 0;

}
