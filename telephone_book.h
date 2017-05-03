#include <iostream>
#include <fstream>
#include <string>
#ifndef m2_h_
#define m2_h_

long int phone_number;
//string firstname , lastname, emailadress;

//string note;

//string searchnam;

using namespace std;


         int write (char answer)
    {

       if ((answer=='n')||(answer=='N'))
         {

               string note;
               cout<<"enter your note :\n\n";
           cin>>note;
           cout<<endl;
           ofstream outfile;
           outfile.open("note.txt",ios::app);
           outfile<<"\n"<<note.c_str()<<endl;
           outfile.close();

         }

        else if ((answer=='y')||(answer=='Y'))
               {


                  cout<< "\nwe have a table for telephone book\n\n\n   firstname\t\t   lastname\t\t   phone number\t\t   emailadress \n"<<endl;

                  cout<<endl;
                            string firstname , lastname, emailadress;

                             do
                              {
                                cout<<"firstname\t\t";
                                cin>>firstname;
                                cout<<"lastname\t\t";
                                cin>>lastname;
                                cout<<"phone number\t\t";
                                cin>>phone_number;
                                cout<<"emailadress\t\t";
                                cin>>emailadress;

                                ofstream outfile;
                                outfile.open("telephone book.txt",ios::app);
                                outfile<<firstname<<"\n"<<lastname<<"\n"<<phone_number<<"\n"<<emailadress<<"\n\n\n";
                                outfile.close();

                                 cout<<"\n\tDo you want to continue ?  ( y / n )\n";
                                 cin>>answer;
                                 cout<<endl;
                              }
                             while((answer=='y')||(answer=='Y'));
                  }


        else
                      {
                        cout<<"NOT VALID \n";
                      }


    return 0;
   }





          int read (char answer)
   {
     if ((answer=='T')||(answer=='t'))
         {
           string firstname , lastname, emailadress;
           fstream pointer("telephone book.txt",ios::in);

                while (pointer>>firstname>>lastname>>phone_number>>emailadress)
                      {
                          std::cout <<"firstname\t\t"<<firstname<<"\nlastname\t\t"<<lastname<<"\nphone_number\t\t"<<phone_number<<"\nemailadress\t\t"<<emailadress<<"\n\n";
                      }
         }



     else if ((answer=='n')||(answer=='N'))
         {
           string note;
           fstream pointer("note.txt",ios::in);

               while (pointer>>note)
                      {
                           std::cout <<note<<endl;
                      }
         }



     else
         {
           cout<<"NOT VALID \n";
         }



          return 0;
    }



          int search (char answer)
   {

     if ((answer=='T')||(answer=='t'))
         {


           string firstname , lastname, emailadress;
           string searchname;
         ifstream pointer("telephone book.txt",ios::in);

         cout<<"\nenter a name for finding :\n"<<endl;
         cin>>searchname;
         cout<<endl;
         int flag=0;
             while (!pointer.eof())
                    {
                        pointer>>firstname>>lastname>>phone_number>>emailadress;
                      if (firstname==searchname)
                           {
                              flag++;
                              if (flag==1)
                                   {
                                      std::cout <<"firstname\t\t"<<firstname<<"\nlastname\t\t"<<lastname<<"\nphone_number\t\t"<<phone_number<<"\nemailadress\t\t"<<emailadress<<"\n\n";
                                   }
                           }

                     }

                     if(!flag)
                         {
                           cout <<"does't exist in this list .\n\n";
                         }


         }




     else if ((answer=='n')||(answer=='N'))
         {


            string note;
           string searchnote;
         ifstream pointer("note.txt",ios::in);

         cout<<"\nenter a note to finding :\n"<<endl;
         cin>>searchnote;
         cout<<endl;
         int flag=0;
             while (!pointer.eof())
                    {
                      pointer>>note;
                      if (note==searchnote)
                           {
                              flag++;
                              if (flag==1)
                                   {
                                      std::cout <<note<<"\n\n";
                                   }
                           }

                     }

                     if(!flag)
                         {
                           cout <<"does't exist .\n\n";
                         }

         }




     else
         {
           cout<<"NOT VALID \n";
         }


   return 0;
    }

#endif
