#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = data;
        }
    }

    int pop() {
        int data = 0;
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
        } else {
            data = arr[top];
            arr[top] = 0;
            top--;
        }
        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    int choice, data;

    do {
        cout << "\nStack Operations" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to push: ";
                cin >> data;
                s.push(data);
                break;
            case 2:
                data = s.pop();
                if (data != 0) {
                    cout << "Popped element: " << data << endl;
                }
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting program" << endl;
                exit(0);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (true);

    return 0;
}
