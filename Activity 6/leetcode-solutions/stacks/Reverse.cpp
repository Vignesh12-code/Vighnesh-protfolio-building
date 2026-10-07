#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head)
{
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr)
    {
        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

void display(ListNode* head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Linked List is empty" << endl;
        return 0;
    }

    int value;

    cout << "Enter the elements: ";
    cin >> value;

    ListNode* head = new ListNode(value);
    ListNode* temp = head;

    for (int i = 1; i < n; i++)
    {
        cin >> value;

        temp->next = new ListNode(value);
        temp = temp->next;
    }

    cout << "Original Linked List: ";
    display(head);

    head = reverseList(head);

    cout << "Reversed Linked List: ";
    display(head);

    return 0;
}