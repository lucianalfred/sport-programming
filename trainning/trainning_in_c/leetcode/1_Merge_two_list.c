#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int listNodeLength(struct ListNode *list)
{
    int count = 0;
    struct ListNode * current = list;
    
    while (current)
    {
        count++;
        current = current->next;
    }
    return (count);
}

struct ListNode * createNode(int val)
{
    struct ListNode *new_node = malloc(sizeof(struct ListNode));

    if (!new_node)
        return NULL;
    new_node->val = val;
    new_node->next = NULL;
    return (new_node);
}

void freeNodes(struct ListNode **list)
{
    struct ListNode *current;
    struct ListNode *next_node;

    current = *list;
    while(current)
    {
       next_node = current->next;
       free(current);
       current = next_node; 
    }
}

void printNodes(struct ListNode *list)
{
    while (list)
    {
        printf("%d ",list->val);
        list = list->next;
    }
    printf("\n");
}

void    sort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    int array_size = listNodeLength(list1) + listNodeLength(list2);
    int array[array_size];
    struct ListNode *current;

    if (array_size == 0)
        return NULL;

    // add nodes
    int i = 0;
    current  = list1;
    while (current && i < array_size){
        array[i] = current->val;
        current = current->next; 
        i++;
    }
    current  = list2;
    while (current && i < array_size){
        array[i] = current->val;
        current = current->next; 
        i++;
    }
    
    //sort array
    sort(array, array_size);

    //new list node
    struct ListNode *new_listNode  = NULL;
    new_listNode  = createNode(array[0]); 
    current =  new_listNode;
    
    if (!current)
        return NULL;

    
    for (int i = 1; i < array_size; i++)
    {
        struct ListNode *node = createNode(array[i]);
        if (!node)
            return NULL;
        current->next = node;
        current = node;

    }
    return (new_listNode);
}


int main(void)
{
    struct ListNode *nodes = NULL;
    struct ListNode *nodes1 = NULL;
    struct ListNode *merged = NULL;


    nodes = createNode(2);
    nodes->next = createNode(3);
    nodes->next->next = createNode(0);

    nodes1 = createNode(4);
    nodes1->next = createNode(7);
    nodes1->next->next = createNode(-1);

    
    merged = mergeTwoLists(nodes, nodes1);
    printNodes(merged);
    freeNodes(&nodes);
    freeNodes(&nodes1);
    free(merged);
    return (0);
}