# Projeto 1 ASA
### Grupo 15
##### Antonio Oliveira 100721
##### Filipe Resendes 96859

O projeto resolve-se por subdivisao do mesmo em subproblemas. Sendo assim, a
divisao que eu estou a considerar vai do quadrado maior para o mais pequeno.

O maior quadrado possivel e dado pelo menor dos tamanhos, visto que um quadrado
apenas cabe em um retangulo atraves do menor lado do mesmo. Para isso, primeiro
busca-se se o retangulo e vertical ou horizontal. Ex: Para um pavimento 4x3, o
maior ladrilho vai ser 3x3.

    1 1 0 0
    1 1 0 0
    1 1 1 0
    1 1 1 1

De modo a existir um quadrado 3x3, o zero na diagonal teria de ser preenchido:

    1 1 0 0
    1 1 1 0
    1 1 1 0
    1 1 1 1

Pelo que em um qualquer pavimento, o maior quadrado aparece sempre primeiro na diagonal,
onde outros maiores quadrados aparecem consequentemente:

    1 1 0 0     1 1 1 0     1 1 0 0
    1 1 1 0     1 1 1 0     1 1 1 1
    1 1 1 0     1 1 1 0     1 1 1 1
    1 1 1 1     1 1 1 1     1 1 1 1

A procura comeca no canto inferior direito, de baixo para cima e da esquerda para a direita.
Para quadrados de tamanho 1, nao e necessario procurar, basta contar os mesmos. para quadrados
de tamanho 2, a procura faz-se do seguinte modo:

    ✓          ✓          ✗ -> Para procura para a direita
    - - - -    - - - -    - - - -
    - - - -    - - - -    - - - -
    1 1 - -    - 1 1 -    - - 1 0!
    1 1 - -    - 1 1 -    - - 1 1

    ✓          ✗ -> Para procura para a direita
    - - - -    - - - -
    1 1 - -    - 1 0!-
    1 1 - -    - 1 1 -
    - - - -    - - - -

    ✓          ✗ -> Para procura para a direita
    1 1 - -    - 1 0!-
    1 1 - -    - 1 0!-
    - - - -    - - - -
    - - - -    - - - -

Logo existem 4 ladrilhos de tamanho 2, onde encontrar um zero a direita para a procura para
as linhas.

Consideranto outro exemplo para ladrilhos de tamanho 3, procedia-se de forma semelhante:

    1 1 1 0
    1 1 1 1
    1 1 1 1
    1 1 1 1

Primeiro calcula-se as ladrilhas de tamanho 2, sendo estas 8, e depois as de 3:

    ✓          ✓ -> Para procura para direita
    - - - -     - - - -
    1 1 1 -     - 1 1 1
    1 1 1 -     - 1 1 1
    1 1 1 -     - 1 1 1

    ✓          ✗ -> Para procura para a direita
    1 1 1 -     - 1 1 0!
    1 1 1 -     - 1 1 1
    1 1 1 -     - 1 1 1
    - - - -     - - - - 

Resultando em 3 ladrilhas de tamanho 3x3.

No entanto, a orientacao do pavimento e independente da sua orientacao, pelo que

    1 1 1 0   <=>   1 1 1 1
    1 1 1 1         1 1 1 1
    1 1 1 1         1 1 1 1
    1 1 1 1         1 1 1 0

Para simplificar o codigo de procura, basta por em ordem de cima para baixo,
da esquerda para a direita.


