#include <iostream>
using namespace std;
int main()
{
 float qz1;
 float qz2;
 float qz3;
 cout<<"Enter first quizz (10):";
 cin>>qz1;
 cout<<"Enter second quizz (10):";
 cin>>qz2;
 cout<<"Enter third quizz (10): ";
 cin>>qz3;

 float mid;
 cout<<"Enter midterm (40):";
 cin>>mid;
 float final;
 cout<<"Enter final (50):";
 cin>>final;
 float total;
 total =(qz1+qz2+qz3)/3; 
 cout<<"Quizz total :"<<total<<endl;
 cout<<"midterm :"<<mid<<endl;
 cout<<"final :"<<final<<endl;
 float Totalall;
 Totalall=total+mid+final;
 cout<<"Total :"<<Totalall<<endl;
 cout<<"Your score is "<<((Totalall>=50) ?  "Pass" :"Fail")<<endl;
 system("pause");
 return (0);
}
