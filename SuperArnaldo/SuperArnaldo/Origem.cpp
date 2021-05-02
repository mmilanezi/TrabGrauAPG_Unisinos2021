//classe principal, utilização de scripts da professora Rossana, PG-2021.
//Modificado por Matheus Milanezi para o trabalho do grau A da cadeira de Processamento gráfico

#include <iostream>
#include <string>
#include <assert.h>
#include "SceneManager.h"





int main()
{
	SceneManager* scene = new SceneManager;
	scene->initialize(800, 600);

	scene->run();

	scene->finish();

	return 0;
}



