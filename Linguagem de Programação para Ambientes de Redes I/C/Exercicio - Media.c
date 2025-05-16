main(){
	float p1,p2,t,media;
	
	printf("\nCalculadora de media\n\n");
	
	printf("Insira a nota da primeira prova: ");
	scanf("%f", &p1);
	printf("Insira a nota da segunda prova: ");
	scanf("%f", &p2);
	printf("Insira a nota do trabalho: ");
	scanf("%f", &t);
	
	if (p1>0&&p2&&t){
		media = (((p1+p2)/2)*0.6) + (t+0.4);
		printf("A media do aluno totalizou: %f", media);
	}else{
		printf("alguma nota foi abaixo de zero");
	}
}
