class Solution
{
    public:
    void remove(stack<int>&s,int count,int size){
        if(count == size/2){
            s.pop();
            return;
        }
        int to = s.top();
        s.pop();
        count = count+1;
        remove(s,count,size);
        s.push(to);
        return;
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count = 0;
        remove(s,count,sizeOfStack);
        
        // code here.. 
    }
};
