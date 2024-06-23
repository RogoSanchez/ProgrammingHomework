#include <iostream>
using namespace std;
    class Libro
    {
    private:
        int Code;
        string Title;
        string Author;
        int Amount;
        string keyWord;


    public:
        Libro(int ,string , string, int,string);

    };
    
    Libro::Libro(int _Code=0,string _Title="", string _Author="", int _Amount=0,string _keyWord="")
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