#include<iostream>
#include<fstream>
#include<string>
using namespace std ;
bool check()
{
    string username , password , name , key ;
    cout << "Enter the username ";
    cin>> username;
    cout << " Enter the password ";
    cin>> password;
    ifstream read("data\\" + username + ".txt");
    getline(read,name);
    getline(read,key);
    if(name == username && key == password)
    {
        return true;
    }
    else
    {
        return false;
        
    }
};
int main()
{
    int option;
    cout<< " option ";
    cin>> option ;
    if(option == 1)
    {
        string  username , password ;
        cout<<"Username: ";
        cin>> username;
        cout<<"Password: ";
        cin>> password;
        ofstream  file;
        file.open("data\\"+ username + ".txt");
        file<<username <<endl<<password;
        file.close();
        main();
    }
    else if(option == 2)
    {
        bool status = check();
        if(status != true)
        {
            cout<<"Incorrect Username or Password"<<endl ;
            system("PAUSE");
            return 0;
        }
        
        else
        {
            cout<<"Succesfully logged in"<< endl ;
             system("PAUSE");
            return 1;
        }
    }

    }
