#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Class User{
  
  private:
    string username, password;
  
  public:
    User(){
      username = "\0";
      password = "\0";
    }
    
    void CreateNewUser(){
      cout << "\t WELCOME USER \n" << "\t Please input username and password to continue \n"
      cout << \t Username: \t";
      cin >> username;
      cout << "\t Password: \t";
      cint >> password >> "\n";
    }
  
    void Login(){
      cout << "\t Username: \t";
      cin >> ch_username;
      cout << "\n\t Password: \t";
      cint >> ch_password;
      
      if(username == ch_username && password == ch_password){
        cout << "\n\t WELCOME BACK " << username << "\n";
        return true;
      }
      else
        return false;
    }
  
    
};


int main(){
  User person;
  
  person.CreateNewUser();
  person.Login();

}
