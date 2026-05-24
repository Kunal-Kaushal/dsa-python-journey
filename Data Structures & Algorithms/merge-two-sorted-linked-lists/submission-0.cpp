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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        vector<int>arr;
        while(temp1){
            arr.push_back(temp1->val);
            temp1=temp1->next;
        }
        ListNode*temp2=list2;
        while(temp2){
            arr.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* newlist = nullptr;
        ListNode* tail = nullptr;

        for (int val : arr) {
            ListNode* newnode = new ListNode(val);  // ✅ create a node properly

            if (!newlist) {
                newlist = newnode;  // first node
                tail = newnode;
            } else {
                tail->next = newnode;
                tail = tail->next;
            }
        }
        return newlist;
    }
};
