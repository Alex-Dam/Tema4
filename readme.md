# Explicació
El que he fet ha sigut primer fer varios archius definint funcions, en aquest cas he definit unes funcions matematiques basiques,he compilat els diferents archius creant uns altres per a compilar-ho.

__En aquest comando:__
~~~
gcc -c calc.c -o calc.o
~~~
estic creant un calc.o a partir del meu calc.c creat previament amb un codi

__En aquest comando:__
~~~
gcc calc.o calcula.c -o calcula
~~~
a traves de el calc.c y el calcula.c em creat el fitcher de text "calcula"
__Finalment amb:__ 
~~~
./calcula
~~~
__m'hos deuria de mostrar:__
~~~
La suma de 10 i 5 és 15
La resta entre 10 i 5 és 5
La multiplicació de 10 i 5 és 50
La divisió entre 10 i 5 és 2
~~~
