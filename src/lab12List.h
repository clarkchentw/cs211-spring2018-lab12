#include <cstdio>

// The node class for the linked list
//   This contains the operations and data for each individual
//   node in the list.   
//   The "list-level" stuff is maintained in the MyList class
class MyLNode
{
 private:
  int elem;
  MyLNode* next;
  
 public:
  MyLNode (int v1);
  MyLNode (int v1, MyLNode* n);
  
  void setElem (int e);
  int getElem ();
  void setNext (MyLNode* n);
  MyLNode* getNext();
};

// the list class for the linked list
//  This contains all of the operations and data for the
//  list as a whole
//  This class relies heavily on the MyLNode class
class MyList
{
 private:
  MyLNode* head;
  
 public:
  MyList();
   
  void show();
  void insert (int v1);
  void remove (int v1);
};


