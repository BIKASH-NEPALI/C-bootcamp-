#include<iostream>
#include<string>
using namespace std;
class LibraryBook {
    private:
    string title;

    string Author;
    static int  Total_books;
    public:
    LibraryBook(string t, string a){
        title=t;
        Author=a;
        Total_books++;
    }
    void display() {
        cout<<"Title:"<<title<<", Author:"<<Author<<endl;
    }
    void static getTotalBooks() {
        cout<< Total_books<<endl;
    }

};
int LibraryBook::Total_books=0;

int main() {
    LibraryBook book1("Mathmetics","Bikash Nepali");
    LibraryBook book2("Physics", "steve Rogers" );
    LibraryBook book3(book1);
    book1.display();
    book2.display();
    LibraryBook::getTotalBooks();
    return 0;
}