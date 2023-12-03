#include <stdio.h> 
 #include <string.h> 
 #include <assert.h> 
 #include <math.h> 
 #include "poli.h" 
 #include "geral.h"
 // cria_polinomio 
 // Entrada: não há 
 // Saída: um polinômio nulo como valor de retorno
struct poli cria_polinomio(){
	struct poli poli;

	poli.grau = 0;
	for(int i = 0; i <= GRAU_MAXIMO; i++)
		poli.coeficiente[i] = 0.0;

	return poli;
}

struct poli interprete_polinomio(char cadeia[]){
	struct poli poli = cria_polinomio();

	assert(caracteres_validos(cadeia));
	remova_espacos(cadeia);
	
	// quebra a cadeia de caracteres em monomios
	//   * cada monomio ax^n
	//   * a = coeficiente
	//   * n = grau
	char token[30];
	int indice_busca = 0; // varredura de cadeia
	while(cadeia[indice_busca] != '\0'){
		int indice_insercao = 0;

		// numero real
		double sinal = 1; // positivo
		if(cadeia[indice_busca] == '-'){
			sinal = -1; // negativo
			indice_busca++;
		} else if(cadeia[indice_busca] == '+')
			indice_busca++;
		while(cadeia[indice_busca] != '\0'
		  && (cadeia[indice_busca] == '.' ||
		    e_digito(cadeia[indice_busca]))){
			token[indice_insercao] = cadeia[indice_busca];
			indice_insercao++;
			indice_busca++;
		}
		token[indice_insercao] = '\0';
		double coeficiente;
		if(strlen(token) == 0)
			coeficiente = 1.0;
		else
			assert(sscanf(token, "%lf", &coeficiente) == 1);

		// "x"
		unsigned int grau;
		if(cadeia[indice_busca] != 'x')	// x^0
			grau = 0;
		else{
			indice_busca++;
			if(cadeia[indice_busca] != '^') // x^1
				grau = 1;
			else{
				// numero inteiro
				indice_busca++;
				assert(e_digito(cadeia[indice_busca]));
				indice_insercao = 0;
				while(cadeia[indice_busca] != '\0'
		  		    && e_digito(cadeia[indice_busca])){
					token[indice_insercao] =
						cadeia[indice_busca];
					indice_insercao++;
					indice_busca++;
				}
				token[indice_insercao] = '\0';
				assert(sscanf(token, "%u", &grau) == 1);
			}

		}

		// coloca monomio no polinomio
		poli.coeficiente[grau] += sinal * coeficiente; 
		if(grau > poli.grau){
			poli.grau = grau; // grau do polinomio
			assert(poli.grau <= GRAU_MAXIMO);
		}
	}

	return poli;
}

//  leia_polinomio: leitura de polinomio em x
//  Entrada: uma sequencia de pares coeficiente/grau (double/unsigned int)
//	     que caracterizam um polinomio, seguida de uma entrada com qualquer
//	     coeficiente e grau negativo, indicando o termino da entrada
//  Saída:   o polinomio equivalente (struct poli) como retorno da funcao

struct poli leia_polinomio(){
	struct poli poli;
	
	printf("Grau do polinomio: ");
	assert(scanf("%u", &poli.grau) == 1);
	assert(poli.grau <= GRAU_MAXIMO);
	for(int grau = poli.grau; grau >= 0; grau--){
		printf("Coeficiente x^%d: ", grau);
		assert(scanf("%lf", &poli.coeficiente[grau]) == 1);
	};

	return poli;
}

//  leia_polinomio_monomios: leitura de polinomio em x
//  Entrada: uma sequencia de pares coeficiente/grau (double/unsigned int) que caracterizam um polinomio 
//  Saída: o polinomio equivalente (struct poli) como retorno da função
struct poli leia_polinomio_monomios(){
	struct poli poli = cria_polinomio();
	double coeficiente;
	long long int grau;
	
	do{
		printf("Coeficiente e grau (\"0 -1\" para terminar): ");
		assert(scanf("%lf %lld", &coeficiente, &grau) == 2);
		assert(coeficiente <= GRAU_MAXIMO);
		if(grau >= 0){
			poli.coeficiente[(unsigned int)grau] += coeficiente;
			if(grau > poli.grau)
				poli.grau = (unsigned int)grau;
		}
		escreva_polinomio(poli);
		printf("\n");
	}while(grau >= 0);

	return poli;
}