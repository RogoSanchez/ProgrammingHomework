#include<bits/stdc++.h>
using namespace std;

#include"Book.h"

//Constructor
    Book::Book(int _Code=0,string _Title="", string _Author="", int _Amount=0)
    {
        Code=_Code;
        for(int i=0; i<_Title.size(); i++){
        	_Title[i] = toupper(_Title[i]);	
		}
        for(int i=0; i<_Author.size(); i++){
        	_Author[i] = toupper(_Author[i]);	
		}
		
		Title = _Title;
		Author = _Author;
		Amount=_Amount;
    }
    // Method getter of Keywords
    vector<string> Book::getKeywords()
    {
        return keyWords;
    }

    // Method getter of Code
    int Book::getCode(){
        return Code;
    }
 //Method getter of Title
    string Book::getTitle(){
        return Title;
    }
 //Method getter of Author
    string Book::getAuthor(){
        return Author;
    }
 //Method getter of Amount
    int Book::getAmount(){
        return Amount;
    }
  //Method getter of inLoan
    int Book::getinLoan(){
    	return inLoan;
	}

   //Setter of Code
    void Book::SetCode(){
        int _Code;
        cin>>_Code;
        Code=_Code;

    }
   //Setter of Title
    void Book::SetTitle(){
        string _Title;
        getline(cin,_Title);
        
        for(int i=0; i<_Title.size(); i++){
        	_Title[i] = toupper(_Title[i]);	
		}
		
        Title=_Title;
    }
   //Setter of Author
    void Book::SetAuthor(){
        string _Author;
        getline(cin,_Author);
        
        for(int i=0; i<_Author.size(); i++){
        	_Author[i] = toupper(_Author[i]);	
		}
		
        Author=_Author;
    }
   //Setter of Amount
    void Book::SetAmount(){
        int _Amount;
        cin>>_Amount;
        Amount=_Amount;
    }
    //Setter of inLoan
    void Book::SetinLoan(){
        int _inLoan;
        cin>>_inLoan;
        inLoan=_inLoan;
    }
    
    void Book::SetKeywords(const string& key1 = "", const string& key2 = "", const string& key3 = ""){
        if(key1 != "") keyWords.push_back(key1);
    	if(key2 != "") keyWords.push_back(key2);
    	if(key3 != "") keyWords.push_back(key3);
	}
    
  //Overload of method SetAmount    
    void Book::SetAmount(const int& _Amount){
		Amount = _Amount;
	}

  //Overload of method inLoan
	void Book::SetinLoan(const int& _inLoan){
		inLoan = _inLoan;
	}

//Overload of operator >>
istream &operator>>(istream &input,Book& B){
    cout<<"Enter Book's Code: ";
    cin>>B.Code;
    fflush(stdin);
    cout<<"Enter Book's Title: ";
    getline(cin,B.Title);
    cout<<"Enter Book's Author: ";
    getline(cin,B.Author);
    fflush(stdin);
    cout<<"Enter Book's Amount: ";
    cin>>B.Amount;
    unsigned int words;
    do{
        cout<<"How many keywords do you want to enter: max 3 : ";
        cin>>words;
        }
    while (words>3);
    
    B.keyWords.clear();
    
    for (int i = 0; i < words; i++)
    {   fflush(stdin);
        string word;
        getline(cin,word);
        B.keyWords.push_back(word);
    }
    
    for(int i=0; i<B.Title.size(); i++){
        B.Title[i] = toupper(B.Title[i]);	
	}
	for(int i=0; i<B.Author.size(); i++){
    	B.Author[i] = toupper(B.Author[i]);	
	}
    
    return input;   
}

//Overload of operator <<
ostream &operator<<(ostream &output,Book& B){
    
    output<<"The Book's Code is:"<<B.Code<<'\n';
    output<<"The Book's Title is:"<<B.Title<<'\n';
    output<<"The Book's Author is:"<<B.Author<<'\n';
    output<<"The Book's Amount:"<<B.Amount<<'\n';
    output<<"Keywords:"<<'\n';
    for (int i = 0; i < B.keyWords.size(); i++)
    {
        output<<B.keyWords[i]<<"\n";
    }
    return output;  
}
