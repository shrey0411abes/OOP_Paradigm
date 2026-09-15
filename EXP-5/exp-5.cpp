#include <bits/stdc++.h> 
using namespace std; 

class bankaccount 
{ 
    private:     
    int balance = 0; 
     
    public:     
    void deposit(int n) 
    {         
        balance = balance + n;    
    }      
     
    void withdrawal(int a) 
    {         
        if (balance < a) 
        {             
            cout << "Insufficient balance";        
        }         
        else 
        {             
            balance = balance - a;        
        }     
    }      
    
    void display() 
    {         
        cout << "Balance: " << balance; 
    } 
}; 

int main() 
{ 
    bankaccount obj; 
    obj.deposit(300); 
    obj.withdrawal(100); 
    obj.display(); 

    return 0;
} 