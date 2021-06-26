#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct { int codigo, tipo;
			    char nome[20];
				float area, condominio;   
				} TLoja;

FILE *ploja;
TLoja loja_aux, loja_nulo;

void linha() 
{ 	int i; 
	for (i=1; i<=87; i++)  
	printf("_");
	printf("\n");
}

void cabec() 
{ system("cls"); 
printf("\nShopping Center\n"); 
linha(); 
}

void abre_arquivo() 
{ ploja = fopen("loja.dat", "r+b"); 
if (ploja == NULL)  
ploja = fopen("loja.dat", "w+b"); 
}

void inserir() 
{ int resp; 
do { cabec();  
printf("\n\nCadastro de Loja\n\n");  
printf("\nCódigo..................................................: ");  
scanf("%d", &loja_aux.codigo);  
printf("\nNome....................................................: ");  
fflush(stdin);  
gets(loja_aux.nome);
printf("\nArea....................................................: ");  
scanf("%f", &loja_aux.area); 
printf("\nTipo(1-Confecções, 2-Alimentação, 3-Livros, 4- Serviços): ");  
scanf("%d", &loja_aux.tipo);
switch(loja_aux.tipo){
	case 1: loja_aux.condominio = 50*loja_aux.area; break;
	case 2: loja_aux.condominio = 65*loja_aux.area; break;
	case 3: loja_aux.condominio = 80*loja_aux.area; break;
	case 4: loja_aux.condominio = 95*loja_aux.area; break;
		default: printf("\n\n\aOpção inválida!");
		break;
}
fseek(ploja, 0, SEEK_END);  
fwrite(&loja_aux, sizeof(TLoja), 1, ploja);  
printf("\n\nLoja Cadastrada com sucesso! \n\n");  
printf("\nDeseja cadastrar outra (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp ==1); 
}

void mostre(int pos)
{ fseek(ploja, pos*sizeof(TLoja), SEEK_SET); 
fread(&loja_aux, sizeof(TLoja), 1, ploja); 
printf("\n\n"); linha(); 
printf("Código   Nome                   Área      Tipo      Condominio\n"); 
linha(); 
printf("%6d   %-20s   %-7.1f   %4d   %10.2f\n", loja_aux.codigo,loja_aux.nome,loja_aux.area,loja_aux.tipo,loja_aux.condominio);        
linha(); 
}

int procura(int matp) 
{ int p; 
p = 0; 
rewind(ploja); 
fread(&loja_aux, sizeof(TLoja), 1, ploja); 
while (feof(ploja)==0) 
{ if (loja_aux.codigo == matp)   
return p;  
else  
{ 
fread(&loja_aux, sizeof(TLoja), 1, ploja);  
p++;
} 
} 
return -1; 
}

void consultar() 
{ int resp, codigocon, posicao; 
do{ cabec();  
printf("\n\nConsultar Loja\n\n\n");  
printf("Código da Loja que deseja consultar: ");  
scanf("%d", &codigocon);  
posicao = procura(codigocon);  
if (posicao == -1)   
printf("\n\nLoja não encontrada! \n\n");   
else   mostre(posicao);  
printf("\n\nDeseja consultar outra (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp == 1); 
}

void listagem() 
 { cabec(); 
 printf("\n\nListagem Geral\n\n\n"); 
 linha(); 
 printf("Código   Nome                   Área      Tipo      Condominio\n"); 
 linha(); 
 rewind(ploja); 
 fread(&loja_aux, sizeof(TLoja), 1, ploja); 
 while (feof(ploja)==0) 
 { if (loja_aux.codigo != 0)  
 printf("%6d   %-20s   %-7.1f   %4d   %10.2f\n", loja_aux.codigo,loja_aux.nome,loja_aux.area,loja_aux.tipo,loja_aux.condominio);
fread(&loja_aux, sizeof(TLoja), 1, ploja); 
} linha(); 
printf("tecle enter para voltar ao menu..."); 
getche(); 
}

main() 
{ int op;
setlocale(LC_ALL, "Portuguese");
abre_arquivo(); 
do{ cabec();  
printf("\n\nOpções: \n\n\n");  
printf("   1- Cadastrar loja\n\n");     
printf("   2- Consultar loja\n\n");
printf("   3- Listagem de todas as lojas\n\n");   
printf("   0- Sair\n\n");   
linha();  
printf("Informe a opção desejada: ");  
scanf("%d", &op);  
switch(op)  
{ 	case 1: inserir(); break;      
	case 2: consultar(); break;
	case 3: listagem(); break;   
	case 0: fclose(ploja); break;
		default: printf("\n\n\aOpção inválida!");
		break;
} 
} while (op != 0); 
}
