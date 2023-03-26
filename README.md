<h1>ft_printf</h1>

> Status: Finalizado ✅

<h2>Explicando como funciona a função printf:</h2>

#### A função printf() é uma função da biblioteca padrão da linguagem C que é usada para imprimir informações na saída padrão, que geralmente é a tela do console. Ela é uma função variádica, o que significa que pode receber um número variável de argumentos.

### A sintaxe geral da função printf é a seguinte:
```C
int printf(const char *format, ...);
```
#### O primeiro parâmetro é uma string constante que contém uma ou mais especificações de formato. As especificações de formato começam com o caractere % e são seguidas por um caractere que define o tipo de dado que será impresso. Por exemplo, %d é usado para imprimir um inteiro decimal, %f é usado para imprimir um número de ponto flutuante, %s é usado para imprimir uma string e assim por diante.

#### Os demais argumentos da função printf() são valores a serem impressos na saída padrão, e o número e o tipo desses argumentos variam de acordo com as especificações de formato na string format.

#### Por exemplo, para imprimir uma mensagem simples na saída padrão, basta chamar a função printf com um argumento de string contendo a mensagem desejada:
```C
printf("Olá, mundo!\n");
```

#### Para imprimir um valor inteiro, use a especificação de formato %d e passe o valor inteiro como argumento:
```C
int x = 42;
printf("O valor de x é %d\n", x);
```
#### A função printf() pode ser usada para formatar a saída de muitas maneiras diferentes, incluindo a formatação de datas, números, endereços de memória e muito mais. Ela é uma função poderosa e útil na programação em C.

<h2>Cópia da função Printf:</h2>

#### A função ft_printf é um projeto da 42SP, que nos mostra como funciona essa função por debaixo dos panos. Entendendo como ela funciona, devemos reproduzir essa função do absoluto zero.

### Como utilizar:

+ primeiro clone ela na sua maquina:
```git
git@github.com:Diogo356/ft_printf.git
```

+ Dentro da pasta que foi clonada, entre no arquivo ft_prinf.c e crie uma Main. Crie o seu codigo lá dentro chamando a função ft_printf e de o comando a seguir no  terminal:
```C
gcc -o ft_printf ft_printf.c ft_puthax.c ft_puts.c ft_utils_libft.c
```
+ e por ultimo execute 
```C
./ft_printf
```
