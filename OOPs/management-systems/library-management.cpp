#include <iostream>
using namespace std;

class Book
{
protected:
    int bookId;
    string title;
    string author;
    bool isIssued = false;

public:
    void addBook(int bookId, string title, string author)
    {
        this->bookId = bookId;
        this->title = title;
        this->author = author;
    }
    void viewBookDetails()
    {
        cout << "-------Book Details-------";
        cout << "\nBook Id : " << this->bookId << endl;
        cout << "Book Title : " << this->title << endl;
        cout << "Book Author : " << this->author << endl;
        cout << "Book Availability : " << (this->isIssued == false ? "Available" : "Not Available");
        cout << "\n-------Book Details-------";
    }

    int getBookId()
    {
        return this->bookId;
    }
    bool getIsIssued()
    {
        return this->isIssued;
    }
};

class IssuedBook : public Book
{

public:
    void issueBook(string name, string date)
    {
        cout << "Book is Issued To " << name << " on " << date << endl;
        isIssued = true;
    }
    void returnBook(int id, string name)
    {
        cout << "Book is returned successfully ";
        isIssued = false;
    }
};
int main()
{
    int choice, id;
    IssuedBook library[10];
    IssuedBook IssuedToCustomer[10];
    int bookCounter = 0;
    string title, author;
    do
    {
        cout << endl;
        cout << "\n1 for Add Book..." << endl;
        cout << "2 for view Book Details..." << endl;
        cout << "3 for Issue Book..." << endl;
        cout << "4 for Return Book..." << endl;
        cout << "5 for Exit..." << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // addBook
            int id;
            string title;
            string author;
            cout << "\nEnter Book Id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter Book Title : ";
            getline(cin, title);
            cout << "Enter Book Author Name : ";
            getline(cin, author);

            library[bookCounter].addBook(id, title, author);
            bookCounter++;
        }

        break;
        case 2:
        {
            // viewDetails
            for (int i = 0; i < bookCounter; i++)
            {
                library[i].viewBookDetails();
                cout << endl;
            }
            break;
        }
        case 3:
        {
            // IssueBook

            int id;
            string name, date;
            cout << "Enter Book Id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name : ";
            getline(cin, name);
            cout << "Enter Date : ";
            getline(cin, date);

            for (int i = 0; i < bookCounter; i++)
            {
                if (library[i].getBookId() == id)
                {
                    if (library[i].getIsIssued() == true)
                    {
                        cout << "Book is already Issued ";
                        break;
                    }
                    library[i].issueBook(name, date);
                    break;
                }
                else
                {
                    cout << "Book is not Available ! ";
                    break;
                }
            }
            break;
        }
        case 4:
        {
            // ReturnBook
            int id;
            string name;

            cout << "Enter Book Id : ";
            cin >> id;
            cout << "Enter Name : ";
            cin >> name;

            for (int i = 0; i < bookCounter; i++)
            {
                if (library[i].getBookId() == id && library[i].getIsIssued() == true)
                {
                    library->returnBook(id, name);
                    break;
                }
                else
                {
                    cout << "This is a copy Book ";
                    break;
                }
            }

            break;
        }
        case 5:
            // Exit
            break;
        }
    } while (choice != 5);
    return 0;
}
