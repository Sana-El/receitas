///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///            Projeto Caderno Virtual de Receitas Culinárias               ///
///            Developed by  @Sana-El e @cintiacq - Jan, 2021               ///
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void menuSobre(void);
int menuPrincipal(void); 
char novaReceita(void);
char delReceita(void);  
char pesquisarReceita(void); 
int editReceita(void); 
/*opçoes de edição*/
int alternativasdeedit(void);
char menuEditNome(void);
char menuEditpassoapasso(void);
char menuEditIngredientes(void); 

int main(void) { //
  int op;
  do {
    op = menuPrincipal();
    switch (op) {
      case 1:  novaReceita();
                break;
      case 2:   editReceita();
                break;
      case 3:   delReceita();
                break;
      case 4:   pesquisarReceita();
                break;
    }
  } while (op != 0);
  printf("The End\n");
  return 0;

}


void menuSobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///            Projeto Caderno Virtual de Receitas Culinárias               ///\n");
    printf("///            Developed by  @Sana-El e @cintiacq - Jan, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///       = = = = = Caderno Virtual de Receitas Culinárias = = = = =        ///\n");
    printf("///                                                                         ///\n");
    printf("///  O projeto de Caderno Virtual de Receitas tem como objetivo facilitar   ///\n");
    printf("///     facilitar a vida de pessoas comuns, permitindo uma organização      ///\n");
    printf("///                  com maior eficácia e simplicidade.                     ///\n");
    printf("///     Permitirá que o usuário crie novas receitas, edite as existentes,   ///\n");
    printf("///           delete, procure por receitas com x ingredientes, e etc.       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

int menuPrincipal(void) { //
  int op; 
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @cintiacq and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Criar nova receita                                       ///\n");
	printf("///           2. Edite uma receita                                        ///\n");
	printf("///           3. Deletar receita                                          ///\n");
	printf("///           4. procurar receita por ingrediente                         ///\n");
        printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:");
        scanf("%d", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

char novaReceita(void) { //
  char nomeReceita [20];
  char novoIngrediente [200];
  char novopasso [1000];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =   nova receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
        printf("///            adicionar nome da  receita:                                ///\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeReceita);
        getchar();
	printf("///            adicionar ingredientes:                                    ///\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", novoIngrediente);
        getchar();
	printf("///            adicionar passo a passo :                                  ///\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", novopasso);	
        getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

int alternativasdeedit(void){ //
  char  alternativasdeedit;
	do {
		alternativasdeedit = editReceita();
		switch( alternativasdeedit) {
			case 1: 	menuEditNome();
						break;
			case 2: 	menuEditIngredientes();
						break;
			case 3: 	menuEditpassoapasso();
						break;
		} 		
	} while (alternativasdeedit != 0);
	return 0;
}

int editReceita(void) { //
  int alternativasdeedit;
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Editar receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo nome para a receita                    ///\n");
	printf("///           2. alterar ingredientes                                     ///\n");
	printf("///           3. Atualizar passo a passo                                  ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:");
        scanf("%d", &alternativasdeedit);
        getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return alternativasdeedit;
}

// menu de opçoes da tela de editar receitas
char menuEditNome(void){ //
 char editnome [20];
  system("clear");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("//1/          Developed by  @CintiaCQ and @Sana-El - Fev, 2021            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Editar nome da receita = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Cadastrar um novo nome para a receita: "); 
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", editnome);
        printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
        printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char menuEditIngredientes(void){ //
 char editingredientes[200];
 system("clear");
        printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = Editar Ingredientes da receita  = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Alterar ingredientes da receita:                           ///\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", editingredientes);
        printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
        printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char menuEditpassoapasso(void){ //
 char editpassoapasso [2000];
 system("clear");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = Editar Passo a Passo da receita = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Editar o passo a passo para a receita:                     ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", editpassoapasso);
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
  printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



char delReceita(void) { 
  char op;
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Deletar Receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Deletar ingredientes                                     ///\n");
	printf("///           2. Deletar passo a passo                                    ///\n");
	printf("///           3. Deletar nome                                             ///\n");
	printf("///           4. Deletar a receita completa                               ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	scanf("%c", &op);
  getchar();
  printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

void pesquisarReceita(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Pesquisar Receita  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome:                                                       ///\n");
	printf("///           ingredientes:                                               ///\n");
	printf("///           Passo a passo:                                              ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
