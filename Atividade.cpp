{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1046\deflangfe1046{\fonttbl{\f0\fswiss\fprq2\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.22621}{\*\mmathPr\mdispDef1\mwrapIndent1440 }\viewkind4\uc1
\pard\sa200\sl276\slmult1\f0\fs22 #include<stdio.h>\par
#include<string>\par
\par
struct livro \{\par
\par
 char nome[100], autor[100];\par
 int pagina;\par
\par
  void ler() \{\par
   printf("Digite o nome do livro: ");\par
   scanf("%[^\\n]%*c", nome);\par
   printf("Digite o nome do autor do livro: ");\par
   scanf("%[^\\n]%*c", autor);\par
   printf("Digite o numero de paginas do livro: ");\par
   scanf("%d", &pagina);\par
  \}\par
  void imprimir()\{\par
   printf("Nome do Livro: %s\\n", nome);\par
   printf("Autor: %s\\n", autor);\par
   printf("Paginas: %d Paginas\\n", pagina);\par
  \}\par
\};\par
\par
struct biblioteca \{\par
\par
  int qts;\par
  livro bibliotecas[10];\par
\par
   void lernovolivro()\{\par
    if (qts <= 10) \{\par
            printf ("Adicione informa\'e7\'f5es sobre o novo livro:\\n");\par
            bibliotecas[qts].ler();\par
            qts++;\par
        \} else \{\par
            printf("A biblioteca est\'e1 cheia. N\'e3o \'e9 poss\'edvel adicionar mais livros.\\n");\par
        \}\par
  \par
\}\par
  void imprimirLivros() \{\par
        if (qts == 0) \{\par
            printf("A biblioteca est\'e1 vazia.\\n");\par
            return;\par
        \}\par
\};\par
\par
void livromaiorpaginas() \{\par
        if (qts == 0) \{\par
            printf("A biblioteca est\'e1 vazia.\\n");\par
            return;\par
        \}\par
        int indicepags = 0;\par
        for (int i = 1; i < qts; ++i) \{\par
            if (bibliotecas[i].pagina > bibliotecas[indicepags].pagina) \{\par
                indicepags = i;\par
            \}\par
        \}\par
\par
       printf("Livro com mais p\'e1ginas:\\n");\par
        biblioteca[indicepags].imprimirLivros();\par
    \}\par
\};\par
\par
int main() \{\par
 int op\'e7ao;\par
 biblioteca Mbiblioteca;\par
    \par
  printf("Escolha uma op\'e7\'e3o");\par
  printf("1. Adicionar novo livro\\n");\par
  printf("2. Imprimir todos os livros\\n");\par
  printf("3. Imprimir livro com mais p\'e1ginas\\n");\par
  printf("4. Sair\\n)";\par
  printf("Op\'e7\'e3o: ");\par
  scanf("%d", &op\'e7ao);\par
  \par
  switch(opcao) \{\par
            case '1':\par
                Mbiblioteca.lernovolivro();\par
                break;\par
            case '2':\par
                Mbiblioteca.imprimirLivros();\par
                break;\par
            case '3':\par
                Mbiblioteca.livromaiorpaginas();\par
                break;\par
            case '4':\par
                printf ("Encerrando o programa.\\n");\par
                break;\par
            default:\par
                printf("Op\'e7\'e3o inv\'e1lida. Tente novamente.\\n");\par
        \}\par
    \} while(opcao == '4');\par
    \par
\par
    return 0;\par
\}\par
}
