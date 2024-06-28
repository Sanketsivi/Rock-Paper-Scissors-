#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "Welcome to the world of Game!"<<endl;
    cout<<"-----------------------"<<endl;
    int x,y;
    cout<<"Here"<<endl
        <<"1 means rock"<<endl
        <<"2 means paper"<<endl
        <<"3 means scissors"<<endl;
        
        cout<<"Enter player1 what he/she choose:";
        cin>>x;
        cout<<"Enter player2 what he/she choose:";
        cin>>y;
        
        if(x==y)
        {
        cout<<"Match draw"<<endl;
        }
        
        else if(x==1 && y==2)
        {
        cout<<"Player 2 won"<<endl;
        }
        else if(x==2 && y==3)
        {
        cout<<"Player 2 won"<<endl;
        
        }
        else if(x==3 && y==1)
        {
        cout<<"Player 1 won"<<endl;
        }
        else if(x==2 && y==1)
        {
        cout<<"Player 1 won"<<endl;
        }
        else if(x==3 && y==2)
        {
        cout<<"Player 1 won"<<endl;
        
        }
        else if(x==1 && y==3)
        {
        cout<<"Player 1 won"<<endl;
        }
        
    return 0;
}