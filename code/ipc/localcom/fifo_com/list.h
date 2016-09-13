
#ifndef __LIST_H__
#define __LIST_H__

struct list
{
    char name[4];
    struct list *next;
};

struct list *create_list();

void traverse(struct list *ls);

struct list *insert_list(struct list *ls, int n, char *str);

int delete_node(struct list *ls, char *str);

int empty_list(struct list *ls);


#endif
