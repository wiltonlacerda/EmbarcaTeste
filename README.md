## Git e GitHub
<details><summary>Saiba mais...</summary>
  
  ### O código elaborado nessa aula foi utilizado para ensinar os conceitos básicos de Git e Github, como Commit, Pull, e Push em Github e repositório local

  Read-me criado por [Thiago Sousa](https://github.com/ThiagoSousa81)
</details>

<details><summary>Fatorial</summary>

  ## O código fatorial.c

  Na matemática, o fatorial de um número natural n, denotado por n!, é o produto de todos os naturais menores ou iguais a n.

  ### Função de cálculo do fatorial

  Esse código implementa uma função chamada `calc_fat`, a qual recebe um valor inteiro. inicialmente a variável `fatorial` é inicializada com o valor 1 (`fatorial = 1;`). Após isso um laço é executado **b** vezes, nesse laço o valor de _b_ é atribuído a variável `contador`, para realizar as b iterações, sendo decrementado em _1_ a cada iteração. Dentro desse laço, o valor do fatorial contido na variável _fatorial_ é multiplicado pelo valor **b** atual, até o seu valor ser 1. A cada passo de multiplicação, o valor do fatorial é informado. Ao fim desse processo o valor final do fatorial é retornado.

  ### Main

  A função principal informa que o fatorial de um número será calculado. O número é predefinido na variável `numero`. Uma outra variável de nome: `num_fat`, recebe o resultado retornado pela função que realiza o cálculo do fatorial. E a última instrução é informar de qual número o fatorial foi calculado e qual o valor do fatorial desse número.

  OBS.: para o código existente é calculado o fatorial de 5, e retornado o valor calculado.

  ### Melhorias

  Para melhorar esse código, as seguintes alterações podem ser realizadas:

  ```C
    // main
    printf("\n Este programa calcula o fatorial.\n");
    printf("Insira o número para calculo do fatorial: ");
    int numero = 5; // Modifiquei para teste
    scanf("%d", &numero);
    printf("\n");
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d\n", numero, num_fat);

    //calc_fat

    for (int contador = b; contador >= 1; contador--)
    {
      [...]
      printf("Calculando o fatorial de %d: ", b);
      printf("%d ",fatorial);
    }
    printf("\n");
  ```

<detail>