#include <iostream>
#include <vector>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;

public:
    Book(int id, string title, string author)
    {
        this->bookId = id;
        this->title = title;
        this->author = author;
    }

   void getAllBookDetails(){
        cout<<".............................."<<endl;
        cout<<"Book Id : "<<this->bookId<<endl;
        cout<<"Book Name : "<<this->title<<endl;
        cout<<"Author : "<<this->author<<endl;
        cout<<"..............................";
    }

    int getBookId(){
        return this->bookId;
    }

};

int main()
{
    vector<Book> library;
    int choice;
    do{
        cout<<"\n1 for add book... ";
        cout<<"\n2 for remove book... ";
        cout<<"\n3 for see all book... ";
        cout<<"\n4 for search book... ";
        cout<<"\n5 for exit... ";
        cout<<"\nEnter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:{
                //add

                int id;
                string title, author;

                cout<<"Enter Id : ";
                cin>>id;
                cin.ignore();
                cout<<"Enter title : ";
                getline(cin, title);
                cout<<"Enter Author : ";
                getline(cin, author);


                library.push_back(Book(id, title, author));
                break;
            }
            case 2:{
                //remove
                int id;
                bool isFound = false;
                cout<<"Enter Book Id : ";
                cin>>id;
                for(auto i = library.begin();i != library.end();i++){
                    if(i->getBookId()==id){
                        library.erase(i);
                        isFound= true;
                        break;
                    }
                    
                }

                (isFound = true) ? cout<<"book removed succefully ! " : cout<<"Book not Found ! "; 

                break;
            }
            case 3:{
                //see all

                for(auto i = library.begin();i != library.end();i++){
                    i->getAllBookDetails();
                }
                break;
            }
            case 4:{
                //search
                 int id;
                bool isFound = false;
                cout<<"Enter Book Id : ";
                cin>>id;
                for(auto i = library.begin();i != library.end();i++){
                    if(i->getBookId()==id){
                     i->getAllBookDetails();
                     isFound = true;
                        break;
                    }
                    
                }

                (isFound = true) ? cout<<"" : cout<<"Book not Found ! "; 
                break;
            }
            case 5:{
                cout<<"Thank You ! ";
                break;
            }
        }
    }while (choice != 5);
    
    
     return 0;
}