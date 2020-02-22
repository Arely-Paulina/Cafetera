#include<windows.h>

void gotoxy(int x, int y)//Funcion que posiciona el curso en la posicion (x,y)
{
	HANDLE hCon;
	COORD dwPos;
	
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
	
}

