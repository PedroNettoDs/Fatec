int main (){
	float compra, pago, troco;
	char comprador[30];
	
	//input
	printf ("-=-=-= Sistema de Caixa =-=-=-\n\nInforme o nome do cliente: ");
	scanf ("%s", &comprador);
	printf ("Informe valor da compra: R$");
	scanf ("%f", &compra);
	printf ("Informe o valor pago: R$");
	scanf ("%f", &pago);
	
	//processamento
	troco = pago - compra;
	if (pago>0&&compra>0){
		if(pago<compra){
			printf("\nO valor pago foi insuficiente!");
		}else{
			printf("\nO troco do cliente %s equivale: %.2f", comprador, troco);
		}
	}else{
		printf ("\nFoi inserido 0");
	}
}
	

