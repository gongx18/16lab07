 #include <cassert>
 #include "linkedList.h"
 #include "linkedListFuncs.h"


//completed
 void addIntToEndOfList(LinkedList *list, int value) {
   assert(list != NULL); 

   Node *p;  
   p-> data = value; 
   p-> next = NULL;   //what if I don't do this?

   if(list->head == NULL && list->tail == NULL){
      list->head = p; 
      list->tail = p; 
   }else{
      list->tail->next = p;
      list->tail = p; 
   }
 }

//completed
 void addIntToStartOfList(LinkedList *list, int value) {
   assert(list!=NULL); // if list is NULL, we can do nothing.
   Node* p;
   p->data = value;
   p->next = NULL; 

   if(list->head == NULL && list->tail == NULL){
      list->head = p; 
      list->tail = p;
   }else{
      p->next = list->head; 
      list->head = p; 
   }
 }

 // list: ptr to a linked list of Node (each with int data, and Node * next)
 // Return a pointer to node with the largest value.
 // You may assume list has at least one element
 // If more than one element has largest value,
 //  break tie by returning a pointer to the one the occurs
 //  earlier in the list, i.e. closer to the head

 Node * pointerToMax(LinkedList *list) {

   // Code may assume that these assertions are true;
   //  so does not need to do error checking for these conditions.
   assert(list!=NULL);
   assert(list->head != NULL);

   // TODO: Insert code here to calculate and return
   //   value of pointer to max element (first one if ties.)
   Node* cur = list->head;  
   int max = cur->data; 
   Node *temp; 

   while(cur != NULL){ 
      if((cur->data) > max){
         max = cur->data; 
         temp = cur; 
      }
      cur = cur->next; 
   }
   return temp; 
 }

 // list: ptr to a linked list of Node (each with int data, and Node * next)
 // Return a pointer to node with the smallest value.
 // You may assume list has at least one element
 // If more than one element has smallest value,
 //  break tie by returning a pointer to the one the occurs
 //  earlier in the list, i.e. closer to the head


 Node * pointerToMin(LinkedList *list) {

   // Code may assume that these assertions are true;
   //  so does not need to do error checking for these conditions.

   assert(list!=NULL);
   assert(list->head != NULL);

   // TODO: Insert code here to calculate and return
   //   value of pointer to min element
   //   (first one such value that occurs if there are ties.)
   Node* cur = list->head;  
   int min = cur->data; 
   Node *temp; 

   while(cur != NULL){ 
      if((cur->data) < min){
         min = cur->data; 
         temp = cur; 
      }
      cur = cur->next; 
   }
   return temp; 
 }

 // list: ptr to a linked list of Node (each with int data, and Node * next)
 // Return the largest value in the list.
 // This value may be unique, or may occur more than once
 // You may assume list has at least one element

 int largestValue(LinkedList *list) {

   // Code may assume that these assertions are true;
   //  so does not need to do error checking for these conditions.

   assert(list!=NULL);
   assert(list->head != NULL);

   // TODO: Insert code here to calculate and return
   //   largest value in list (which may not be unique).
   Node* cur = list->head; 
   int max = list->head->data; 
   while(cur != NULL){
      max = (cur->data > max ? cur-> data : max);
      cur = cur -> next;  
   }
   return max; 

 }

 // list: ptr to a linked list of Node (each with int data, and Node * next)
 // Return the smallest value in the list.
 // This value may be unique, or may occur more than once
 // You may assume list has at least one element

 int smallestValue(LinkedList *list) {
   // Code may assume that these assertions are true;
   //  so does not need to do error checking for these conditions.

   assert(list!=NULL);
   assert(list->head != NULL);

   // TODO: Insert code here to calculate and return
   //   smallest value in list (which may not be unique).
   Node* cur = list->head; 
   int min = list->head->data; 

   while(cur != NULL){
      min = (cur -> data < min ? cur->data : min);
      cur = cur -> next;  
   }
   return min; 
 }

 // list: ptr to a linked list of Node (each with int data, and Node * next)
 // Return the sum of all values in the list.
 // You may assume that list is not NULL
 // However, the list may be empty (i.e. list->head may be NULL)
 //  in which case your code should return 0.

 int sum(LinkedList * list) {
   // Code may assume that these assertions are true;
   //  so does not need to do error checking for these conditions.

   assert(list!=NULL);

   // TODO: Insert code here to calculate and return
   //   sum of all values in list (0 if there are none).
   int sum = 0; 
   Node *cur = list->head; 
   while(cur != NULL){
      sum += cur->data; 
   }
   return sum; 
 }
