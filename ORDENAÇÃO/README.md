# Selection Sort

uma ideia inicial para ordenar um vetor de n inteiros, indexado de 1 a n, é utilizar um método chamado selection sort, com complexidade O(n^2), para implementar essa ideia, façamos um array que vá guardando os índices dos números que já imprimimos
e percorramos o vetor procurando o menor número ainda não impresso para imprimir e guardar seu índice no array, repetindo o processo n vezes, para imprimir todos

para ficar melhor explicado, façamos o array lista, inicialmente, todas seus índices tem valores 0, e, a cada índice que imprimimos do vetor original, lista[i] = 1 (por isso é importante fazer lista e vetor terem o mesmo número de elementos)
, verificar se um número está na lista é verificar se seu índice tem valor 1 na lista, para identificar o menor número, declaremos variáveis menor e ind_menor, para cada elemento do vetor, se ele é menor que menor, e não foi impresso ainda, menor recebe o valor desse número, e ind_menor recebe seu índice, dai lista[ind_menor] = 1,
aqui no repositório tenho a implementação do selection sort
