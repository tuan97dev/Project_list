#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
