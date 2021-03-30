#include<fstream>
#include<iostream>
#include<conio.h>
//#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<windows.h>
using namespace std;
void gotoxy(int j, int i)
{
  COORD pos ={j,i};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void box(int a, int b, int c , int d)
{   system("CLS");
    int i=a,j=a;
    while(j<d)         //top
   { gotoxy(j+1,i);
		   
	 Sleep(20);
     cout<<char(254);
     j++;
    }    j=a;
    while(j<c+1)        //left
   { gotoxy(1,j);
      Sleep(25);
     cout<<char(219);
      
	  j++;
   }    j=a;
	 j++;
    while(j<b)         //bottom
   { gotoxy(j+1,c);     
     Sleep(20);
     cout<<char(254);
     j++;
    }    j=a;
    while(j<c+1)          //right
   { gotoxy(b,j);     
     Sleep(25);
     cout<<char(219);
     j++;
   }    j=a;
}

int NoofAc();
int Pass(char A[]);
double LAcNo();
class Costumer
{ char Name[30] , FName[30] , Address[30], DOB[12] , DOJ[12] ;
  int Age ,a;
  float  Interest ;
  double Balance ;
  char Branch[30] , AcType[25] , AadharNo[14] , Mobile[11] , Nominee[21];
  char Password[12] , EmailId[31] , PanNo[11];
  double AcNo , Acc;
  public :

  Costumer()
  { a=3;
    Balance=0;
    }

  void Add()
  {  
    cout<<"Enter Your Name\n";
    fgets(Name,30,stdin);
    cout<<"Enter Father/Gaurdian's Name\n";
    cin>>FName;
    cout<<"Enter Your Date of Birth\n";
    cin>>DOB;
    cout<<"Enter Your Age\n";
    cin>>Age;
    cout<<"Enter Current Date (Date of Joining)\n";
    cin>>DOJ;
    cout<<"Enter Your Nearest Branch Name\n";
    cin>>Branch;
    cout<<"Select Account Type\n"<<"1 - Savings Bank Account\n";
    cout<<"2 - Current Bank Account\n";
    while(a==3)
    { cin>>a;
      if(a==1)
      { strcpy(AcType,"Savings Bank Account");
	Interest=3.5;
      }
      else if(a==2)
      { strcpy(AcType,"Current Bank Account");
	Interest=0;
      }
      else
      { a=3;
	cout<<"You have Entered Wrong Choice\n";
	cout<<"Re-Enter Your Coice\n";
      }
    }
    cout<<"According to the Account Type You have Choose You Will Get ";
    cout<<Interest<<"% Interest per annum on Your "<<AcType<<endl;
    cout<<"Enter Your Complete Address\n";
    cin>>Address;
    cout<<"Enter Your 10 Digit Mobile No.\n";
    cin>>Mobile;
    cout<<"Enter Your Aadhar Card No.\n";
    cin>>AadharNo;
    cout<<"Enter Your Email Id\n";
    cin>>EmailId;
    cout<<"Enter The Name of Nominee\n";
    cin>>Nominee;
    if(NoofAc()==0)
    {  AcNo=1;
    }
    else
    { AcNo=NoofAc();
       AcNo+=1;
    }
    if(Age>17)
    { cout<<"Enter Your Pan Card No.\n";
      cin>>PanNo;
    }
    else
    { strcpy(PanNo, "Not Exist");
    }
	 int i=0;
	 cout<<"Enter the Password\n";
	 int  P=3;
      while(P!=0)
      { while(i<12)
	{  Password[i]=getch(); Password[i+1]='\0';
	  if(Password[i]==13)
	  { Password[i]='\0';  break;}
	  else
	  {  cout<<"*";
		}
	  i++;
	}
	cout<<endl;
	cout<<"Enter the New password again\n";
	P=Pass(Password);
	if(P!=0)
	{  cout <<"Password Not Match\n";
	  cout<<"ReEnter New Password\n";
	   while(i<12)
	{  Password[i]=getch(); Password[i+1]='\0';
	  if(Password[i]==13)
	  { Password[i]='\0';  break;}
	  else
	  {  cout<<"*";
		}
	  i++;
	}
	cout<<endl;
	   }
	else
	{  cout<<"Password Matched!!\n";  }
       }
       cout<<"Your Account No. is "<<AcNo<<endl;
       cout<<endl<<endl<<endl;
       cout<<"!!!!!!!!!!!!!!!! CONGRATULATIONS !!!!!!!!!!!!!!!!!\n";
       cout<<"Your Account is OPENED !!!\n";
  }

 void Modi()
 {
     
    cout<<"Enter Your Name\n";
    cin>>Name;
    cout<<"Enter Father/Gaurdian's Name\n";
    cin>>FName;
    cout<<"Enter Your Date of Birth\n";
    cin>>DOB;
    cout<<"Enter Your Age\n";
    cin>>Age;
    cout<<"Enter Current Date (Date of Joining)\n";
    cin>>DOJ;
    cout<<"Enter Your Nearest Branch Name\n";
    cin>>Branch;
    cout<<"Select Account Type\n"<<"1 - Savings Bank Account\n";
    cout<<"2 - Current Bank Account\n";
    while(a==3)
    { cin>>a;
      if(a==1)
      { strcpy(AcType,"Savings Bank Account");
	Interest=3.5;
      }
      else if(a==2)
      { strcpy(AcType,"Current Bank Account");
	Interest=0;
      }
      else
      { a=3;
	cout<<"You have Entered Wrong Choice\n";
	cout<<"Re-Enter Your Coice\n";
      }
    }
    cout<<"According to the Account Type You have Choose You Will Get ";
    cout<<Interest<<"% Interest per annum on Your "<<AcType<<endl;
    cout<<"Enter Your Complete Address\n";
    cin>>Address;
    cout<<"Enter Your 10 Digit Mobile No.\n";
    cin>>Mobile;
    cout<<"Enter Your Aadhar Card No.\n";
    cin>>AadharNo;
    cout<<"Enter Your Email Id \n";
    cin>>EmailId;
    cout<<"Enter The Name of Nominee\n";
    cin>>Nominee;
    cout<<"Your Account No. is "<<AcNo<<endl;
    cout<<endl<<endl<<endl;
    cout<<"!!!!!!!!!!!!!!!! CONGRATULATIONS !!!!!!!!!!!!!!!!!\n";
    cout<<"Your Account is OPENED !!!\n";
  }

  void Print()
  {   
     cout<<"Name - "<<Name<<endl;
     cout<<"Acount No - "<<AcNo<<endl;
     cout<<"Date of Birth - "<<DOB<<endl;
     cout<<"Date of Opening Account - "<<DOJ<<endl;
     cout<<"Father/Gardiuan's Name - "<<FName<<endl;
     cout<<"Address - "<<Address<<endl;
     cout<<"Account Type - "<<AcType<<endl;
     cout<<"Mobile No. - "<<Mobile<<endl;
     cout<<"Aadhar Card No - "<<AadharNo<<endl;
     cout<<"Branch - "<<Branch<<endl;
     cout<<"Pan Card No - "<<PanNo<<endl;
     cout<<"Name of Nominee - "<<Nominee<<endl;
     cout<<"Email Id - "<<EmailId<<endl;
     cout<<"Account Balance -  "<<Balance<<endl;
     int i=0;   cout<<"Password - ";
     while(Password[i]!='\0')
     { cout<<"*"; i++;
     }
     cout<<endl;
     cout<<"No. of Characters Costumer's Password Contain - "<<i<<endl;
  }
  char* P()
  { return Password; }
  void acno()
  {cout<<"Account No "<<AcNo<<endl;
  }
  char* Email()
  { return EmailId;
  }
  char* MobileNo()
  { return Mobile;
  }
  char* RName()
  { return Name;
  }
  char* password()
  { return Password;
  }
  double LACNO()
  { return AcNo;
  }
  double Blnc()
  { return Balance;
  }
  void B(double B)
  {    Balance=B;
  }
  float In()
  { return Interest;
  }
 };
int Pass(char A[])
{ int i=0;
  char P[12];
  while(i<12)
  {  P[i]=getch(); P[i+1]='\0';
     if(P[i]==13)
     { P[i]='\0';  break;}
     else
     {  cout<<"*";
	}
     i++;
  }  cout<<endl;
  if(strcmp(P,A)==0)
  {   return 0;    }
  else
  { return 1;}
}

int NoofAc()
{  Costumer A;
   int i=0;
   ifstream f("Banking.dat",ios::binary);
   while(!f.eof())
   { f.read((char*)&A,sizeof(A));
     if(!f.eof())
     {  i++;
     }
   }
   f.close();
   return i;
}
void Insert()
{ Costumer A;
  ofstream f("Banking.dat",ios::binary|ios::ate);
    A.Add();
    f.write((char*)&A,sizeof(A));
    cout<<"New Account Added\n" ;
    f.close();
}
double LAcNo()
{  Costumer A;
  int i=0;  double b;
  ifstream f("Banking.dat",ios::binary);
  while(!f.eof())
  { f.read((char*)&A,sizeof(A));
    if(!f.eof())
    { i++;     b = A.LACNO();
    }
  }
    f.close();

    return b;
}

void Delete()
{   
   int q=1;
   double ch;
   ifstream f("Banking.dat",ios::binary);
   ofstream t("Temp.dat",ios::binary);
   cout<<"Enter the Account no. of the Costumer whose details you want ";
   cout<<"to Delete\n";
   cin>>ch;
   Costumer a;
   while(!f.eof())
   {  f.read((char*)&a,sizeof(a));
      if(ch!=a.LACNO())
      {
	 t.write((char*)&a,sizeof(a));
      }
      else
      { q=0;
	cout<<"Record Found."<<endl;
	a.Print();  cout<<endl;
      }
   }
   t.close();
   f.close();
   remove("Banking.dat");
   rename("temp.dat","Banking.dat");
   if(q==1)
   { cout<<"Record not found!!!\n";
   }
   else
   { cout<<endl<<"Record Deleted Successfully!!!!!\n";
   }
}
void DeleteAll()
{ ifstream f("temp.dat",ios::binary);
  f.close();
  remove("Banking.dat");
  rename("temp.dat","Banking.dat");
}
void Modify()
{  
  Costumer a;
  int q=0,p=sizeof(a);
  double c;
  fstream f("Banking.dat",ios::binary|ios::in|ios::out);
  cout<<"Enter the Account no. of the Employ whose data you want to modify\n";
  cin>>c;
  while(!f.eof())
  {  f.read((char*)&a,p);
     if((!f.eof())&&(c==a.LACNO()))
     {  cout<<"Record Found!!\n";
	cout<<"Details of User Having Account no. "<<c<<" is:- \n";
	a.Print();   cout<<endl;
	f.seekg(-p,ios::cur);
	a.Modi();
	f.write((char*)&a,p);  cout<<endl;
	cout<<"Record Updated Successfully\n";
	q=1;
	break;
      }
  }
  f.close();
  if(q==0)
  { cout<<"Record NOT FOUND\n";
  }
}

void SearchByName()
{  
  char N[21];
  Costumer a;
  int q=0;
  ifstream f("Banking.dat",ios::binary);
  cout<<"Enter the NAME of the Costumer whose details you want to check\n";
  cin>>N;
  while(!f.eof())
  {  f.read((char*)&a,sizeof(a));
     if((!f.eof())&&(strcmpi(N,a.RName())==0))
     { a.Print();
       q++;  cout<<endl;
       getch();
     }
  }
  if(q==0)
  { cout<<"NO COSTUMER FOUND having NAME : "<<N<<endl;
  }
  else
  {  cout<<"No. of COSTUMERS having NAME : "<<N<<" is : "<<q<<endl;
  }
  f.close();
}

void SearchByAcNo()
{  
  double N;
  Costumer a;
  int q=0;
  ifstream f("Banking.dat",ios::binary);
  cout<<"Enter the Account no. of the Costumer whose details you want";
  cout<<" to check\n";
  cin>>N;
  while(!f.eof())
  {  f.read((char*)&a,sizeof(a));
     if((!f.eof())&&(N==a.LACNO()))
     { a.Print();
       q++;  cout<<endl;
       getch();
     }
  }
  if(q==0)
  { cout<<"NO COSTUMER FOUND having ACCOUNT NO. : "<<N<<endl;
  }
  else
  {  cout<<"No. of COSTUMERS having ACCOUNT NO. : "<<N<<" is : "<<q<<endl;
  }
  f.close();
}
void DisplayAll()
{   
   cout<<"Enter Administrator Password\n";
   char B[]="220820";
   if(Pass(B)==0)
  {
   ifstream f("Banking.dat",ios::binary);
   Costumer a;
   while(!f.eof())
   {  f.read((char*)&a,sizeof(a));
      if(!f.eof())
      { a.Print();
	cout<<endl<<"Password - "<<a.P();
	cout<<endl;
	getch();
      }
   }
   f.close();
 }

 else
 { cout<<"You Are not Allowed To Access this Feature !!!!\n";
 }   
}
void BALANCE()
{ fstream f("Banking.dat",ios::binary|ios::in|ios::out);
  Costumer A;
  double B;
  double r;
  int i=sizeof(A),q=0,c;
   
  cout<<"Enter Account No. of Costumer whose Balance you want to see\n";
  cin>>B;
  while(!f.eof())
  { f.read((char*)&A,i);
    if(!f.eof())
    {   if(B==A.LACNO())
      {  cout<<"Costumer Found Having Account No. "<<B<<endl;
	 cout<<"Enter Password\n";
	 if(Pass(A.P())==0)
       { cout<<endl<<"After How Many Months You Are Opening Your Account ?\n";
	   cin>>c;
	   r=A.Blnc();
	   r+=r*c*A.In()/12;
	   A.B(r);
	   f.seekg(-i,ios::cur);
	   f.write((char*)&A,i);
	   cout<< A.Blnc()<<endl;
	   q=1;}
      }
    }
 }
    if(q==0)
    { cout<<"Account No. Not Found\n";
    }
 }
 void Deposit()
 { fstream f("Banking.dat",ios::binary|ios::in|ios::out);
   Costumer A;
   double B,r;
   float G;
  int i=sizeof(A),q=0,c,w;
   
  cout<<"Enter your Account no. \n";
  cin>>B;
  while(!f.eof())
  { f.read((char*)&A,i);
    if(!f.eof())
    {   if(B==A.LACNO())
      {  cout<<"Costumer Found Having Account No. "<<B<<endl;
	 cout<<"Enter Password\n";
	 if(Pass(A.P())==0)
      { cout<<endl<<"Enter the amount How much you want to deposit/Withdraw \n";
	   cin>>G;
	   cout<<"After How Many Months You Are Opening Your Account ?\n";
	   cin>>c;
	   cout<<"If You want to Deposit -- 1\n";
	   cout<<"If You want to Widthdraw -- 2\n";
	   cin>>w;
	   r=A.Blnc();
	   switch(w)
	   { case 1:   r+=G; break;
	   case 2: if(G<=A.Blnc()) {  r-=G;  }
		   else
	   { cout<<"You Don't Have this Much Money to Widthdraw\n";} break;
	   default: cout<<"Wrong Choice\n"; break;
	   }
	   r+=r*c*A.In()/12;
	   A.B(r);
	   f.seekg(-i,ios::cur);
	   f.write((char*)&A,i);
	   A.Print(); q=1;}
      }
    }
 }
    if(q==0)
    { cout<<"Account No. Not Found\n";
    }
}
 void Menu3()
{   
   system("CLS");
   box(0,170,40,170);
   int a;
   
   gotoxy(32,4);
 cout<<"!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!             WELCOME TO THE AMIR BANK             !*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!\n";
   gotoxy(62,9);
   cout<<"1  ----  To Add New Costumer\n";
   gotoxy(62,11);
   cout<<"2  ----  To Search According to Name \n";
   gotoxy(62,13);
   cout<<"3  ----  To Search According to Account No. \n";
   gotoxy(62,15);
   cout<<"4  ----  To Check your Balance\n";
   gotoxy(62,17);
   cout<<"5  ----  To Dispay the Information of All the Costumers\n";
   gotoxy(62,19);
   cout<<"6  ----  To Check the no. of Costumers Bank Has\n";
   gotoxy(62,21);
   cout<<"7  ----  To Modify the Details of the Costumer\n";
   gotoxy(62,23);
   cout<<"8  ----  To Delete the Details of the Costumer\n";
   gotoxy(62,25);
   cout<<"9  ----  To Delete All Costumers \n";
   gotoxy(62,27);
   cout<<"10 ----  To Deposit or Widthdraw Money\n";
   gotoxy(62,29);
   cout<<"11 ----  To Close the Program \n";
   gotoxy(62,31);
   cout<<"Choose the Option According to What You Want to do\n";
   gotoxy(62,33);
   cin>>a;
   switch(a)
   {  case 1: Insert(); break;
      case 2: SearchByName(); break;
      case 3: SearchByAcNo(); break;
      case 4: BALANCE(); break;
      case 5: DisplayAll(); break;
      case 6: cout<<"No. of Candidates have Account in Bank is : ";
	      cout<<NoofAc()<<endl; break;
      case 7: Modify(); break;
      case 8: Delete(); break;
      case 9: DeleteAll(); break;
      case 10: Deposit(); break;
      case 11: exit(0); break;
      default : cout<<"You have Choose INVALID CHOICE !!!!!\n";
   }
}

int main()
{  
 char b='y';
 while((b=='y')||(b=='Y'))
  {  
    Menu3();
    cout<<"Do you want to continue(Y/N)?\n";
    cin>>b;
  }
  return 1;
}
