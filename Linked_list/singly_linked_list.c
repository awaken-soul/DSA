#include <stdio.h>
#include <stdlib.h>

//declaration of struct variable
struct Node {
  int data;
  struct Node* next;
}

int main()
{  int N, count;
  struct Node* head = NULL;  
  printf("Enter the number of nodes : \n");
  scanf("%d",&N);
  while(count != N)
    {
      int data;
      printf("Enter the data \n");
      scanf("%d",&data);
      create_node(data);
      count++;
    }
   return 0;
}

struct Node* create_node(data)
{
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  node->data = data;
  node->next = NULL;
  return node;
}
