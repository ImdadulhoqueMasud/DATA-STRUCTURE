#include <stdio.h>
#include <stdlib.h>

typedef struct DLLNode{
    int key;
    struct DLLNode* next;
    struct DLLNode* prev;
} DLLNode;

DLLNode* create_node(int key){
    DLLNode* new_node = (DLLNode*)malloc(sizeof(DLLNode));
    new_node->key = key;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}

void free_node(DLLNode* node){
    free(node);
}

DLLNode* insert_front(DLLNode* head, int x){
    DLLNode* new_node = create_node(x);

    new_node->next = head;
    if(head != NULL)
        head->prev = new_node;
    head = new_node;
    new_node->prev = NULL;

    return head;
}

DLLNode* search(DLLNode* head, int k){
    int counter=0;
    DLLNode* temp = head ;
    while(temp!=NULL && temp->key!=k){
        temp = temp->next;
        counter++;
    }
    if(temp != NULL)
        printf("Found index: %d\n",counter);
    else
        printf("Not Found\n");
    return temp;
}

void print_list(DLLNode* head){
    DLLNode* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->key);
        temp = temp->next;
    }
}

DLLNode* traverse(DLLNode* head){

    if(head == NULL)
        return NULL;
    else{
        //To reverse print the list
        traverse(head->next);
        printf("%d ",head->key);
        //traverse(head->next);
    }
}

DLLNode* delete_value(DLLNode* head, int x){

    DLLNode* X = search(head,x);

    if(X != NULL){
        if(X->prev != NULL)
            X->prev->next = X->next;
        else
            head = X->next;
        if(X->next != NULL)
            X->next->prev = X->prev;

        free_node(X);
    }
    return head;
}

int main(){
    DLLNode* head= NULL;
    printf("Action 1 add, 2 search, 3 remove, 4 print\n");

    while(1){
        int action;
        printf("Enter action ");
        scanf("%d", &action);
        if(action == 0) break;
        else if(action == 1){
            int key;
            scanf("%d", &key);
            head = insert_front(head, key);
        }
        else if(action == 2){
            int sk;
            scanf("%d",&sk);
            DLLNode* result = search(head,sk);
        }
        else if(action == 3){
            int del_val;
            scanf("%d",del_val);
            head = delete_value(head,del_val);

        }
        else if(action == 4){
            print_list(head);
            printf("\n");
        }
        else if(action == 5){
            traverse(head);
            printf("\n");
        }
    }

    return 0;
}
