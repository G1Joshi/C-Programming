#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};
struct node *start = NULL;

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

int main() {
  int op;
  do {
    printf("\n\nLinked List Operations");
    printf("\n0. Exit\n1. Create list\n2. Display list");
    printf("\n3. Insert at beginning\n4. Insert at end\n5. Insert at position");
    printf("\n6. Delete at beginning\n7. Delete at end\n8. Delete at position");
    printf("\n9. Delete list");
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
      default: printf("\nInvalid Choice...\nChoose correct option.");
    }
  }while(op);
}

void Create() {
  if(start!=NULL) {
    printf("\nList is already created.");
    Display();
    return;
  }
  int O;
  do {
    struct node *new, *ptr = start;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &new->data);
    new->next=NULL;
    if(start==NULL)
        start=new;
    else {
      while(ptr->next!=NULL)
        ptr=ptr->next;
      ptr->next=new;
    }
    printf("\nWant to enter more (1/0) ? ");
    scanf("%d", &O);
  }while(O);
  Display();
}

void Display() {
  struct node *ptr = start;
  if(ptr==NULL) {
    printf("\nList is empty.");
    return;
  }
  printf("\nLinked list : ");
  while(ptr!=NULL) {
    printf("%d", ptr->data);
    if(ptr->next!=NULL)
      printf("=>");
    ptr=ptr->next;
  }
  printf("\nLength : %d", Length());
}

int Length() {
  struct node *ptr = start;
  int count=0;
  while(ptr!=NULL) {
    count++;
    ptr=ptr->next;
  }
  return count;
}

void Insbeg() {
  struct node *new;
  new=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter data : ");
  scanf("%d", &new->data);
  if(start==NULL) {
    new->next=NULL;
    start=new;
  }
  else {
    new->next=start;
    start=new;
  }
  Display();
}

void Insend() {
  struct node *new, *ptr = start;
  new=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter data : ");
  scanf("%d", &new->data);
  new->next=NULL;
  if(start==NULL)
    start=new;
  else {
    while(ptr->next!=NULL)
      ptr=ptr->next;
    ptr->next=new;
  }
  Display();
}

void Inspos() {
  int pos, i=1;
  printf("\nEnter position : ");
  scanf("%d", &pos);
  if(pos>Length()+1) {
    printf("\nInvalid position.");
    return;
  }
  struct node *new, *ptr, *pptr;
  pptr=ptr=start;
  new=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter data : ");
  scanf("%d", &new->data);
  new->next=NULL;
  while(i<pos) {
    pptr=ptr;
    ptr=ptr->next;
    i++;
  }
  new->next=ptr;
  pptr->next=new;
  Display();
}

void Delbeg() {
  if(start==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct node *ptr = start;
  start=ptr->next;
  ptr->next=NULL;
  free(ptr);
  Display();
}

void Delend() {
  if(start==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct node *ptr, *pptr;
  pptr=ptr=start;
  while(ptr->next!=NULL) {
    pptr=ptr;
    ptr=ptr->next;
  }
  pptr->next=NULL;
  free(ptr);
  Display();
}

void Delpos() {
  if(start==NULL) {
    printf("\nList is empty.");
    return;
  }
  int pos, i=1;
  printf("\nEnter position : ");
  scanf("%d", &pos);
  if(pos>Length()) {
    printf("\nInvalid position.");
    return;
  }
  struct node *ptr, *pptr;
  pptr=ptr=start;
  while(i<pos) {
    pptr=ptr;
    ptr=ptr->next;
    i++;
  }
  pptr->next=ptr->next;
  ptr->next=NULL;
  free(ptr);
  Display();
}

void Delete() {
  if(start==NULL) {
    printf("\nList is empty.");
    return;
  }
  struct node *pptr, *ptr;
  pptr=ptr=start;
  while(ptr!=NULL) {
    pptr=ptr;
    ptr=ptr->next;
    pptr->next=NULL;
    free(pptr);
  }
  start=NULL;
  Display();
}