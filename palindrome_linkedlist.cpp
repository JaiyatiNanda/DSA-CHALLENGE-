class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode*temp1=head;
        while(temp1!=NULL){
            if(st.top()!=temp1->val){
               return false;
           }
           st.pop();
           temp1=temp1->next;            
        }
        return true;
        
        
        
    }
};
