class Book
    {
    private:
        int Code;
        string Title;
        string Author;
        int Amount;
        vector<string>keyWords;


    public:
        Book(int ,string , string, int);

        //Getters
        int getCode(); 
        string getTitle();
        string getAuthor();
        int getAmount();
        vector<string>getKeywords();
        

        //Operators
        friend istream &operator>>(istream &,Book &);
        friend ostream &operator<<(ostream &,Book &);
        
        //Setters
        void SetCode(); 
        void SetTitle(); 
        void SetAuthor(); 
        void SetAmount(); 
    };
    //Constructor
    Book::Book(int _Code=0,string _Title="", string _Author="", int _Amount=0)
    {
        Code=_Code;
        Title=_Title;
        Author=_Author;
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
        Title=_Title;
    }
   //Setter of Author
    void Book::SetAuthor(){
        string _Author;
        getline(cin,_Author);
        Author=_Author;
    }
   //Setter of Amount
    void Book::SetAmount(){
        int _Amount;
        cin>>_Amount;
        Code=_Amount;
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
B.keywords.clear;
    for (int i = 0; i < words; i++)
    {   fflush(stdin);
        string word;
        getline(cin,word);
        B.keyWords.push_back(word);
    }
    
    return input;   
}
//Overload of operator <<
ostream &operator<<(ostream &output,Book& B){
    
    output<<"The Book's Code is:"<<B.Code<<'\n';
    output<<"The Book' s Title is:"<<B.Title<<'\n';
    output<<"The Book's Author is:"<<B.Author<<'\n';
    output<<"The Book's Amount:"<<B.Amount<<'\n';
    output<<"Keywords:"<<'\n';
    for (int i = 0; i < B.keyWords.size(); i++)
    {
        output<<B.keyWords[i]<<"\n";
    }
    return output;  
}

