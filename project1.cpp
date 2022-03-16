#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <chrono>
#include <mmsystem.h>
#include <conio.h>
using namespace std;
int main()
{
	int bn, n;
	char x;
	do
	{
		for (bn = 1; bn <= 12; bn++)
		{
			printf("\n====={Table %d}======\n", bn);
			for (n = 1; n <= 12; n++)
			{
				//Sleep(500);
				printf("%d * %d = %d\n", bn, n, bn * n);
			}
			printf("=====================\n");
		}
		printf("Do you want to close the program Y/N\n");
		x = _getche();
	} while (x == 'n' && 'N');
	system("PAUSE");
}