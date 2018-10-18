#include "lab12List.h"

//  Code for the methods is the MyLNode class
//    These are the Node Level operations
//    Contains: 
//      2 constructors
//      Getters and Setters for the 2 data members
MyLNode::MyLNode (int v1)
{
  elem = v1;
  next = NULL;
}
  
MyLNode::MyLNode (int v1, MyLNode* n)
{
  elem = v1;
  next = n;
}

void MyLNode::setElem (int e)
{
  elem = e;
}

int MyLNode::getElem ()
{
  return elem;
}

void MyLNode::setNext (MyLNode* n)
{
  next = n;
}

MyLNode* MyLNode::getNext()
{
  return next;
}



//  Methods for the MyList class
//    These are the List Level operations
MyList::MyList()
{
  head = NULL;
}
 
void MyList::show()
{

}

void MyList::insert (int v1)
{
  MyLNode* tmp = new MyLNode (v1);
  
  // this code just inserts the node at the beginning of the list
  tmp->setNext (head);
  head = tmp;
}

void MyList::remove (int v1)
{
  
}






