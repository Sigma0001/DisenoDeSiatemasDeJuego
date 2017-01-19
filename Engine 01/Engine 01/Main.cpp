#include "Main.h"

void engineStat()
{
	memoStart();
	audioStart();
	videoStart();
	physicStart();
	renderStart();
}

void engineStop()
{	
	renderStop();
	physicStop();
	videoStop();
	audioStop();
	memoStop();
}

void main()
{
	engineStat();
	std::cout << "\n";
	engineStop();
	std::cout << "\n";
	system("pause");
}

