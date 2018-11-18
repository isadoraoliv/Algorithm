## Selection Sort / Ordenação por seleção

O selection sort a cada passo, o vetor é percorrido de forma a selecionar o menor valor e colocá-lo na primeira posição do vetor. Agora que a primeira posição já está ordenada, descarta-se ela e repete o processo para a segunda posição, isto é feito para todas as posições do vetor.

#### Vetor não ordenado
Exemplo de execução do algoritmo selection sort com um vetor de 6 posições.

<p align="center">
  <img src="/images/selection-sort/selection01.png">
</p>

#### 1º Passo
Começando da primeira posição, percorre-se todo o vetor comparando cada posição para encontrar o menor valor.
Neste caso, o menor valor é 20, seleciona-se ele.

<p align="center">
  <img src="/images/selection-sort/selection02.png">
</p>

#### 2º Passo
Troca-se o valor da primeira posição o 103 com o menor que é 20.

<p align="center">
  <img src="/images/selection-sort/selection03.png">
</p>


#### 3º Passo
Primeira posição do vetor está ordenada, passamos para a próxima.

<p align="center">
  <img src="/images/selection-sort/selection04.png">
</p>

#### 4º Passo
Agora começando da segunda posição, percorre-se todo o vetor comparando cada posição para encontrar o menor valor.
Neste caso, o menor valor é 35, seleciona-se ele.

<p align="center">
  <img src="/images/selection-sort/selection05.png">
</p>

#### 5º Passo
Troca-se o valor da segunda posição o 103 com o menor que é 35.

<p align="center">
  <img src="/images/selection-sort/selection06.png">
</p>

#### 6º Passo
Segunda posição do vetor está ordenada, passamos para a próxima.

<p align="center">
  <img src="/images/selection-sort/selection07.png">
</p>

#### 7º Passo
Agora começando da terceira posição, percorre-se todo o vetor comparando cada posição para encontrar o menor valor.
Neste caso, o menor valor é 40, seleciona-se ele.

<p align="center">
  <img src="/images/selection-sort/selection08.png">
</p>

#### 8º Passo
Troca-se o valor da terceira posição o 112 com o menor que é 40.

<p align="center">
  <img src="/images/selection-sort/selection09.png">
</p>

#### 9º Passo
Terceira posição do vetor está ordenada, passamos para a próxima.

<p align="center">
  <img src="/images/selection-sort/selection10.png">
</p>

#### 10º Passo
Agora começando da quarta posição, percorre-se todo o vetor comparando cada posição para encontrar o menor valor.
Neste caso, o menor valor é 62, seleciona-se ele.

<p align="center">
  <img src="/images/selection-sort/selection11.png">
</p>

#### 11º Passo
O valor 62 está em sua posição correta, ou seja, a quarta posição já está ordenada e passamos para a próxima.

<p align="center">
  <img src="/images/selection-sort/selection12.png">
</p>


#### 12º Passo
Agora começando da quinta posição, percorre-se todo o vetor comparando cada posição para encontrar o menor valor.
Neste caso, o menor valor é 103, seleciona-se ele.

<p align="center">
  <img src="/images/selection-sort/selection13.png">
</p>


#### 13º Passo
Troca-se o valor da quinta posição o 112 com o menor que é 103.

<p align="center">
  <img src="/images/selection-sort/selection14.png">
</p>

#### 14º Passo
Quinta posição do vetor está ordenada, passamos para a próxima.

<p align="center">
  <img src="/images/selection-sort/selection15.png">
</p>

#### 15º Passo
Agora começando da sexta posição, não tem mais nenhuma posição para ser percorrida, ou seja, o 112 já está ordenado.

<p align="center">
  <img src="/images/selection-sort/selection16.png">
</p>


#### 16º Passo
Agora sim, o vetor está completamente ordenado.

<p align="center">
  <img src="/images/selection-sort/selection17.png">
</p>

## Complexidade

O selection sort compara a cada interação um elemento com os outros, visando encontrar o menor. Dessa forma, podemos entender que não existe um melhor caso mesmo que o vetor esteja ordenado ou em ordem inversa serão executados os dois laços do algoritmo, o externo e o interno, e a complexidade deste algoritmo será sempre O(n²).


## Vantagens
É um algoritmo simples de ser implementado em comparação aos demais.
Não necessita de um vetor auxiliar.
Por não usar um vetor auxiliar para realizar a ordenação, ele ocupa menos memória.
É uns dos mais velozes na ordenação de vetores de tamanhos pequenos.

## Desvantagens
É um dos mais lentos para vetores de tamanhos grandes.
Não é estável.
Faz sempre O(n²) comparações, independente do vetor estar ordenado ou não.


