
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct { int mat, filho;
			    char nome[20], cargo[20];
				float salario;   
				} TFunc;

FILE *pfunc; 
TFunc func_aux, func_nulo;



void linha() 
{ 	int i; 
	for (i=1; i<=87; i++)  
	printf("_");
	printf("\n");
}

void cabec() 
{ system("cls"); 
printf("Cadastro Único de Funcionários\n"); 
linha(); 
}

void abre_arquivo() 
{ pfunc = fopen("func.dat", "r+b"); 
if (pfunc == NULL)  
pfunc = fopen("func.dat", "w+b"); 
}

void inserir() 
{ int resp; 
do { cabec();  
printf("\n\nCadastrar Novo Funcionário\n\n");  
printf("\nMatrícula.................: ");  
scanf("%d", &func_aux.mat);  
printf("\nNome......................: ");  
fflush(stdin);  
gets(func_aux.nome);
printf("\nCargo.....................: ");  
fflush(stdin);  
gets(func_aux.cargo); 
printf("\nSalário...................: ");  
scanf("%f", &func_aux.salario); 
printf("\nPossui filho (1-Sim/0-Não)? ");
scanf("%d",&func_aux.filho);
fseek(pfunc, 0, SEEK_END);  
fwrite(&func_aux, sizeof(TFunc), 1, pfunc);  
printf("\n\nFuncionário cadastrado com sucesso! \n\n");  
printf("\nDeseja cadastrar outro (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp ==1); 
}


void mostre(int pos)
{ fseek(pfunc, pos*sizeof(TFunc), SEEK_SET); 
fread(&func_aux, sizeof(TFunc), 1, pfunc); 
printf("\n\n"); linha(); 
printf("Matricula   Nome                   Cargo                  Salario   Filho (1-Sim/0-Não)\n"); 
linha(); 
printf("%9d   %-20s   %-20s %7.1f   %19d\n", func_aux.mat,   func_aux.nome, func_aux.cargo, func_aux.salario, func_aux.filho);        
linha(); 
}

int procura(int matp) 
{ int p; 
p = 0; 
rewind(pfunc); 
fread(&func_aux, sizeof(TFunc), 1, pfunc); 
while (feof(pfunc)==0) 
{ if (func_aux.mat == matp)   
return p;  
else  
{ 
fread(&func_aux, sizeof(TFunc), 1, pfunc);  
p++;
} 
} 
return -1; 
}

int procuranome(char nomep[20])
{
	int retorno, p;
	p = 0;
	rewind(pfunc); 
	fread(&func_aux, sizeof(TFunc), 1, pfunc);
	while (feof(pfunc)==0)
	{
		retorno = strcmp(nomep,func_aux.nome);
		if (retorno == 0)
		return p;
		else
		{ 
			fread(&func_aux, sizeof(TFunc), 1, pfunc);  
			p++;
		} 
	} 
return -1; 
}


void consultar() 
{int opcao, resp, matcon, posicao;
char nomecon[20];
do{ cabec();  
printf("\n\nConsultar Funcionário\n\n\n");
printf("\n\nConsultar por (1-Matrícula/2-Nome)? ");
scanf("%d",&opcao);
if (opcao == 1){
printf("Matricula do Funcionário: ");  
scanf("%d", &matcon);  
posicao = procura(matcon);  
if (posicao == -1)
printf("\n\nMatrícula não encontrada! \n\n");   
else   mostre(posicao);
}
if (opcao == 2){
printf("Nome do Funcionário: ");
fflush(stdin);
gets(nomecon);
posicao = procuranome(nomecon);
if (posicao == -1)
printf("\n\nNome não encontrado! \n\n");   
else  mostre(posicao);
}
printf("\n\nDeseja consultar outro (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp == 1);
}


void exluir() 
{ int matrem, conf, resp, posicao;
 func_nulo.mat = 0; func_nulo.salario = 0; 
 do{ cabec();  printf("\n\nExcluir Funcionario\n\n\n");  
 printf("Matricula: ");  
 scanf("%d", &matrem);  
 posicao = procura(matrem);  
 if (posicao == -1)   
 printf("\nFuncionário não encontrado!!\a");  
 else  
 { mostre(posicao);   
 printf("\n\nDeseja remover o Funcionáro (1-Sim/0-Não)? ");   
 scanf("%d", &conf);   
 if (conf == 1)   
 { fseek(pfunc,posicao*sizeof (TFunc),SEEK_SET);    
 fwrite(&func_nulo, sizeof(TFunc), 1, pfunc);    
 printf("\n\nFuncionário excluído com sucesso!");   
 }
 else    
 printf("\nExclusão cancelada!");  
 }  
 printf("\n\n\nDeseja excluir outro (1-Sim/0-Não)? ");  
 scanf("%d", &resp); 
 } while (resp ==1); 
 }
 
 void alterar() 
 { int matalt, conf, resp, posicao; 
 do { cabec();  
 printf("\n\nAlterar Salário de Funcionário\n\ n\n");  
 printf("Matrícula: ");  
 scanf("%d", &matalt);  
 posicao = procura(matalt);  
 if (posicao == -1)   
 printf("\nFuncionário não encontrado!!\a");  
 else  
 { mostre(posicao);   
 printf("\n\nAlterar o salário do funcionário (1-Sim/0-Não)? ");   
 scanf("%d", &conf);   
 if (conf == 1)   
 { printf("\nNovo Salário: ");    
 scanf("%f", &func_aux.salario);   
 printf("\nSalário alterado com sucesso! \n\n");   
 fseek(pfunc,posicao*sizeof(TFunc), SEEK_SET);   
 fwrite(&func_aux,sizeof(TFunc), 1, pfunc);   
 mostre(posicao);
 printf("nSalário do funcionário alterado com sucesso!\n");  
 }    
 else
 printf("\n\nAlteração cancelada! \n\n");  
 }    
 printf("\n\nDeseja alterar outro (1-Sim/0-Não)? ");  
 scanf("%d", &resp); 
 }while (resp ==1); 
 }
 
 void listagem() 
 { cabec(); 
 printf("\n\nListagem Geral\n\n\n"); 
 linha(); 
 printf("Matricula   Nome                   Cargo                  Salario   Filho (1-sim/0-nao)\n"); 
 linha(); 
 rewind(pfunc); 
 fread(&func_aux, sizeof(TFunc), 1, pfunc); 
 while (feof(pfunc)==0) 
 { if (func_aux.mat != 0)  
 printf("%9d   %-20s   %-20s   %7.1f   %19d\n", func_aux.mat,   func_aux.nome, func_aux.cargo, func_aux.salario, func_aux.filho);
fread(&func_aux, sizeof(TFunc), 1, pfunc); 
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
printf("   1- Cadastrar Novo Funcionário\n\n");     
printf("   2- Consultar Funcionário\n\n");
printf("   3- Excluir Funcionário\n\n");     
printf("   4- Listar Funcionários\n\n");   
printf("   0- Sair\n\n");   
linha();  
printf("Informe a opção desejada: ");  
scanf("%d", &op);  
switch(op)  
{ 	case 1: inserir(); break;      
	case 2: consultar(); break;
	case 3: exluir(); break;      
	case 4: listagem(); break;    
	case 0: fclose(pfunc); break;
		default: printf("\n\n\aOpção inválida!");
		break;
} 
} while (op != 0); 
}
