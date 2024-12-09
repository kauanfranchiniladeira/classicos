# Selection Sort

uma ideia inicial para ordenar um vetor de n inteiros, indexado de 1 a n, é utilizar um método chamado selection sort, para implementar essa ideia, façamos um array que vá guardando os índices dos números que já imprimimos
e percorramos o vetor procurando o menor número ainda não impresso para imprimir e guardar seu índice no array, repetindo o processo n vezes, para imprimir todos, sua complexidade é O(n^2), pois no pior caso,
o vetor está em ordem decrescente, então percorremos os n elementos n vezes, sendo O(n*n) = O(n^2)

para ficar melhor explicado, façamos o array lista, inicialmente, todas seus índices tem valores 0, e, a cada índice que imprimimos do vetor original, lista[i] = 1 (por isso é importante fazer lista e vetor terem o mesmo número de elementos)
, verificar se um número está na lista é verificar se seu índice tem valor 1 na lista, para identificar o menor número, declaremos variáveis menor e ind_menor, para cada elemento do vetor, se ele é menor que menor, e não foi impresso ainda, menor recebe o valor desse número, e ind_menor recebe seu índice, dai lista[ind_menor] = 1,
aqui no repositório tenho a implementação do selection sort



# Bubble Sort

outra ideia, que é até mais simples na minha opinião, é de ir trocando os valores do vetor de lugar á medida que encontramos um número no vetor que é maior do que o que lhe sucede, tal ideia é uma 
implementação de um algoritmo chamado bubble sort, que tem O(n^2), pois sempre percorremos os n elementos do vetor, e fazemos isso n vezes, portanto sendo O(n*n) = O(n^2)

para isso, precisamos de uma variável para saber quando o vetor está ordenado, criemos então a variável ordenado que recebe 0, 0 significa que não está ordenado, e enquanto não estiver, supomos que está (ordenado = 1), e se encontrarmos uma inversão dos pares consecutivos, mudamos o valor de ordenado para 0, aqui no repositório tenho a implementação do bubble sort



# Merge Sort

não preciso nem dizer que O(n^2) não é bom pra n grande, por isso é necessário algoritmos mais rápidos, o que citarei aqui é o merge sort, que tem complexidade O(nlogn) (logn é o log na base 2, em computação log é sempre base 2, e não base 10), provaremos essa complexidade ao final

a ideia do merge sort é a de dividir e conquistar, muito presente em programação competitiva, primeiro, vamos pensar em como juntar 2 vetores ordenados em um vetor maior de modo que esse vetor também fique ordenado, essa ideia é o merge, temos 2 vetores : vetor1 e vetor2, e queremos fazer o vetor3, basta percorrer os 2 vetores, e olhar sempre o começo deles (começo é o primeiro ainda não inserido), colocando o menor em vetor3, basta usar um for para percorrer vetor 1, e dentro dele um while que percorre o vetor 2 , que percorre o vetor2 até o último elemento menor que o elemento do vetor1 que você está olhando, para que, antes de adicionar os elementos de vetor1, você adicione todos de vetor2 que são menores que este de vetor1, note que esta função merge percorre 2 vetores que juntos tem tamanho n, portanto, O(n)

agora vamos dividir e conquistar, se sempre fomos dividir o vetor inicial que queremos ordenar, ao meio, até as duas metades estarem ordenadas, para poder juntar com o merge, ficará fácil pois em algum momento chegará em vetores unitários, que já estão ordenados, portanto basta fazermos a função recursiva void merge_sort(int ini, int fim), o caso base, é se o ínicio é igual ao fim, pois se for, o vetor é unitário, e aí a função retorna, se não for, aí ela divide o intervalo no meio e chama a si mesmo em cada um desses intervalos, feito isso, o vetor vai ficar dividido em 2 vetores ordenados eventualmente e aí aplicamos a merge, juntando estes 2 vetores em um auxiliar, após isso, façamos o vetor original receber os valores do auxiliar, para ficar ordenado

calculemos agora a complexidade do merge sort, na j-ésima linha da árvore de recursão (começando da linha 0), unimos 2^j vetores ordenados de tamanho n/(2^j), como sabemos que unir 2 vetores tem O(n), onde n é o tamanho do vetor final, ao unirmos 2^j vetores de tamanho n/(2^j), teremos O(n), portanto em cada linha temos O(n), agora basta calcularmos o número de linhas da árvore dde recursão

observe que, a árvore de recursão sempre ccaminha pro caso base, que é vetor unitário, então basta calcularmos j tal que j é a quantidade de linhas pra caminhar pro caso base, então temos que n/(2^j) = 1, o que implica que n = 2^j, e j = logn (base 2, lembrem-se), portanto fazemos logn vezes uma operação de O(n), o que resulta em complexidade final de O(nlogn), o que em geral é muito melhor que O(n^2)

tenho uma implementação do merge_sort neste repositório, se quiserem ver



# Contagem de Inversões usando métodos de ordenação

imagine o seguinte enunciado de uma questão: dado um vetor de n inteiros, indexado de 1 a n, quantos pares (i,j) existem com 1 <= i < j <= n, tal que vetor[i] > vetor[j], ou seja, quantos pares de índices do vetor existem tal que se pegar estes dois pares, eles estão ordenados em ordem decrescente

existem várias formas de resolver esse problema, e ele é chamado de contagem de inversões, pois cada par (i,j) que obedeça as propriedades citadas é chamado de inversão no vetor, os métodos mais famosos de resolver esse problema são usando métodos de ordenação ou BIT (binary indexed tree, ou fenwick tree, este é um conceito mais avançado, talvez eu faça uma aula em um outro folder neste repositório)

a solução em O(n^2) é trivial, basta que, para cada elemento, façamos um for que percorra todo o resto do vetor a direita e veja quais são os elementos menores que o que você está olhando, isso essencialmente acaba sendo o mesmo que contar quantas trocas o bubble sort faz para ordenar o vetor, o que também é uma forma de resolver esse problema, em O(n^2), neste repositório coloquei uma solução deste problema com bubble sort, onde basicamente eu coloco int bubble_sort() ao invés de void, e a cada vez que dou um swap, faço a variável trocas (que eu declaro como int) aumentar em um (++), e no final retorno a variável trocas, como eu disse, trivial
