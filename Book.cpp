#include<bits/stdc++.h>
using namespace std;

#include"Book.h"
//Implementation of the methods of the Library class

/*!
    *  \brief Constructor of Library  with defaults parametrers
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return  none
    *  \pre none
    * @param [in] _Code- code of books
    * @param [in] _Title -> Titles of books
    * @param [in] _Author -> Authors of books
    * @param [in] _Amount -> Total Amount of the books
    * @param [in] _keyWords -> vector to safe Book's keywords 
    * Insert the specified books or initializes it empty .
  */

//Constructor
//! Constructor of Library  with defaults parametrers
        /*!
          
        */
    Book::Book(int _Code=0,string _Title="", string _Author="", int _Amount=0,const vector<string>&keyWords={})
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


//Getters

/*!
    *  \brief Method to get Code of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     Code 
    *  \pre none
    *  \usage book.getCode();
  */

        int Book::getCode(){
        return Code;
    }


/*!
    *  \brief Method to get Title of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     Title
    *  \pre none
    *  \usage book.getTitle();
  */

    string Book::getTitle(){
        return Title;
        }



/*!
    *  \brief Method to get the Author of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     Author
    *  \pre none
    *  \usage book.getAuthor();
  */
    string Book::getAuthor(){
        return Author;
        }



/*!
    *  \brief Method to get Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     Amount
    *  \pre none
    *  \usage book.getAmount();
  */

    int Book::getAmount(){
        return Amount;
    }


/*!
    *  \brief Method to get inLoan of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return    inLoan
    *  \pre none
    *  \usage book.getinLoan();
  */

    int Book::getinLoan(){
    	return inLoan;
	}

/*!
    *  \brief Method to get a keywords of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     keyWords
    *  \pre none
    *  \usage book.getKeywords();
  */
     vector<string> Book::getKeywords()
    {
        return keyWords;
    }

/*!
    *  \brief Method to Setter the Code of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetCode();
  */

        void Book::SetCode(){
            int _Code;
            cin>>_Code;
            Code=_Code;
        }
    
/*!
    *  \brief Method to Setter the Title of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetTitle();
  */
        void Book::SetTitle(){
            string _Title;
            getline(cin,_Title);
        
            for(int i=0; i<_Title.size(); i++){
                _Title[i] = toupper(_Title[i]);	
		    }
		    Title=_Title;
        }

/*!
    *  \brief Method to Setter the Author of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetAuthor();
  */
        void Book::SetAuthor(){
            string _Author;
            getline(cin,_Author);
            for(int i=0; i<_Author.size(); i++){
        	    _Author[i] = toupper(_Author[i]);	
		    }
		
        Author=_Author;
    }

/*!
    *  \brief Method to Setter the Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetAmount();
  */
        void Book::SetAmount(){
            int _Amount;
            cin>>_Amount;
            Amount=_Amount;
        }
    
/*!
    *  \brief Method to Setter the books in Loan
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetinLoan();
  */
        void Book::SetinLoan(){
            int _inLoan;
            cin>>_inLoan;
            inLoan=_inLoan;
        }

/*!
    *  \brief Method to Setter the keywords of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    *  \pre none
    *  \usage book.SetKeywords();
  */

        void Book::SetKeywords(const string& key1 = "", const string& key2 = "", const string& key3 = ""){
            if(key1 != "") keyWords.push_back(key1);
    	    if(key2 != "") keyWords.push_back(key2);
    	    if(key3 != "") keyWords.push_back(key3);
	    }
    
 /*!
    *  \brief Overload of Method to Setter the Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    * \param [in] _Amount
    *  \pre none
    *  \usage book.SetAmount(5);
  */ 
        void Book::SetAmount(const int& _Amount){
		    Amount = _Amount;
	    }

   /*!
    *  \brief Overload of Method to Setter the Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     none
    * \param [in] _inLoan
    *  \pre none
    *  \usage book.SetinLoan(5);
  */ 
	    void Book::SetinLoan(const int& _inLoan){
		    inLoan = _inLoan;
	    }


 /*!
    *  \brief Overload of Method to Setter the Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return     input
    * \param [in] input
    * \param [in] B
    *  \pre none
    *  \usage cin>>Book;
  */ 
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

/*!
    *  \brief Overload of Method to Setter the Amount of the book
    *  \author    Roberto Gallardo Sanchez
    *  \version   1.0
    *  \date      2024-07-09
    *  \return    output
    * \param [in] output
    * \param [in] B
    *  \pre none
    *  \usage cout<<Book;
  */ 
        ostream &operator<<(ostream &output,Book& B){
        output<<"The Book's Code is:"<<B.Code<<'\n';
        output<<"The Book's Title is:"<<B.Title<<'\n';
        output<<"The Book's Author is:"<<B.Author<<'\n';
        output<<"The Book's Amount:"<<B.Amount<<'\n';
        output<<"Keywords:"<<'\n';
            for (int i = 0; i < B.keyWords.size(); i++){
                output<<B.keyWords[i]<<"\n";
            }
        return output;  
}
