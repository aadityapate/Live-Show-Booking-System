/*
Live show booking system is a system in which we can book seats of a live show as per the availability of seats.

Functionality:-
1)We can see available seats of a show
2)We can book and cancel seat.

Constraints:-
1) rows and columns for both show are constant.
2) Only 2 shows added by default.
*/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int rows = 5;
    const int cols = 5;
    const int rows2 = 4;
    const int cols2 = 4;

    
    vector<vector<int>> matrix1(rows, vector<int>(cols, 0));
    vector<vector<int>> matrix2(rows2, vector<int>(cols2, 0));
    int ch,r,c;
    int av=rows*cols;
    int av2=rows2*cols2;

    while(true)
    {
        cout<<"\n*************************************************"<<endl;
        cout<<"\t Welcome to Live Show Booking System \t"<<endl;
        cout<<"*************************************************"<<endl;
        cout<<"Available live shows...."<<endl;
        cout<<"1 - Gaurav Kapoor LIVE"<<endl;
        cout<<"2 - Anubhav Singh Bassi Show"<<endl;
        cout<<"3 - Exit the system "<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        if (ch==1)
        {
            cout<<"Available seats : "<<av<<endl;
            // 1 - Seat booked , 0 - Seat Available
            cout<<"Seat map below"<<endl;
            for(int i=0;i<rows;i++)
            {
                cout<<" --- --- --- --- ---"<<endl;
                for(int j=0;j<cols;j++)
                {
                    cout<<"| "<<matrix1[i][j]<<" ";
                }
                cout<<"|"<<endl;
            }
            cout<<" --- --- --- --- ---"<<endl;

            cout<<"\nWhat do you want to do? \n1 - Book seat \n2 - Cancel Seat \nEnter your choice:";
            cin>>ch;
            
            if (ch==1)
            {
                cout<<"\nEnter seat that you want to book :\n";
                cout<<"Give row and column : ";
                cin>>r>>c;
                
                matrix1[r-1][c-1]=1;

                cout<<"\nYour seat has been booked successfully"<<endl;
                cout<<"Check below :- "<<endl;
                for(int i=0;i<rows;i++)
                {
                    cout<<" --- --- --- --- ---"<<endl;
                    for(int j=0;j<cols;j++)
                    {
                        cout<<"| "<<matrix1[i][j]<<" ";
                    }
                    cout<<"|"<<endl;
                }
                cout<<" --- --- --- --- ---"<<endl;

                av--;
                

            }
            else{
                cout<<"\nEnter seat that you want to cancel :\n";
                cout<<"Give row and column : ";
                cin>>r>>c;
                
                matrix1[r-1][c-1]=0;

                cout<<"\nYour seat has been cancelled successfully"<<endl;
                cout<<"Check below :- "<<endl;
                for(int i=0;i<rows;i++)
                {
                    cout<<" --- --- --- --- ---"<<endl;
                    for(int j=0;j<cols;j++)
                    {
                        cout<<"| "<<matrix1[i][j]<<" ";
                    }
                    cout<<"|"<<endl;
                }
                cout<<" --- --- --- --- ---"<<endl;

                av++;
            }

            

        }
        else if (ch==2)
        {
            cout<<"Available seats : "<<av2<<endl;
            // 1 - Seat booked , 0 - Seat Available
            cout<<"Seat map below"<<endl;
            for(int i=0;i<rows2;i++)
            {
                cout<<" --- --- --- ---"<<endl;
                for(int j=0;j<cols2;j++)
                {
                    cout<<"| "<<matrix2[i][j]<<" ";
                }
                cout<<"|"<<endl;
            }
            cout<<" --- --- --- ---"<<endl;
            
            cout<<"\nWhat do you want to do? \n1 - Book seat \n2 - Cancel Seat \nEnter your choice:";
            cin>>ch;

            if (ch==1)
            {
                cout<<"\nEnter seat that you want to book :\n";
                cout<<"Give row and column : ";
                cin>>r>>c;
                
                matrix2[r-1][c-1]=1;

                cout<<"\nYour seat has been booked successfully"<<endl;
                cout<<"Check below :- "<<endl;
                for(int i=0;i<rows2;i++)
                {
                    cout<<" --- --- --- ---"<<endl;
                    for(int j=0;j<cols2;j++)
                    {
                        cout<<"| "<<matrix2[i][j]<<" ";
                    }
                    cout<<"|"<<endl;
                }
                cout<<" --- --- --- ---"<<endl;

                av2--;

            }
            else{
                cout<<"\nEnter seat that you cancel to book :\n";
                cout<<"Give row and column : ";
                cin>>r>>c;
                
                matrix2[r-1][c-1]=0;

                cout<<"\nYour seat has been cancelled successfully"<<endl;
                cout<<"Check below :- "<<endl;
                for(int i=0;i<rows2;i++)
                {
                    cout<<" --- --- --- ---"<<endl;
                    for(int j=0;j<cols2;j++)
                    {
                        cout<<"| "<<matrix2[i][j]<<" ";
                    }
                    cout<<"|"<<endl;
                }
                cout<<" --- --- --- ---"<<endl;

                av2++;
            }



        }
        else if (ch==3)
        {
            break;

        }
        else{
            cout<<"\nOops!!.....You've have entered the wrong choice. \n";
        }


    }
}