#include <cstddef>

//
// Created by natan on 03/08/2023.
//
void * malloc (size_t size);/*A função “malloc” aloca um
 * determinado número de bytes na memória e retorna um
 * ponteiro para o primeiro byte alocado. Se não for
 * possível alocar, a função retorna “NULL”.*/
//A liberação é realizada pela função “free”

void free (void *ptr);
/*A função “free” libera o número de bytes alocados
 * previamente na memória, apontado por “ptr”
 *
 *  área liberada e por isso é aconselhável mudar
 *  seu valor para “NULL” após a liberação.*/

//ptr = malloc (1024);
//...
//free (ptr);
//ptr = NULL; // não é obrigatório, mas aconselhável


//O redimensionamento da área alocada é realizado pela
// função “realloc”.
void * realloc (void *ptr, size_t newsize)
