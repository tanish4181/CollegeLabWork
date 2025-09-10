#include <iostream>
#include <string>
using namespace std;

struct Node
{
public:
    int rollNo;
    string name;
    Node *next;
};

class SinglyLinkedList
{
private:
    Node *head;

public:
    SinglyLinkedList()
    {
        head = nullptr;
    }

    void createList(int n)
    {
        if (n <= 0)
        {
            cout << "Invalid number of students!" << endl;
            return;
        }

        cout << "\nEntering " << n << " students data:" << endl;
        for (int i = 0; i < n; i++)
        {
            Node *newNode = new Node;
            cout << "Enter roll number for student " << (i + 1) << ": ";
            cin >> newNode->rollNo;
            cout << "Enter name for student " << (i + 1) << ": ";
            cin >> newNode->name;
            newNode->next = nullptr;

            if (head == nullptr)
            {
                head = newNode;
            }
            else
            {
                Node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        cout << "List created successfully!" << endl;
    }

    void displayList()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        int count = 0;
        cout << "\nStudent List:" << endl;
        cout << "Roll No\tName" << endl;
        cout << "----------------" << endl;

        while (temp != nullptr)
        {
            cout << temp->rollNo << "\t" << temp->name << endl;
            temp = temp->next;
            count++;
        }
        cout << "\nTotal number of nodes: " << count << endl;
    }

    void insertAtBeginning()
    {
        Node *newNode = new Node;
        cout << "Enter roll number: ";
        cin >> newNode->rollNo;
        cout << "Enter name: ";
        cin >> newNode->name;

        newNode->next = head;
        head = newNode;
        cout << "Student inserted at beginning!" << endl;
    }

    void insertAtEnd()
    {
        Node *newNode = new Node;
        cout << "Enter roll number: ";
        cin >> newNode->rollNo;
        cout << "Enter name: ";
        cin >> newNode->name;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Student inserted at end!" << endl;
    }

    void deleteFromBeginning()
    {
        if (head == nullptr)
        {
            cout << "List is empty! Cannot delete." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        cout << "Deleted student: " << temp->rollNo << " - " << temp->name << endl;
        delete temp;
    }

    void deleteFromEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty! Cannot delete." << endl;
            return;
        }

        if (head->next == nullptr)
        {
            cout << "Deleted student: " << head->rollNo << " - " << head->name << endl;
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        cout << "Deleted student: " << temp->next->rollNo << " - " << temp->next->name << endl;
        delete temp->next;
        temp->next = nullptr;
    }
};
    int main()
    {
        SinglyLinkedList list;
        int choice, n;

        while (true)
        {
            cout << "\n=== SINGLY LINKED LIST MENU ===" << endl;
            cout << "1. Create List of N Students" << endl;
            cout << "2. Display List and Count Nodes" << endl;
            cout << "3. Insert at Beginning" << endl;
            cout << "4. Insert at End" << endl;
            cout << "5. Delete from Beginning" << endl;
            cout << "6. Delete from End" << endl;
            cout << "7. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter number of students: ";
                cin >> n;
                list.createList(n);
                break;
            case 2:
                list.displayList();
                break;
            case 3:
                list.insertAtBeginning();
                break;
            case 4:
                list.insertAtEnd();
                break;
            case 5:
                list.deleteFromBeginning();
                break;
            case 6:
                list.deleteFromEnd();
                break;

            case 7:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
            }
        }

        return 0;
    }