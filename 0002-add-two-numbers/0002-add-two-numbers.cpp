/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        ListNode * start=NULL;
        ListNode * p=NULL;
        int re=0;
        int val=0;

        while(l1!=NULL and l2!=NULL)
         {
             int ans=l1->val+l2->val+re;
             re=ans/10;
              ans=ans%10;
            l1->val=ans; 
              if(start==NULL)
               {
                   l1->val=ans;
                   start=l1;
                   p=start;
               }
               else
               {
                   p->next=l1;
                   p=p->next;
               }
               l1=l1->next;
               l2=l2->next;
         }

         while(l2!=NULL)
          {
              int val=l2->val+re;
              re=val/10;
              val=val%10;
              l2->val=val;
             p->next=l2;
             p=p->next;
            if(re==0)
              break;
              l2=l2->next;  
          } 
        while(l1!=NULL)
         {
              int val=l1->val+re;
              re=val/10;
              val=val%10;
              l1->val=val;
             p->next=l1;
             p=p->next;
            if(re==0)
              break;
              l1=l1->next;  
         }
          if(re!=0)
           {
               ListNode* n1=new ListNode(re);
               p->next=n1;
           }
           return start;
    }
};