class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        // Dummy heads for two lists
        ListNode lessdummy(0);
        ListNode greaterdummy(0);

        ListNode* less = &lessdummy;
        ListNode* greater = &greaterdummy;

        // Traverse original list
        while (head != nullptr) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        // Connect two partitions
        greater->next = nullptr; // End greater list
        less->next = greaterdummy.next; // Join lists

        return lessdummy.next; // Head of new list
    }
};
