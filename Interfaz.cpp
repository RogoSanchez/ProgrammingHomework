#include"Book.cpp"
#include "Library.cpp"
#include <iostream> 
using namespace std;

int main (){
    Library Nacional;
    int Option=10;
    while (Option!=0)
    {
        cout<<"Press #1 to insert a book\n";
        cout<<"Press #2 to inform lost\n";
        cout<<"Press #3 to show all the books of any author\n";
        cout<<"Press #4 to find a book for his code\n";
        cout<<"Press #5 for loan a book\n";
        cout<<"Press #6 to find a book for keywords\n";
        cout<<"Press #0 to exit\n";
        cin>>Option;
        if (Option==1)
        {   Book Insertar;
            cin>>Insertar;
            Nacional.Insert(Insertar);
        }
        if (Option==2)
        {   string Author;
            string Title;     
            cout<<"Provide us a Title :\n";
            getline(cin,Title);
            cout<<"Provide us an Author :\n";
            getline(cin,Author);
            Nacional.Remove(Title, Author);
        }
        if(Option==3){
            string Author;
            cout<<"Provide us an Author :\n";
            getline(cin,Author);
            Nacional.ShowBooks(Author);
        }
        if(Option==4){
            int Code;
            cout<<"Provide us a Code :\n";
            cin>>Code;
            Nacional.FindBook(Code);
        }
        if (Option==5)
        {   string Author;
            string Title;     
            cout<<"Provide us a Title :\n";
            getline(cin,Title);
            cout<<"Provide us an Author :\n";
            getline(cin,Author);
            Nacional.Lend(Title,Author);
        }
        if (Option==6)
        {   
            string Keyword;
            cout<<"Provide us a Keyword :\n";
            getline(cin,Keyword);
            //Nacional.ShowKey(Keyword);
        }
        
        
        
    }
    

}