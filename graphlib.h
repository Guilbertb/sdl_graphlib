/************************************************/
/*                                              */
/*                         GRAPHLIB.C           */
/* Librairie graphique pour la SDL              */
/*                                              */
/* Auteur : Pierre Louis Aublin                 */
/*                                              */
/* Date : f�vrier 2006                          */
/* Modifi� par Bruno Guilbert 2013              */
/************************************************/


#ifndef GRAPHLIB_H_
#define GRAPHLIB_H_


/*initialise une fen�tre graphique de x pixels par y pixels et dont le titre est titre*/
void initSDL(int x,int y, char titre[]);

/* initialise le tableau des couleurs */
void initCouleurs(void);

/* suspend l'�x�cution jusqu'a l'appuie d'une touche ou l'appuie sur la croix pour fermer le programme */
void attendreTouche(void);

/* actualise l'affichage */
void actualiser(void);

/* allume le pixel (x,y) avec la couleur coul */
void setPixel(int x, int y, Uint32 coul);

/* allume le pixel (x,y) avec la couleur coul si ses coordonn�es sont valides*/
void setPixelVerif(int x, int y, Uint32 coul);

/* trace un rectangle plein du point (x,y) au point (w,h) avec la couleur coul */
void barre(int x, int y, int w, int h, Uint32 coul);

/* trace une ligne horizontale du point (x,y) au point (x+w,y) avec la couleur coul */
void ligneHorizontale(int x, int y, int w, Uint32 coul);

/* trace une ligne verticale  du point (x,y) au point (x,y+h) avec la couleur coul */
void ligneVerticale(int x, int y, int h, Uint32 coul);

/* trace un rectangle du point (x,y) au point (w,h) avec la couleur coul */
void rectangle(int x, int y, int w, int h, Uint32 coul);

/* efface l'�cran */
void effacerEcran(void);

/* �change deux entiers x et y */
void echangerEntiers(int* x, int* y);

/* trace une ligne du point (x1,y1) au point (x2,y2) avec la couleur coul */
void ligne(int x1, int y1, int x2, int y2, Uint32 coul);

/* trace un cercle de centre (cx,cy), de rayon rayon et de couleur coul */
void cercle(int cx, int cy, int rayon, int coul);

/* trace un disque (cercle plein) de centre (cx,cy), de rayon rayon et de couleur coul */
void disque(int cx, int cy, int rayon, int coul);

/* v�rifie si une touche a �t� enfonc�e ou si l'utilisateur a appuy� sur la croix sans suspendre l'�x�cution */
int quitter(void);

/* fait patienter le programme pendant sec secondes */
void patienter(int sec);

/* fait une pause */
void pause(void);


#endif
/*********** FIN DE GRAPHLIB.H ***********/
