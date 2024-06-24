#include <iostream>
using namespace std;
    class Book
    {
    private:
        int Code;
        string Title;
        string Author;
        int Amount;
        string keyWord;


    public:
        Book(int ,string , string, int,string);

    };
    
    Book:Book(int _Code=0,string _Title="", string _Author="", int _Amount=0,string _keyWord="")
    {
        Code=_Code;
        Title=_Title="";
        Author=_Author="";
        Amount=_Amount;
        keyWord=_keyWord;
    }
    
    

int main (){




    return 0;
}
