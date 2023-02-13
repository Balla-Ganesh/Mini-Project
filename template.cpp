// HEADERFILE
#include <bits/stdc++.h>
using namespace std;

// DECLARATIONS ----------
 namespace dsa    // In one program, namespace can help define different scopes to provide scope to different identifiers declared within them. By using namespace - the same variable names may be reused in a different program.
{
    template <typename type> class Node //Create a template so that we can use our code for different data type. We dont need to write the code for diff data type
    {
    public:
        // PROPERTIES
        type data;
        Node<type> *next;

        // CONSTRUCTOR
        Node() : data(NULL), next(NULL){};
        Node(type x) : data(x), next(NULL){};

        // CLASS FUNCTIONS
        void setData(type data);

        type getData();

        void setNext(Node<type> *node);

        Node<type> getNext();
    };

    template <typename type> class LinkedList
    {
    public:
        // PROPERTIES
        dsa::Node<type> *head;
        dsa::Node<type> *tail;
        int size;

        // CONSTRUCTORS
        LinkedList() : head(NULL), tail(NULL), size(0){};

        // FUNCTIONS
        
    };
};