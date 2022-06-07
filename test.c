/**********************************************
 * Test de compilation avec la lib graphlib.h
 * (c)2013 Bogt 
 * 
 * gcc test.c graphlib.c -o test `sdl-config --cflags --libs` 
 **********************************************/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "SDL.h"
#include "graphlib.h"


int main (int argc , char ** argv)
{
if (argc==1) 	{
		printf ("Programme : %s \n",argv[0]);
		}

initSDL(800,600,"Test EASY");
ligne(10,10,150,160,0xFF0000);
disque(350,160,100,0x00FF00);
cercle (250,220,60,0x0000FF);
actualiser();
attendreTouche();
return EXIT_SUCCESS;  
}
