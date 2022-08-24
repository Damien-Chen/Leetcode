/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* curr = head;
        unordered_map<ListNode *,int> mp;
        while(curr != NULL){
            if(mp.find(curr) != mp.end())// if curr is in the map
                return curr;
            mp[curr] = 1;
            curr = curr->next;
        }
        return NULL;
        
    }
};