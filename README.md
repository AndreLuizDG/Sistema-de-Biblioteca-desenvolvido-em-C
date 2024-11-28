# Sistema de Gerenciamento de Livraria em C

Este projeto é uma aplicação console para gerenciamento de livrarias, implementada em linguagem C. Ele permite realizar operações de cadastro, consulta, edição e exclusão de dados relacionados a livros, clientes, autores e vendas. Também possui funcionalidades para emissão de relatórios e relacionamento entre autores e livros.

## Funcionalidades

- **Livros**
  - Cadastro de novos livros
  - Listagem de todos os livros
  - Consulta por código ou título do livro
  - Alteração e exclusão de registros de livros

- **Clientes**
  - Cadastro de clientes
  - Listagem de todos os clientes

- **Autores**
  - Cadastro de autores
  - Listagem de todos os autores

- **Vendas**
  - Efetuar vendas
  - Relatórios de vendas e vendas detalhadas
  - Relacionamento de autores com livros

- **Outras Funções**
  - Relacionar autores a livros
  - Listar relacionamentos autor-livro
  - Consultar livros por autor

## Estrutura do Projeto

- **Manipulação de Arquivos**: Dados são armazenados em arquivos binários (`.dat`) para persistência.
- **Structs**: Estruturas organizadas para cada entidade:
  - `reg_livro`: Representa um livro
  - `reg_cliente`: Representa um cliente
  - `reg_venda`: Representa uma venda
  - `reg_autor`: Representa um autor
  - `reg_RelaAutorLivro`: Representa o relacionamento entre autores e livros

## Pré-requisitos

- Compilador C (GCC ou outro compatível)
- Sistema operacional compatível com execução de arquivos binários em C
- Familiaridade com manipulação de arquivos e programação em C
