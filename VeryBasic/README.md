# Build Steps

O primeiro assunto discutido foi sobre o processo de build, pré-processamento, compilação e linkagem. Nas pastas preprocessor temos exemplos de saida do código ao passar da fase de pré-processamento, e na pasta externalLib temos um código que usa uma biblioteca própria chamada de secretMath, feita para fins didáticos também disponivel no repositório.

# Comandos

### Obtendo o resultado do pré-processamento
 g++ codigo.cpp -E 

 Exibirá o resultado no terminal, para salvar em um arquivo podemos sobrescrever em um arquivo cpp. No exemplo abaixo usarei um arquivo chamado output.cpp

 g++ codigo.cpp -E > output,cpp

### Compilar um código c++:

g++ arquivoFonte.cpp -o nomeDoPrograma

Para códigos com mais de um arquivo fonte pode ser útil usar o * para pegar todos os arquivos que terminem com a extensão .cpp.

g++ *.cpp -o nomeDoPrograma

-o significa output e o argumento é o nome que queremos que o programa gerado tenha. Por padrão ao não definir um output a saida é a.out.

### Compilando com biblioteca externa

Para gerar uma biblioteca externa rodamos o seguinte comando:

~~~
g++ arquivoFonte.cpp -c -o teste
g++ -shared teste.o -o teste.dll 
~~~

Agora para compilar um programa que usa nossa DLL vamos primeiro gerar os arquivos objetos (.o).

```g++ program.cpp -c -o program```

e após isso compilar usando os objetos gerados do meu programa junto com a dll compilada anteriormente.

```g++ program.o ./teste.dll -o program```
