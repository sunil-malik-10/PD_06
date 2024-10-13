#include <iostream>
#include<windows.h>
using namespace std;
void maize();
void gotoxy(int , int );
void moveEnemy();
void moveEnemy2();
 int ex = 1,ey = 1;
int main()
{
  system("cls");
  maize();
 while(true)
 {
    moveEnemy();
    ey=ey+1;
    if(ey==7)
    {
       ey=1;
    }
}
  while(true)
{
   ex=12;
    moveEnemy2();
    ex=ex+1;
    if(ex==18)
    {
       ex=12;
    }
  }

}
void moveEnemy()
{
    gotoxy(ex, ey); 
    cout << "(|0_0|)";
    Sleep(200);
    gotoxy(ex, ey); 
    cout << "       ";




}
void moveEnemy2()
{
    gotoxy(ex, ey); 
    cout << "(|0_0|)";
    Sleep(200);
    gotoxy(ex, ey); 
    cout << "       ";




}
void printenemy()
{
    gotoxy(ex,ey);
    cout<<"(|0_0|)";

}
void eraseenemy()
{
    gotoxy(ex,ey);
    cout<<"       ";

}
void moveEnemy2(int x,int y)
{
    gotoxy(x, y); 
    cout << "(|0_0|)";
    Sleep(200);
    gotoxy(x, y); 
    cout << "       ";




}



void maize() 
{
  cout<<"########################################################################"<<endl;
  cout<<"#    #    #                        #                    #        #     #"<<endl;
  cout<<"#    #    #    ##############      #  #                 #        #     #"<<endl;
  cout<<"#         #     #                  #  #                 #        #     #"<<endl;
  cout<<"#     #####     #                     ############      #        #     #"<<endl;
  cout<<"#               #               #       #               #        #     #"<<endl;
  cout<<"#               #########     #     #     #                      #     #"<<endl;
  cout<<"#               #           #     #    #    #            #########     #"<<endl;
  cout<<"#########       #         #     #        #    #      #                 #"<<endl;
  cout<<"#        #      #       #    #             #    #    #  #              #"<<endl;
  cout<<"######   #    ####    #    #                     ########        #######"<<endl;
  cout<<"#        #    #         #    #                 #                       #"<<endl;
  cout<<"#        #    #           #     #            #          ##########     #"<<endl;
  cout<<"#        #    #             #     #   #    #                     #     #"<<endl;
  cout<<"#        #    ###             #     #    #       #     #         #     #"<<endl;
  cout<<"#             #                 #     #          #     #    #    #     #"<<endl;
  cout<<"#  #   #      #       #       ################## #     #    #    #     #"<<endl;
  cout<<"#  #   #      #       #       #        #               #    #    #     #"<<endl;
  cout<<"#  #   #  #   #       #       #    #   #                    #    #     #"<<endl;
  cout<<"########  #   #################    #   ######################    #     #"<<endl;
  cout<<"#         #                        #                                   #"<<endl;
  cout<<"########################################################################"<<endl; 
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}