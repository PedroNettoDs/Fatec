main(){
	float val,desc,total;
	
	printf("\nCalculador de desconto\n\n");
	
	printf("informe o valor total da compra: ");
	scanf("%f",&val);
	printf("informe o valor de desconto: ");
	scanf("%f",&desc);
	
	if (val>0&&desc>0){
		total = val*(desc/100);
		printf("\nO valor da compra foi: R$%f\n O valor de desconto foi %f\nPortanto a soma total deu: R$%f",val,desc,total);
	}else{
		printf("\nValor menor que zero");
	}
}
