class Node
{
public:
    float data;
    char ch;
    Node *next;
    Node *next_to_next;
    // a constructor to initialize the node
    Node(float d, char c)
    {
        data = d;
        ch = c;
        next = NULL;
        next_to_next = NULL;
    }
};
