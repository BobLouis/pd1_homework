#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void MoveToTail();

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        struct node* tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node* cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->val);
    return 0;
}
// Your code goes here
void MoveToTail() {
    // "struct node* head" and "struct node* tail" are in global
    // you can use this two pointers to do this problem
    int max=0;
    struct node *cur=head,*max_node=NULL;
    for(;cur!=NULL;cur=cur->next){
        if(cur->val>max){
            max=cur->val;
            max_node=cur;
        }
    }
    for(cur=head;cur->next!=max_node;cur=cur->next)
        ;
    cur->next=max_node->next;
    tail->next=max_node;
    max_node->next=NULL;

}
