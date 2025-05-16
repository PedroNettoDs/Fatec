main (){
	float larg,alt,prof,prec,soma,m3;
	printf("CALCULADORA DE PROJETO PISCINA\n\n");
	
	printf("Informe a largura: ");
	scanf("%f",&larg);
	printf("Informe a altura: ");
	scanf("%f",&alt);	
	printf("Informe a profundidade: ");
	scanf("%f",&prof);
	
	if (larg>0&&alt>0&&prof>0){
		m3 = larg*alt*prof;	
		printf("\nInforme o valor do metro cubico: ");
		scanf("%f",&prec);
			if (prec >0){
				soma = m3*prec;	
				printf("\nMetro Cubico: %f", m3);
				printf("\nValor do projeto equivale: R$%f", soma);
			}else{
				printf("\nValor precisa ser maior que Zero");
			}
	}else{
		m3 = -1;
		printf("\nValor menor que zero inserido");
	}
}

