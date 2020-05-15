#include<stdio.h>
// matriz do cadastro //

char email[10][100]; // variavel declaradas como uma matriz do tipo char  
long long cpf [10];  //variavel declarada como vetor do tipo inteiro como long long 
char nome [10][100];    // variavel que foi  declarada em nome e sobrenome declarada  como matriz do tipo char 
char sobrenome [10][100];

int contador = 0;

int main(){
	int c,k,usuario;
  	
	printf("coloque 1 para inserir o cadastro e 2 para localizar o cadastro: \n");               
	
	scanf(" %d",&usuario); // essa parte  irar cadastra um novo usuario ou ira localizar um novo cadastro //
	if(usuario == 1){
		inserir();
	}else if(usuario == 2){
		localizar();
	}else{
		
	}
	return 0;
}
 
int inserir(){
	printf("comece o cadastro:\n");
	 	
	printf("CPF:\n");
	scanf(" %lld",&cpf[contador]); // foi criado a funcao para fazer o cadastro do cliente 
	
	printf("Nome:\n");
	scanf(" %s",nome[contador]);
	
	printf("Sobrenome: \n");
	scanf(" %s",sobrenome[contador]);
	
	printf("E_mail: \n");
	scanf(" %s",email[contador]);
	
	contador++;
	main();
}

int localizar(){
	long long z;
	int c;
	printf("digite um CPF para pesquisar: \n");      // foi criado a funcao para fazer a comparacao do cpf e imprimir na tela os dados do cliente cadastrado //
	scanf("%lld",&z);
	
	for(c=0; c<10; c++){
		if(z==cpf[c]){
			printf(" %s \n",nome[c]);
			printf(" %s \n",sobrenome[c]);
			printf(" %s \n",email[c]);	
		} 												
	 }
	main();                                               // fim do programa //
}
 	
 	
 	
 	
 

