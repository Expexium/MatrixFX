/*
 ███▄ ▄███▓ ▄▄▄     ▄▄▄█████▓ ██▀███   ██▓▒██   ██▒     █████▒▒██   ██▒
▓██▒▀█▀ ██▒▒████▄   ▓  ██▒ ▓▒▓██ ▒ ██▒▓██▒▒▒ █ █ ▒░   ▓██   ▒ ▒▒ █ █ ▒░
▓██    ▓██░▒██  ▀█▄ ▒ ▓██░ ▒░▓██ ░▄█ ▒▒██▒░░  █   ░   ▒████ ░ ░░  █   ░
▒██    ▒██ ░██▄▄▄▄██░ ▓██▓ ░ ▒██▀▀█▄  ░██░ ░ █ █ ▒    ░▓█▒  ░  ░ █ █ ▒
▒██▒   ░██▒ ▓█   ▓██▒ ▒██▒ ░ ░██▓ ▒██▒░██░▒██▒ ▒██▒   ░▒█░    ▒██▒ ▒██▒
░ ▒░   ░  ░ ▒▒   ▓▒█░ ▒ ░░   ░ ▒▓ ░▒▓░░▓  ▒▒ ░ ░▓ ░    ▒ ░    ▒▒ ░ ░▓ ░
░  ░      ░  ▒   ▒▒ ░   ░      ░▒ ░ ▒░ ▒ ░░░   ░▒ ░    ░      ░░   ░▒ ░
░      ░     ░   ▒    ░        ░░   ░  ▒ ░ ░    ░      ░ ░     ░    ░
	   ░         ░  ░           ░      ░   ░    ░              ░    ░
*/		
#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

HANDLE hConsole;

int main()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
char x;

	while (true)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int t = 0; t < 4; t++)
			{
				x = rand() % (90-47)+48;
				if (x > 57 && x < 65)
				{
					x += 7;
				}
				cout << x ;
				
			
			}
			cout << ' ';
		}
		
	}
}
