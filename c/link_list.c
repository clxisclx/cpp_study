#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_s 
{
    int data;
    struct Node_s* next;
} Node;

void list_push_front(Node **head,int val)
{
    Node *new_node = malloc(sizeof(Node));
    if(!new_node)  return NULL;

    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}

void list_push_back(Node **head,int val)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = val;
    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }

    Node *cur = *head;
    while(cur->next)
    {
        cur = cur->next;
    }
    cur->next = new_node;
}

void list_delete(Node **head,int val)
{
    if(*head == NULL) return;

    Node *cur = *head;

    // 删除头节点
    if(cur->data == val)
    {
        *head = cur->next;
        free(cur);
        return;
    }

    // 删除中间节点
    while (cur->next && cur->next->data != val)
    {
        cur = cur->next;
    }

    if(cur->next)
    {
        Node *tmp = cur->next;
        cur->next= tmp->next;
        free(tmp);
    }
    
}

int main()
{
    Node *head = NULL;
    list_push_front(&head,10);
    return 0;
}