# Lógica de programação em C
Exercises in c on algorithms and data structure.

### Como executar um algoritmo em C.
* Para executar, temos que compilar o programa. Criando assim um executavel do programa.

```
1° gcc (name_file).c -o name_file
2° ./name_file
```

### Saída de dados: `printf()`
* Sintaxe:
```printf(<texto>, <v1>, <v2>, ..., <Vn>);```
* Uso: 0, 1 ou N variáveis

`Específicadores de formato: printf()`

| Dígito | Descrição 
|--- |--- |
| d ou i | Números inteiros em base decimal 
| x | Números inteiros em base Hexadecimal
| f | Números em ponto flutuante (casa decimal)
| e | Números em noação científica
| c | Caracteres alfa numéricos
| c | Sequência de caracteres Alfanuméricos (texto)
| <.num> | Específica quantos dígitos serão impressos após a vírgula

`Sequência de escape do printf()`

| Escape | Descrição 
|--- |--- |
| \a | Toca um bipe, alarme sonoro padrão do sistema
| \b | Backspace
| \n | Quebra de linha 
| \t | Tabulação horizontal (TAB)
| \r | Retorna ao innicío da  linha
| \o | Caractere nulo 
| \v | Tabulação vertical
| \\\ | Caractere \
| \\' | Caractere '
| \\" | Caractere "
| \\? | Caractere ?
| \\123 | Caractere relacionado ao código 123 em octal (ASCII)
| \\x12 | Caractere relacionado ao código 12 em Hexadecimal (ASCII)
| %% | Caractere % 


### Saída de dados com: `scanf()`:
* Sintaxe: `scanf(<form.>, &<v1.>, &<v2.>, ..., &<vN.>);`

### Váriaveis
* Espaço em memórias para armazenar dados
* Sintax declaração: `<.tipo><.nome>;`
* `int, float, double e char`
* Atribuição
* Constantes 

## Váriaveis
* Espaço em memorias para armazenar dados
* Sintaxe de declaração: `<tipo> <nome>`

## Nomenclatura
* Não pode número na 1ª posição
* Não pode caracteres especiais
* Não pode espaço

# Tipos de dados em linguagem C

| Tipo | Nº de bits | Faixa de representação 
|--- |--- | --- |
| char | 8 | -127 a 127
| int (short) | 16  | -32.768 a 32.768
| int (long)| 32 | -2.147.483.648 a 2.147.483.648
| flout | 32  | 3,4.10^(-38) a 3,4.10^38
| double | 64 | 1,7.10^(-308) a 1,7.10^308

## Atribuição de conteúdo a varíaveis

* Operador: o que está a direita é atribuido é atribuido a varíavel que está a direita.
* Sintaxe: `<variavel> = <informação>`

## Constantes:
* Diretiva #define: cria-se um identificador para um dado de qualquer tipo.
* Mesmas regras de nomenclatura de variaveis.
* Sintaxe declaração: #declaração `<nome><valor>`

# Operações aritméticas

* Operadores mamtemáticos:
    -  Soma: +
    - Subtração: -
    - Multiplicação: *
    - Divisão: /
    - Resto de divisão: %

    Existe precedencia entre os operadores

* Operadores de Atribuição aritmética:
    - Incremente em 1 unidade: ++
    - Decremento em 1 unidade: -- 
    - Decremento genérico: +=
    - Decremento genérico: -=
    - Atribuição com multiplicação: *=
    - Atribuição com divisão: /=
 