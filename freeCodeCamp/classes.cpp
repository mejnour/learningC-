#include <iostream>

using namespace std;

class Book 
{
    public:
        string title;
        string author;
        int pages;
        
        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string atitle, string aauthor, int apages) {
            title = atitle;
            author = aauthor;
            pages = apages;
        }

        bool ehGrande() {
            if (pages >= 50) {
                return true;
            }
            return false;
        }
};

int main()
{
    Book book1;
    book1.title = "E o Vento Levou";
    book1.author = "Miranda Rol Adura";
    book1.pages = 50;

    Book book2;

    Book book3("Trala em Traland", "Sr Trala", 22);

    cout << book1.author << endl;
    cout << book2.author << endl;
    cout << book3.author << endl;

    cout << book1.ehGrande() << endl;
    cout << book2.ehGrande() << endl;
    cout << book3.ehGrande() << endl;
    return 0;
}