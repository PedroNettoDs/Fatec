float calc_salliquido (float salbruto, float desconto){
	float salliq;
	if (salbruto > 0){
		if (desconto > 0){
			salliq = salbruto - desconto;
		} else {
			salliq = -998;
		}
	} else {
		salliq = -999;	
	} 	
	return salliq;
}

main(){
	float salario, desc, resultado;
	printf("-=-=-= Calculadora de salario minimo =-=-=-\n\nInforme o salario bruto: R$ ");
	scanf("%f", &salario);
	desc = salario*0.10;
	resultado = calc_salliquido(salario, desc);
	printf("O salario liquido sera de R$ %.2f", resultado);
}
