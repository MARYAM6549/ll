#include <iostream>
#include <fstream>
#include <string>
#include "telephone_book.h"
using namespace std;


int main(int argc, char const *argv[])
{
       char answer;
       bool while_exit=false;


      if (argc==1)
       {
         cout<< "please choose one part  :\n\n a : write some thing\n b : find some thing\n c : show previous writing\n d : exit\n\n tipe it after program's name with a space \n\n\tlike :\t ./a.out a"<<endl;
       }

       /*
          ofstream outfile;
          if (!outfile)
          {
       //   ofstream outfile;
          outfile.open("telephone book.txt",ios::out);
          outfile<<"firstname\t\t\t   lastname\t\t\t   phone number\t\t\t   emailadress\n\n";
          outfile.close();

          }
          */
else if (argc==2)
  {
    std::string input;
    input=argv[1];
  	cout<<input<<endl;

   while (1)
   {


             if ((input=="a")||(input=="A"))
                                {
                                   cout<< "\nDo you need a table for your note ?  ( y / n )\n"<<endl;
                                   cin>>answer;
                                   write (answer);
                                  // **************
                                   input="ended";
                                }


            else  if ((input=="b")||(input=="B"))
                               {
                                 cout<< "\nDo you want your note's or phone_number?  ( t / n )\n"<<endl;
                                 cin>>answer;
                                 search (answer);
                                 // **************
                                 input="ended";

                               }

           else  if ((input=="c")||(input=="C"))
                               {
                                 cout<<"\n\tDo you want to see your telephone book or note  ?  ( t / n )\n";
                                 cin>>answer;
                                 read(answer);
                                  // ***********
                                   input="ended";
                               }

          else  if ((input=="d")||(input=="D"))
                               {
                                   while_exit=true;
                               }

      //******************************************************8
                  else if (input=="ended")
                   {
                     cout<< "\n\n\tplease choose one part  :\n\n\t a : write some thing\n\t b : find some thing\n\t c : show previous writing\n\t d : exit\n\n tipe it after program's name with a space"<<endl;
                     while_exit=true;
                   }



           else
                    {
                       cout<<"NOT VALID \n";
                    }

      // I Know but ...
        if (while_exit) break;
    }
  }

 return 0;
}
