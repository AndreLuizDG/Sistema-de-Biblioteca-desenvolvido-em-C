#include <stdio.h>
#include <string.h>

#define LIVROS "livros.dat"
#define CLIENTES "clientes.dat"
#define VENDAS "vendas.dat"
#define AUTORES "autores.dat"
#define RELACTORLIVRO "relacAutLiv"

// Structs
struct reg_livro
{
  int codigo;
  char titulo[30];
  float preco;
};

struct reg_cliente
{
  int codigo;
  char nome[40];
  char fone[20];
  char email[30];
};

struct reg_venda
{
  int codvenda;
  int codcliente;
  int codlivro;
  int qtde;
  float desconto;
};

struct reg_autor
{
  int codAutor;
  char nome[40];
};

struct reg_RelaAutorLivro
{
  int codAutor;
  int codLivro;
};

// Função para localizar cliente
struct reg_cliente localizarCliente(int codcli)
{
  FILE *fpcliente;
  struct reg_cliente cliente;
  int achou = 0;

  // Abrir o Arquivo
  if ((fpcliente = fopen(CLIENTES, "rb")) == NULL)
  {
    printf("\nErro ao abrir o Arquivo %s", CLIENTES);
    cliente.codigo = -1;
    return cliente;
  }

  // Ler registro por registro até encontrar o cliente
  while ((achou == 0) && (fread(&cliente, sizeof(cliente), 1, fpcliente) == 1))
  {
    if (cliente.codigo == codcli)
    {
      achou = 1;
    }
  }

  if (achou == 0)
  {
    cliente.codigo = -1;
  }

  fclose(fpcliente);
  return cliente;
}

// Função para localizar livro
struct reg_livro localizarLivro(int codlivro)
{
  FILE *fplivro;
  struct reg_livro livro;
  int achou = 0;

  // Abrir o Arquivo
  if ((fplivro = fopen(LIVROS, "rb")) == NULL)
  {
    printf("\nErro ao abrir o Arquivo %s", LIVROS);
    livro.codigo = -1;
    return livro;
  }

  // Ler registro por registro até encontrar o livro
  while ((achou == 0) && (fread(&livro, sizeof(livro), 1, fplivro) == 1))
  {
    if (livro.codigo == codlivro)
    {
      achou = 1;
    }
  }

  if (achou == 0)
  {
    livro.codigo = -1;
  }

  fclose(fplivro);
  return livro;
}

// Função para localizar venda
struct reg_venda localizarPedido(int codvenda)
{
  FILE *fpvenda;
  struct reg_venda venda;
  int achou = 0;

  // Abrir o Arquivo
  if ((fpvenda = fopen(VENDAS, "rb")) == NULL)
  {
    printf("\nErro ao abrir o Arquivo %s", VENDAS);
    venda.codvenda = -1;
    return venda;
  }

  // Ler registro por registro até encontrar a venda
  while ((achou == 0) && (fread(&venda, sizeof(venda), 1, fpvenda) == 1))
  {
    if (venda.codvenda == codvenda)
    {
      achou = 1;
    }
  }

  if (achou == 0)
  {
    venda.codvenda = -1;
  }

  fclose(fpvenda);
  return venda;
}

// Função para localizar autor
struct reg_autor localizarAutor(int codAutor)
{
  FILE *fpautor;
  struct reg_autor autor;
  int achou = 0;

  // Abrir o Arquivo
  if ((fpautor = fopen(AUTORES, "rb")) == NULL)
  {
    printf("\nErro ao abrir o Arquivo %s", AUTORES);
    autor.codAutor = -1;
    return autor;
  }

  // Ler registro por registro até encontrar o autor
  while ((achou == 0) && (fread(&autor, sizeof(autor), 1, fpautor) == 1))
  {
    if (autor.codAutor == codAutor)
    {
      achou = 1;
    }
  }

  if (achou == 0)
  {
    autor.codAutor = -1;
  }

  fclose(fpautor);
  return autor;
}

// Função main
int main()
{
  int op;

  do
  {
    printf("\n\n################ Livraria Tech Info ################");
    printf("\n###                                                ###");
    printf("\n### 1) Cadastrar um Livro                          ###");
    printf("\n### 11) Cadastrar um Cliente                       ###");
    printf("\n### 111) Cadastrar um Autor                        ###");
    printf("\n### 2) Listar todos os Livros                      ###");
    printf("\n### 22) Listar todos os Clientes                   ###");
    printf("\n### 222) Listar todos os Autores                   ###");
    printf("\n### 3) Consultar Livro pelo Codigo                 ###");
    printf("\n### 4) Consultar Livro pelo Titulo                 ###");
    printf("\n### 6) Alterar dados do Livro                      ###");
    printf("\n### 7) Excluir um Livro                            ###");
    printf("\n### 8) Efetuar Venda                               ###");
    printf("\n### 9) Relatorio de Vendas                         ###");
    printf("\n### 10) Relatorio de Vendas detalhado              ###");
    printf("\n### 12) Fechar Pedido                              ###");
    printf("\n### 13) Relacionar Autor com Livros                ###");
    printf("\n### 14) Listar Relacionamentos                     ###");
    printf("\n### 15) Consultar Livro por Autor                  ###");
    printf("\n### 0) Sair                                        ###");
    printf("\n###                                                ###");
    printf("\nOpcao-> ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
      // cadastrarLivro();
      break;
    case 11:
      // cadastrarCliente();
      break;
    case 111:
      // cadastrarAutor();
      break;
    case 2:
      // listarLivros();
      break;
    case 22:
      // listarClientes();
      break;
    case 222:
      // listarAutores();
      break;
    case 3:
      // consultarCodigoLivro();
      break;
    case 4:
      // consultarTituloLivro();
      break;
    case 6:
      // alterarLivro();
      break;
    case 7:
      // excluirLivro();
      break;
    case 8:
      // efetuarVenda();
      break;
    case 9:
      // relatorioVendas();
      break;
    case 10:
      // relatorioVendasDetalhado();
      break;
    case 12:
      // fecharPedido();
      break;
    case 13:
      // relacionarAutor();
      break;
    case 14:
      // listarRela();
      break;
    case 15:
      // consultarLivroAutor();
      break;
    }
  } while (op != 0);

  return 0;
}
