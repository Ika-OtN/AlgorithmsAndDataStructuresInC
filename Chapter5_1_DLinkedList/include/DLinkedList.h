#ifndef DLINKEDLIST_H_
#define DLINKEDLIST_H_


/**************/
/*  INCLUDES  */
/**************/

#include <math.h>
#include <stdint.h>
#include <stdbool.h>

/***********************/
/*  DEFINES AND TYPES  */
/***********************/

typedef float value_type_t;
#define NO_VALUE (value_type_t)INFINITY

typedef struct node 
{
    struct node *next;
    struct node *prev;
    value_type_t *value;
} node_t;

typedef struct list 
{
    node_t *front;
    node_t *back;
    uint32_t size;
} list_t;

/***************/
/*  FUNCTIONS  */
/***************/

node_t *createNode(value_type_t value);

node_t *freeNode(node_t *node);

list_t *createList(void);

list_t *freeList(list_t *list);

void printList(list_t *list);

#endif  // DLINKEDLIST_H_