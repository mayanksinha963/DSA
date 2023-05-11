#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

bool isCircular(Node *head)
{
   if (head == NULL)
   {
       return true;
   }
   if (head->next == NULL)
   {
       return false;
   }
   if (head->next == head)
   {
       return true;
   }
   Node *start = head;
   Node *end = head;
   while (end != NULL && end->next != NULL)
   {
       start = start->next;
       end = end->next->next;
       if (start == end)
       {
           break;
       }
   }
   if (start == end && start == head)
   {
       return true;
   }
   return false;
}
// bool isCircular(Node *head)
// {

//     if (head == NULL)
//     {
//         return true;
//     }
//     Node *ptr = head;
//     do
//     {

        
//         if (ptr->next == NULL)
//         {
            
//             return false;
//         }
//         // Node *check = ptr->next;
        
//         // while (check != head && check != NULL)
//         // {
            
//         //     if (check->data == ptr->data)
//         //     {
//         //         return false;
//         //     }
//         //     check = check->next;
//         // }
        
//         ptr = ptr->next;
        
//     } while (ptr != head);
//     return true;
// }

void print(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    Node *n5 = new Node();
    Node *n6 = new Node();
    Node *n7 = new Node();
    Node *n8 = new Node();

    n1->data = 8;
    n1->next = n2;

    n2->data = 7;
    n2->next = n3;

    n3->data = 6;
    n3->next = n4;

    n4->data = 5;
    n4->next = n5;

    n5->data = 4;
    n5->next = n6;

    n6->data = 3;
    n6->next = n7;

    n7->data = 2;
    n7->next = n8;

    n8->data = 8;
    n8->next = NULL;
    

    cout<<isCircular(n1);
    //print(n1);

    return 0;
}
