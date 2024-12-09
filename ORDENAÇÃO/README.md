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
