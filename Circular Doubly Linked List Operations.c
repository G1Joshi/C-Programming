#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node *prev;
  int data;
  struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;

int Length();
void Create();
void Insbeg();
void Insend();
void Inspos();
void Delbeg();
void Delend();
void Delpos();
void Delete();
void Display();
void Reverse();

int main() {
  int op;
  do {
    printf("\n\nLinked List Operations");
    printf("\n0. Exit\n1. Create list\n2. Display list");
    printf("\n3. Insert at beginning\n4. Insert at end\n5. Insert at position");
    printf("\n6. Delete at beginning\n7. Delete at end\n8. Delete at position");
    printf("\n9. Delete list\n10. Display Reversed List");
    printf("\nChoose Option : ");
    scanf("%d", &op);
    switch(op) {
      case 0: printf("\nWait..."); break;
      case 1: Create(); break;
      case 2: Display(); break;
      case 3: Insbeg(); break;
      case 4: Insend(); break;
      case 5: Inspos(); break;
      case 6: Delbeg(); break;
      case 7: Delend(); break;
      case 8: Delpos(); break;
      case 9: Delete(); break;
      case 10: Reverse(); break;
      default: printf("\nInvalid Choice...\nChoose correct option.");
    }
  }while(op);
}

int Length() {
  if(head==NULL) {
    printf("\nList is empty.");
    return;
  }
  int count=0;
  struct Node *ptr=head;
  while(ptr->next!=head) {
    count++;
    ptr=ptr->next;
  }
  return count+1;
}

void Create() {
  if(head!=NULL) {
    printf("\nList is already created.");
    return;
  }
  int val;
  printf("\nEnter elements followed by -1 : ");
  while(1) {
    scanf("%d", &val);
    if(val==-1)
      break;
    struct Node *node=(struct Node*)malloc(sizeof(struct Node));
    node->data=val;
    tail=node;
    if(head==NULL) {
      head=node;
      node->next=head;
      node->prev=tail;
    }
    else {
      struct Node *ptr = head;
      while(ptr->next!=head)
        ptr=ptr->next;
      ptr->next=node;
      node->prev=ptr;
      node->next=head;
      head->prev=tail;
    }
  }
  printf("\nLinked list created");
}

void Insbeg() {
  struct Node *node=(struct Node*)malloc(sizeof(struct Node));
  printf("\nEnter element : ");
  scanf("%d", &node->data);
  if(head==NULL) {
    head=tail=node;
    node->next=head;
    node->prev=tail;
  }
  else {
    struct Node *ptr=head;
    while(ptr->next!=head)
      ptr=ptr->next;
    tail=ptr;
    node->next=head;
    head->prev=node;
    node->prev=tail;
    tail->next=node;
    head=node;
  }
  Display();
}

void Insend() {
  struct Node *node=(struct Node*)malloc(sizeof(struct Node));
  printf("\nEnter element : ");
  scanf("%d", &node->data);
  tail=node;
  if(head==NULL) {
    head=node;
    node->next=head;
    node->prev=tail;
  }
  else {
    struct Node *ptr=head;
    while(ptr->next!=head)
      ptr=ptr->next;
    ptr->next=node;
    node->prev=ptr;
    node->next=head;
    head->prev=tail;
  }
  Display();
}

void Inspos() {
  int pos, i=1;
  printf("\nEnter position : ");
  scanf("%d", &pos);
  if(pos<1 || pos>Length()+1) {
    printf("\nInvalid Position.");
    return;
  }
  if(pos==1) {
    Insbeg();
    return;
  }
  if(pos==Length()+1) {
    Insend();
    return;
  }
  struct Node *node=(struct Node*)malloc(sizeof(struct Node));
  struct Node *ptr=head;
  printf("\nEnter element : ");
  scanf("%d", &node->data);
  while(i<pos-1) {
    ptr=ptr->next;
    i++;
  }
  node->next=ptr->next;
  ptr->next->prev=node;
  ptr->next=node;
  node->prev=ptr;
  Display();
}

void Delbeg() {
  if(head==NULL) {
    printf("\nLinked list is empty.");
    return;
  }
  struct Node *ptr=head;
  head=head->next;
  free(ptr);
  tail->next=head;
  head->prev=tail;
  Display();
}

void Delend() {
  if(head==NULL) {
    printf("\nLinked list is empty.");
    return;
  }
  struct Node *ptr=tail;
  tail=tail->prev;
  free(ptr);
  tail->next=head;
  head->prev=tail;
  Display();
}

void Delpos() {
  int pos, i=1;
  printf("\nEnter position : ");
  scanf("%d", &pos);
  if(pos<1 || pos>Length()) {
    printf("\nInvalid Position.");
    return;
  }
  if(pos==1) {
    Delbeg();
    return;
  }
  if(pos==Length()) {
    Delend();
    return;
  }
  struct Node*ptr=head;
  while(i<pos) {
    ptr=ptr->next;
    i++;
  }
  ptr->next->prev=ptr->prev;
  ptr->prev->next=ptr->next;
  free(ptr);
  Display();
}

void Delete() {
  if(head==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct Node *ptr=head;
  while(ptr->next!=head) {
    ptr=ptr->next;
    free(ptr->prev);
  }
  free(ptr);
  head=tail=NULL;
  Display();
}

void Display() {
  if(head==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct Node *ptr=head;
  printf("\nLinked list : ");
  while(ptr->next!=head) {
    printf("%d=>", ptr->data);
    ptr=ptr->next;
  }
  printf("%d", ptr->data);
  printf("\nLength : %d", Length());
}

void Reverse() {
  if(tail==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct Node *ptr=tail;
  printf("\nReversed list : ");
  while(ptr->prev!=tail) {
    printf("%d=>", ptr->data);
    ptr=ptr->prev;
  }
  printf("%d", ptr->data);
  printf("\nLength : %d", Length());
}