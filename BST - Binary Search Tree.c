//Binary Search Tree
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* Insert(struct Node*, int);
void Preorder(struct Node*);
void Inorder(struct Node*);
void Postorder(struct Node*);
void Levelorder(struct Node*);
int Smallest(struct Node*);
int Largest(struct Node*);
int Nodes(struct Node*);
int Internal(struct Node*);
int External(struct Node*);
int Height(struct Node*);
int Find(struct Node*, int);
struct Node* Mirror(struct Node*);
struct Node* Delete(struct Node*, int);
struct Node* Drop(struct Node*);
int main()
{
    struct Node *root=NULL, *mroot=NULL;
    int O;
    printf("Binary Search Tree\n");
    do {
        printf("\nSelect Operation\n");
        printf("0. Exit\n");
        printf("1. Insert\n");
        printf("2. Pre-order\n");
        printf("3. In-order\n");
        printf("4. Post-order\n");
        printf("5. Level-order\n");
        printf("6. Smallest\n");
        printf("7. Largest\n");
        printf("8. Nodes\n");
        printf("9. Internal nodes\n");
        printf("10. External nodes\n");
        printf("11. Height\n");
        printf("12. Find\n");
        printf("13. Mirror\n");
        printf("14. Delete\n");
        printf("15. Drop\n");
        printf("\n");
        scanf("%d", &O);
        int val=-1;
        switch(O) {
            case 0: printf("Existing");
                break;
            case 1: printf("Enter Value : ");
            scanf("%d", &val);
            root=Insert(root, val);
                break;
            case 2: printf("Pre-order Traversal\n");
            Preorder(root);
                break;
            case 3: printf("In-order Traversal\n");
            Inorder(root);
                break;
            case 4: printf("Post-order Traversal\n");
            Postorder(root);
                break;
            case 5: printf("Level-order Traversal\n");
            Levelorder(root);
                break;
            case 6: printf("Smallest Element : %d", Smallest(root));
                break;
            case 7: printf("Largest Element : %d", Largest(root));
                break;
            case 8: printf("Total Nodes : %d", Nodes(root));
                break;
            case 9: printf("Total Internal Nodes : %d", Internal(root));
                break;
            case 10: printf("Total External Nodes : %d", External(root));
                break;
            case 11: printf("Height : %d", Height(root));
                break;
            case 12: printf("Enter Element : ");
            scanf("%d", &val);
            if(Find(root, val))
            printf("\nFound");
            else
            printf("\nNot Found");
                break;
            case 13: printf("Mirror Tree\n");
            mroot=Mirror(root);
            Inorder(mroot);
                break;
            case 14: printf("Enter Value : ");
            scanf("%d", &val);
            root=Delete(root, val);
                break;
            case 15: root=Drop(root);
            printf("Tree Droped");
                break;
            default: printf("Enter Valid Option");
        }
    }while(O);
    return 0;
}

struct Node* Insert(struct Node *root, int val) {
    
}
void Preorder(struct Node *root) {
    
}
void Inorder(struct Node *root) {
    
}
void Postorder(struct Node *root) {
    
}
void Levelorder(struct Node *root) {
    
}
int Smallest(struct Node *root) {
    
}
int Largest(struct Node *root) {
    
}
int Nodes(struct Node *root) {
    
}
int Internal(struct Node *root) {
    
}
int External(struct Node *root) {
    
}
int Height(struct Node *root) {
    
}
int Find(struct Node *root, int val) {
    
}
struct Node* Mirror(struct Node *root) {
    
}
struct Node* Delete(struct Node *root, int val) {
    
}
struct Node* Drop(struct Node *root) {
    
}
