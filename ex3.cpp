a)
    -> não inicializa o ponteiro:

    int aux = 32;
    int *number = &aux;
    printf("%d\n", *number); 

b) 
    -> float aceita numeros decimais, long nao, logo da erro:

    float *realPtr; 
    long *integerPtr; 
    realPtr = integerPtr; 

c)
    -> x = y não atribui o endereço de y pois y não é ponteiro:

    int *x, *y; 
    x = y; 

d) 
    -> nao especifica o valor do vetor e a iteração nao funciona: 

    int contador = 0;
    char s[] = "um array de caracteres";
    for (; s[contador] != '\0'; contador++) {
        printf("%c", s[contador]);
    }

e)
    -> o ponteiro genericPtr precisa ser parseado:

    short *numPtr, result;
    void *genericPtr = numPtr;
    result = *((short*)genericPtr) + 7;

f) 
    -> o ponteiro não referencia e derreferencia:

    float x = 19.34;
    float *xPtr = &x;
    printf("%f\n", *xPtr);

g)  
    -> o ponteiro não foi inicializado:

    char aux = 'L';
    char *s = &aux;
    printf("%c\n", *s);


