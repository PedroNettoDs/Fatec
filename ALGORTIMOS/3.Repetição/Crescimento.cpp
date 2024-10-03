#include <stdio.h>
#include <unistd.h>

int main(){
	//declarando
	float fulano, ciclano, cfulano, cciclano;
	int ano, escolha;
	
	printf ("Fulano, sempre foi mais alto que Ciclano\nMas Ciclano sempre quis ser da altura de Fulano\nAssim ele percebeu que crescia 0.03 cm por ano, enquanto Fulano crescia 0.02\n \n");
	sleep(2);
	ano = 0;

	fulano = 1.50;
	cfulano = 0.02;
	
	ciclano = 1.10;
	cciclano = 0.03;
	
	//escolha
	printf ("Velocidade da contagem:%\n1 = Rapido%\n0 = Lento%\nEscolha: ");
	scanf ("%d", &escolha);
	printf ("%\nEntao assim comecou sua contagem:%\n \n");
	
	//processamento
	switch (escolha){
		case 1:
			do {
				ano++;
				fulano = fulano + cfulano;
				ciclano = ciclano + cciclano;
				printf ("Passou %d anos\nFulano cresceu %.2f centimetros, ficando com %.2f de altura\nCiclando cresceu %.2f centimetros, ficando com %.2f de altura\n \n", ano, cfulano, fulano, cciclano, ciclano);
				sleep(0);
			} while (ciclano < fulano);
		break;
		case 0:
			do {
				ano++;
				fulano = fulano + cfulano;
				ciclano = ciclano + cciclano;
				printf ("Passou %d anos\nFulano cresceu %.2f centimetros, ficando com %.2f de altura\nCiclando cresceu %.2f centimetros, ficando com %.2f de altura\n \n", ano, cfulano, fulano, cciclano, ciclano);
				sleep(1);
			} while (ciclano < fulano);
		break;
	}
	printf ("Precisou de %d anos para Ciclano alcanca-se o tamanho do Fulano", ano);
}
