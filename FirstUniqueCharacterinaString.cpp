class node{
    public:
    int data;
    node*next;
    node(int key)
    {
        data = key;
        next = NULL;
    }
};







class Solution {
public:
    int firstUniqChar(string s) {
        node* Arr[26] = {NULL};
        int i = 0;
        int ok = 'a';
        while(s[i])
        {
            node* newnode = new node(i);
            int index = s[i] - ok;
            cout<<index<<endl;
            if(Arr[index] == NULL)
            {
                Arr[index] = newnode;
            } 
            else
            {
                node* temp = Arr[index];
                newnode ->next = temp;
                Arr[index] = newnode;
            }
            i++;

        }
       for (int i = 0; i < s.size(); i++)
        {
            int index = s[i] - 'a';
            if (Arr[index] != NULL && Arr[index]->next == NULL) 
            {
                return Arr[index]->data;
            }
        }

    
        return -1;
        
    }
    
};
