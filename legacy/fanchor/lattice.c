#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lb.h"

void lattice_vec()
{
		  int i;

		  for(i=0;i<3;i++){
					 e[0][i] = 0;
		  }

		  e[1][0] = 1;
		  e[1][1] = 0;
		  e[1][2] = 0;

		  e[2][0] = 0;
		  e[2][1] = 1;
		  e[2][2] = 0;

		  e[3][0] = -1;
		  e[3][1] = 0;
		  e[3][2] = 0;

		  e[4][0] = 0;
		  e[4][1] = -1;
		  e[4][2] = 0;

		  e[5][0] =  0;
		  e[5][1] =  0;
		  e[5][2] =  1;

		  e[6][0] =  0;
		  e[6][1] =  0;
		  e[6][2] = -1;

		  e[7][0] = +1;
		  e[7][1] = +1;
		  e[7][2] = +1;

		  e[8][0] = -1;
		  e[8][1] = 1;
		  e[8][2] = 1;

		  e[9][0] = -1;
		  e[9][1] = -1;
		  e[9][2] = +1;

		  e[10][0] = +1;
		  e[10][1] = -1;
		  e[10][2] = +1;

		  e[11][0] = +1;
		  e[11][1] = +1;
		  e[11][2] = -1;

		  e[12][0] = -1;
		  e[12][1] = +1;
		  e[12][2] = -1;

		  e[13][0] = -1;
		  e[13][1] = -1;
		  e[13][2] = -1;

		  e[14][0] = +1;
		  e[14][1] = -1;
		  e[14][2] = -1;

}