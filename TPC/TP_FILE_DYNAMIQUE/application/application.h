#ifndef __APPLICATION_H__
#define __APPLICATION_H__

/*pour MA_FILE*/
#include "file_dyn.h" 

/* Prix et nombre de seances par jour */
#define NB_SEANCES 3
#define PRIX_SEANCE 10



/**
 * @brief initialisation de la caisse
 */
void init_caisse(float *argent, int *nb_ticket_vendu);



/**
 * @brief simulation de toute la journee (encaissement des seances)
 */
void encaissement(MA_FILE la_file, float *argent, int *nb_ticket_vendu);

#endif