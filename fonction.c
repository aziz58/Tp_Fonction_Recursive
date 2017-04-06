#include <stdio.h>
#include <stdlib.h>

int fact(int n){
return (n>1)? n * fact(n - 1):1;
}
int fibonacci(int i){
return (i == 0 || i == 1)?i:fibonacci(i-1)+fibonacci(i-2);
}
int som(int n){
return (n > 1)?n+som(n-1):1;
}
