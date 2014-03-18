#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED

#include <unistd.h>

typedef struct
{
    int rows;
    int cols;
    int** matrix;
} Matrix;

void init_matrix(Matrix *m, int rows, int cols);
void print_matrix(Matrix *m);
void print_matrix_as_maze(Matrix *m);
void make_maze(Matrix *m, int show_steps, useconds_t delay);

#endif // MAZE_H_INCLUDED
