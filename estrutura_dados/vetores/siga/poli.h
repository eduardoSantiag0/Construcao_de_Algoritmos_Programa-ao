/*
  POLI.H
  Definicoes e prototipos para manipulacao de polinomios
  Jander Moreira, 2020
*/
#ifndef __POLY_H__
#define __POLY_H__

//---------------------------------------------
// definicoes gerais
#define GRAU_MAXIMO 40

//---------------------------------------------
// estruturas de dados
struct poli{
	unsigned int grau;
	double coeficiente[GRAU_MAXIMO + 1];
};

//---------------------------------------------
// prototipos
struct poli leia_polinomio();
struct poli leia_polinomio_monomios();
struct poli leia_polinomio_cadeia();
void escreva_polinomio(struct poli);
struct poli interprete_polinomio(char[]);
struct poli multiplique_polinomios(struct poli, struct poli);


#endif