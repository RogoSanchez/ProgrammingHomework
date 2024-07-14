#include"Book.cpp"
#include "Library.cpp"
#include <iostream> 
using namespace std;


/*!
    *  \brief //Implementation of the Interface of the Library class
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return  none
    *  \pre none
    
  */
int main (){
    Library Nacional;
    int Option=10;
    while (Option!=0)
    {   
        cout<<" ----------------------------GOOD MORNING PEOPLE, WELCOME TO OUR LIBRARY APP----------------------------------\n";
        cout<<"--------------------------------------------------------------------------------------------------------------\n";
        cout<<"----> To insert a book ------->           Press #1\n";
        cout<<"----> To inform lost---------->           Press #2\n";
        cout<<"----> For loan a book--------->           Press #3 \n";
        cout<<"----> To find a book for his code--->     Press #4 \n";
        cout<<"----> To show the books of any author->   Press #5 \n";
        cout<<"----> To find a book for keywords--->     Press #6 \n";
        cout<<"--------------------------------------------------------------------------------------------------------------\n";
        cout<<"                                                                                                              \n";
        cout<<"                     To exit----->Press #0 \n";
        cout<<"                                                                                                              \n";
        cout<<"--------------------------------------------------------------------------------------------------------------\n";
        cout<<"                © 2004 - 2024 All Copyrights reserved \n";
        cin>>Option;
        if (Option==1)
        {   Book Insertar;
            cin>>Insertar;
            Nacional.Insert(Insertar);
        }
        if (Option==2)
        {   string Author;
            string Title;     
            fflush(stdin);
            cout<<"Provide us a Title :\n";
            getline(cin,Title);
            cout<<"Provide us an Author :\n";
            getline(cin,Author);
            Nacional.Remove(Title, Author);
        }
        if(Option==5){
            string Author;
            fflush(stdin);
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
        if (Option==3)
        {   string Author;
            string Title;     
            fflush(stdin);
            cout<<"Provide us a Title :\n";
            getline(cin,Title);
            cout<<"Provide us an Author :\n";
            getline(cin,Author);
            Nacional.Lend(Title,Author);
        }
        if (Option==6)
        {   
            string Keyword;
            fflush(stdin);
            cout<<"Provide us a Keyword :\n";
            getline(cin,Keyword);
            //Nacional.ShowKey(Keyword);
        }
        
        
        
    }
    

}
