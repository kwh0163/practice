#pragma once
#include<stdio.h>

void quadrant(int x, int y)
{
	//사분면
	//제 1 사분면 (+x, +y)
	//제 2 사분면 (-x, +y)
	//제 3 사분면 (-x, -y)
	//제 4 사분면 (+x, -y)
	//Y 절편	  (0, y)
	//X 절편	  (x, 0)
	//원점		  (0, 0)


	if (x > 0 && y > 0) printf("제 1 사분면\n");
	else if (x < 0 && y > 0) printf("제 2 사분면\n");
	else if (x < 0 && y < 0) printf("제 3 사분면\n");
	else if (x > 0 && y < 0) printf("제 4 사분면\n");
	else if (x == 0 && y != 0) printf("X절편\n");
	else if (x != 0 && y == 0) printf("Y절편\n");
	else printf("원점\n");
}