#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include <string>
#include<mmsystem.h>
using namespace std;
class hostel{
	public:
		int chc;
		string roll,nam,age,dept,sem,mn,cont1,cont2,cont3,bill;
//WELCOME--------------------------------------------------------------------------------------------------------------
welcome()
{	system ("color 7B");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	PlaySound(TEXT("wait.wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t\tEntering Into The System";
	char x=219;
	for(int i=0;i<35;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);
}
//Login-Section--------------------------------------------------------------------------------------------------------
		void login()
		{
	string user,pass;
	char op,c;
	system("cls");
	system ("color 70");
	cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\t\t\t\t\t\tWELCOME TO OUR HOSTEL";
	cout<<"\n\t\t\t===================================================================";
	cout<<"\n\n\t\t\t\t\t\tLOGIN SECTION";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\t------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t\tEnter your Username in Capital Letters = ",cin>>user;
	cout<<"\n\n\t\t\t\t\tEnter your Password = ";
	for(int i=1;i<=6;i++)
	{
		c=getch();
		pass+=c;
		cout<<"*";
	}
	
	if(user=="USMAN" && pass=="516516"||user=="ZAIN" && pass=="539539")
	{
		PlaySound(TEXT("correct.wav"),NULL,SND_SYNC);
		cout<<"\n\n\t\t\t\t\t\tCorrect pass";
		cout<<"\n\t\t\t_________________________________________________________________";
		cout<<"\n\nEntering into the System";
		for(int i=0;i<90;i++)
{
	cout<<"-";
	Sleep(15);
}
	void menu();
	}
	else if(user=="USMAN" && pass!="516516"||user=="ZAIN" && pass!="539539" ||user=="AZHAR" && pass!="537537" )
	{
		cout<<"\n\n\t\t\t\t\tYour Password is Wrong.....";
		cout<<"\n\t\t\t_________________________________________________________________";
		cout<<"\n\t\t\t\tPress any key to Exit......";
		    	exit(0);
	}
	else if(user!="USMAN" && pass=="516516"||user!="ZAIN" && pass=="539539")
	{
		cout<<"\n\n\t\t\t\t\tYour Username is Wrong.....";
		cout<<"\n\t\t\t_________________________________________________________________";
		cout<<"\n\t\t\t\tPress any key to Exit......";
		    	exit(0);
	}
	else
	{
		cout<<"\n\n\t\t\t\t\tWrong Username & Password........";
		cout<<"\n\t\t\t_________________________________________________________________";
		cout<<"\n\t\t\t\t\tPress any key to Exit......";
		    	exit(0);
	}			
		}
//Registration-Section--------------------------------------------------------------------------------------------------------
	void reg()
	
		{
			system ("color 4");
	char mm;
	int chc1,chc2,chc3,chc4,chc5,chc6,chc7,chc8,chc9,droll;
	char opo;
			system("cls");
			cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<"\n\n\t\t\t===================================================================";		    
		    cout<<"\n\n\t\t\t\t\t..::INPUT YOUR REQUIRED INFORMATION::..";
			cout<<"\n\n\t\t\t===================================================================";			
			cout<<"\n\n\t\t\tEnter Your Full Name = ",cin>>nam;
			cout<<"\n\n\t\t\tEnter Your Roll NO = ",cin>>roll;
			cout<<"\n\n\t\t\tEnter Your Age =  ",cin>>age;
			cout<<"\n\n\t\t\tEnter Your Department =  ",cin>>dept;
			cout<<"\n\n\t\t\tEnter Your Session = ",cin>>sem;
			cout<<"\n\n\t\t\tEnter Your Mobile No =  ",cin>>mn;
			i1:
			cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
			cout<<"\n\n\t\t\t1.Standard Rooms.";
			cout<<"\n\n\t\t\t2.Luxary Rooms. ";
			cout<<"\n\n\t\t\t_________________________________________________________________";
			cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc1;
			if(chc1==1)
			{
				d1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Category Are :";
				cout<<"\n\n\t\t\t1.One-Seater";
				cout<<"\n\n\t\t\t2.Two-Seater";
				cout<<"\n\n\t\t\t3.Three-Seater";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc2;
				if(chc2==1)
				{
			
					a1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-1600.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-2000. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc3;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc3==1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-1600.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2150.";
					cont1="Standard";
					cont2="One";
					cont3="Air-Cooled";
					bill="USD-2150";
				}
				else if(chc3==2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-2000.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2550.";
					cont1="Standard";
					cont2="One";
					cont3="Air-Conditioned";
					bill="USD-2550";
				}
				else
				{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto a1;		
				}
				}
				 else if(chc2==2)
				{
					b1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-1300.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-1600. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc4;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc4==1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-1300.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-1850.";
					cont1="Standard";
					cont2="Two";
					cont3="Air-Cooled";
					bill="USD-1850";
				}
				else if(chc4==2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-1600.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2150.";
					cont1="Standard";
					cont2="Two";
					cont3="Air-Conditioned";
					bill="USD-2150";
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto b1;		
				}
				}
			 else if(chc2==3)
				{
					c1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-1050.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-1250. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc9;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc9==1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-1050.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-1600.";
					cont1="Standard";
					cont2="Three";
					cont3="Air-Cooled";
					bill="USD-1600";
				}
				else if(chc9==2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-1250.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-50.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-1800.";
					cont1="Standard";
					cont2="Three";
					cont3="Air-Conditioned";
					bill="USD-1800";
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto c1;		
				}
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto d1;		
				}
			}
			else if(chc1==2)
			{
				h1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Category Are :";
				cout<<"\n\n\t\t\t1.One-Seater";
				cout<<"\n\n\t\t\t2.Two-Seater";
				cout<<"\n\n\t\t\t3.Three-Seater";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc5;
				if(chc5==1)
				{
				e1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-2100.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-2500. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc6;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc6==1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-2100.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2700.";
					cont1="Luxary";
					cont2="One";
					cont3="Air-Cooled";
					bill="USD-2700";
				}
				else if(chc6==2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-2500.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\t\tYour Total is = USD-3100.";
					cont1="Luxary";
					cont2="One";
					cont3="Air-Conditioned";
					bill="USD-3100";
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto e1;		
				}
				}
				 else if(chc5==2)
				{
				f1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-1800.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-2100. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc7;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc7==1)
				{
					system("cls");
					cont1="Luxary";
					cont2="Two";
					cont3="Air-Cooled";
					bill="USD-2400";
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-1800.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2400.";
				}
				else if(chc7==2)
				{
					system("cls");
					cont1="Luxary";
					cont2="Two";
					cont3="Air-Conditioned";
					bill="USD-2700";
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-2100.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\tYour Total is = USD-2700.";
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto f1;		
				}
				}
					 else if(chc5==3)
				{
					g1:
				cout<<"\n\n\t\t\t\t\t\t\tRooms Are ";
				cout<<"\n\n\t\t\t1.Air-Cooled Room = USD-1550.";
				cout<<"\n\n\t\t\t2.Air-Conditioned  Room = USD-1750. ";
				cout<<"\n\n\t\t\t_________________________________________________________________";
				cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>chc8;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(chc8==1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Cooled Room = USD-1550.";
					cout<<"\n\n\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tPay Your Bill.\t\t\t\tYour Total is = USD-2150.";
					cont1="Luxary";
					cont2="Three";
					cont3="Air-Cooled";
					bill="USD-2150";
				}
				else if(chc8==2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\tPay Your Bill is : ";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\t\tAir-Conditioned Room = USD-1750.";
					cout<<"\n\n\t\t\t\t\tLaundry-Charges = USD-100.";
					cout<<"\n\n\t\t\t\t\tFood-Facility = Veg-Food-USD-500.";
					cout<<"\n\n\t\t\t\t=================================================";
					cout<<"\n\n\t\t\t\tPay Your Bill.\t\t\t\tYour Total is = USD-2350.";
					cont1="Luxary";
					cont2="Three";
					cont3="Air-Conditioned";
					bill="USD-2350";
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto g1;		
				}
				}
				else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto h1;		
				}
			}
			else
					{
					cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto i1;		
				}
		
					fstream file;
					file.open("hosteldata.txt",ios::out|ios::app);
					file<<" "<<nam<<" "<<roll<<" "<<age<<" "<<dept<<"  "<<sem<<"  "<<mn<<"  "<<cont1<<"  "<<cont2<<"  "<<cont3<<"  "<<bill<<endl;
					file.close();
					PlaySound(TEXT("success.wav"),NULL,SND_SYNC);
					cout<<"\n\t\t\tYou Register Yourself Successfully";
					cout<<"\n\t\t\tIF You Want To Return Back ? [Y/N] = ",cin>>opo;
					cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(opo=='Y')
				void menu();	
		 		else
		    {
		    	cout<<"\nPress any key to Exit......";
		    	exit(0);	
			}
}
//Search-Record---------------------------------------------------------------------------------------------------------------------------------
void rec()
{
	system("cls");
	system ("color 04");
	char opo;
	string urol;
	int count=0;
	cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\t\t\t===================================================================";		    
	cout<<"\n\n\t\t\t\t\t..::SEARCH STUDENT RECORD::..";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\n\t\t\t\t\tEnter the Roll-No to find data = ",cin>>urol;
	fstream file;
	file.open("hosteldata.txt",ios::in);
	file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
	while(!file.eof())
	{
		if(urol == roll)
		{
			cout<<"\n\t\t\t\tName = "<<nam;
			cout<<"\t\t\tRoll-No = "<<roll;
			cout<<"\n\t\t\t\tAge = "<<age;
			cout<<"\t\t\tDepartment = "<<dept;
			cout<<"\n\t\t\t\tSession = "<<sem;
			cout<<"\t\t\tMobile no = "<<mn;
			cout<<"\n\t\t\t\tRoom Type = "<<cont1;
			cout<<"\t\tNo of Bed = "<<cont2;
			cout<<"\n\t\t\t\tFacility Type = "<<cont3;
			cout<<"\tStudent Bill = "<<bill;
			count++;
		}
	file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
	}
	if(count==0)
	{
		cout<<"\n\t\tNO Data Found";
	}
	file.close();
	
	
			cout<<"\n\t\t\t_________________________________________________________________";
			cout<<"\n\t\t\tIF You Want To Return Back ? [Y/N] = ",cin>>opo;
					cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(opo=='Y')
				{	
				void menu();
				}
		 		else
		    {
		    	cout<<"\nPress any key to Exit......";
		    	exit(0);	
			}	
}
//Rooms and Fee Structure.......................................................................................................................................
void room()
{
string chs1,chs2,chs3;
char op,op1,op2;
int stan;
		q:
			system ("color 5");
			system("cls");
			cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<"\n\t\t\t=================================================================";		    
		    cout<<"\n\n\t\t\t\t\t..::ROOMS OF HOSTEL::.."<<endl;
			cout<<"\n\t\t\t================================================================="<<endl;
			PlaySound(TEXT("fee.wav"),NULL,SND_SYNC);
			cout<<"\n\t\t\t1:-   Standard Rooms."<<endl;
			cout<<"\t\t\t2:-   Luxury Apartment."<<endl;
			cout<<"\t\t\t3:-   Back To Main Menu."<<endl;
			cout<<"\n\t\t\t_________________________________________________________________"<<endl;
			cout<<"\n\t\t\t\t\tEnter Your Choice :",cin>>stan;	
			cout<<"Processing";
			for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					
		 if(stan==1)
			{
				system("cls");
				chs1=="Standard Room";
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n\t\t\t================================================================="<<endl;
				cout<<"\n\t\t\t\t\t..::Standard Room for Student::.."<<endl;
				cout<<"\n\t\t\t\t\t   ..::Free Structure in $::.."<<endl;
				cout<<"\n\t\t\t================================================================="<<endl;
				cout<<"\n\t\t\t________________________________________________________________"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tRoom_Category------------:-----Air_Cooled-------------Air_Conditioned"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t4-Seater------------:-USD-850--------USD-1050"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t3-Seater------------:-USD-1050--------USD-1250"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t2-Seater------------:-USD-1300--------USD-1600"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t1-Seater------------:-USD-1600--------USD-2000"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tLaundry-:-USD-50"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tFood-Facility----:-Veg-Food-USD-500"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\n\t\t\t________________________________________________________________"<<endl;
					cout<<"\n\t\t\tIF You Want To Return Back ? [Y/N] = ",cin>>op;
					cout<<"Processing";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(op=='Y')
				goto q;	
		 		else
		    {
		    	cout<<"\nPress any key to Exit......";
		    	exit(0);	
			}
}	
		else	if(stan==2)
				{
					system("cls");
				chs2=="Luxury Apartment";
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n\t\t\t================================================================="<<endl;
				cout<<"\n\t\t\t\t\t..::Standard Room for Student::.."<<endl;
				cout<<"\n\t\t\t\t\t   ..::Free Structure in $::.."<<endl;
				cout<<"\n\t\t\t================================================================="<<endl;
				cout<<"\n\t\t\t________________________________________________________________"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tRoom_Category----------:---Air_Cooled--------Air_Conditioned"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t4-Seater---------------:---USD-1150----------USD-2050"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t3-Seater---------------:---USD-2050----------USD-2250"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t2-Seater---------------:---USD-3300----------USD-2600"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\t1-Seater---------------:---USD-3000----------USD-5000"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tLaundry----------------:---USD-100"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\t\t\tFood-Facility----------:---Veg-Food-USD-500"<<endl;
				cout<<"\t\t\t:"<<endl;
				cout<<"\n\t\t\t________________________________________________________________"<<endl;
				cout<<"\n\t\t\tIF You Want To Return Back ? [Y/N] = ",cin>>op1;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(op1=='Y')
				goto q;		
		 		else
		    {
		    	cout<<"\nPress any key to Exit......";
		    	exit(0);	
			}
}
			
	else	if(stan==3)
		{
				cout<<"Processing";
	}
	else
	{
		cout<<"\n\n\t\t\t\tInvalid Choice";
					for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
					goto q;		
	}
		
}
//---------Rules and regulation----------------
void rules()
{
char op;
{
	r:
	system("cls");
	system ("color D");
	cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\t\t\t=================================================================";		    
	cout<<"\n\n\t\t\t\t\t..::Rules and Regulations of Hostel::.."<<endl;
	cout<<"\n\t\t\t================================================================="<<endl;
	cout<<"\n\t\t\t____________________________________________________________________________"<<endl;
	PlaySound(TEXT("rules.wav"),NULL,SND_SYNC);
	cout<<"\n\t\t\t*-1:---------------------No_Smooking-----------------------------------*"<<endl;
	cout<<"\t\t\t*-1:---------------------No_Ragging------------------------------------*"<<endl;
	cout<<"\t\t\t*-1:---------------------Dicipline_Maintain----------------------------*"<<endl;
	cout<<"\t\t\t*-1:---------------------Beware_of_all_notices-------------------------*"<<endl;
	cout<<"\t\t\t*-1:---------------------No_Interchange_rooms_without_permission-------*"<<endl;
	cout<<"\n\t\t\t____________________________________________________________________________"<<endl;
	cout<<"\n\n\t\t\tIF You Want To Return Main Menu ? [Y/N] = ",cin>>op;
	cout<<"Processing";
	for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
	if(op=='Y')
	{
	void menu();	
	}
	else
	{
		cout<<"\nPress any key to Exit......";
		exit(0);	
	}
}
}
//display data------------------------------------------------------------------------------------------------------------------------------------------------------
display() // display students details
{
    system("cls");
    fstream file;
    char op;
    int total = 1;
    cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\t\t\t\t\tDisplay the Student Details";
	cout<<"\n\n\t\t\t===================================================================";
    file.open("hosteldata.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
    	cout << "\n\n\t | Student No.: " <<"| NAME  "<<" | ROLL NO "<<"| AGE "<<"| DEPARTMENT  "<<"| SESSION "<<"|    MOBILE NO    "<<"| Room Type "<<"| No of Bed "<<"| Facility Type "<<"| Total bill |";
        file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
        while (!file.eof())
            {
         	cout<<"\n\t       "<<total++<<"\t  "<<nam<<"     "<<roll<<"      "<<age<<"       "<<dept<<"   \t     "<<sem<<"\t"<<mn<<"   "<<cont1<<"       "<<cont2<<"        "<<cont3<<"    "<<bill;
			
			file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
		}

        if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
    cout<<"\n\n\t\t\tIF You Want To Return Main Menu ? [Y/N] = ",cin>>op;
	cout<<"Processing";
	for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
	if(op=='N')
	{
		cout<<"\nPress any key to Exit......";
		exit(0);	
	}
}
//delete data----------------------------------------------------------------------------------------------------------------------------------------;
deleted()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    char opo;
    string rollno;
    cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\t\t\t\t\tDelete Student Data";
	cout<<"\n\n\t\t\t===================================================================";
    file.open("hosteldata.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\n\t\t\t\tEnter Roll No. of Student which you want Delete Data: ";
        cin >> rollno;
        file1.open("record.txt", ios::app | ios::out);
        file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
        while (!file.eof())
        {
            if (roll != rollno)
            {
                file1<<" "<<nam<<" "<<roll<<" "<<age<<" "<<dept<<"  "<<sem<<"  "<<mn<<"  "<<cont1<<"  "<<cont2<<"  "<<cont3<<"  "<<bill<<endl;
            }
            else
            {
                found++;
                PlaySound(TEXT("delete.wav"),NULL,SND_SYNC);
                cout << "\n\t\t\t\tData is Successfully delete";
            }
            file>>nam>>roll>>age>>dept>>sem>>mn>>cont1>>cont2>>cont3>>bill;
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("hosteldata.txt");
        rename("record.txt", "hosteldata.txt");
        cout<<"\n\t\t\tIF You Want To Return Back ? [Y/N] = ",cin>>opo;
				cout<<"Processing";
				for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
				if(opo=='N')
		    {
		    	cout<<"\nPress any key to Exit......";
		    	exit(0);	
			}
    }
}
//5------------exit---------------
void stop()
{
	 
	char op;
	system("cls");
	system ("color F");
	cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\t\t\t\t\tExit From The System";
	cout<<"\n\n\t\t\t===================================================================";
	cout<<"\n\n\t\t\tIF You Want To Exit ? [Y/N] = ",cin>>op;
	
	if(op=='Y')
	{
		PlaySound(TEXT("thanks.wav"),NULL,SND_SYNC);
		cout<<"\nPress any key to Exit......";
		exit(0);	
	}
	else
	{
		cout<<"Processing";
		for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
		void menu();	
	}
}
};
int main()
{
    hostel h1;
	h1.welcome();	
  h1.login();
   			p:
   		void menu();
		    system("cls");
		    system ("color 3");
			cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~HOSTEL MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~";	
			cout<<"\n\n\t\t\t_________________________________________________________________";		    
		    cout<<"\n\n\t\t\t\t\t..::WELCOME TO OUR HOSTEL::..";
			cout<<"\n\n\t\t\t_________________________________________________________________";
			cout<<"\n\n\t\t\t1 REGISTRATION";
			cout<<"\n\n\t\t\t2 SEARCH RECORDS";
			cout<<"\n\n\t\t\t3 ROOMS AND FEE STRUCTURE";
			cout<<"\n\n\t\t\t4 RULES AND REGULATION";
			cout<<"\n\n\t\t\t5 LIST OF ALL RECORD";
			cout<<"\n\n\t\t\t6 DELETE STUDENT DATA";
			cout<<"\n\n\t\t\t7 EXIT";
			cout<<"\n\n\t\t\t_________________________________________________________________";
			PlaySound(TEXT("choice.wav"),NULL,SND_SYNC);
			cout<<"\n\n\t\t\t\t\tEnter Your Choice :",cin>>h1.chc;
	cout<<"Processing";
	for(int i=0;i<90;i++)
				{
				cout<<"-";
				Sleep(15);
							}
  	switch(h1.chc)
	{
		case 1:
		{
			h1.reg();
			goto p;
			break;
		}
	    case 2:
		{
			h1.rec();
			goto p;
			break;
		}
		case 3:
		{
			h1.room();
			goto p;
			break;
		}
		case 4:
		{
			h1.rules();
			goto p;
			break;
		}
		case 5:
			{
				h1.display();
				goto p;
				break;
			}
		case 6:
			{
				h1.deleted();
				goto p;
				break;
			}
		case 7:
		{
			h1.stop();
			break;
		}
		
		default:
		{
			cout<<"\n\n\t\t\t\tInvalid Choice";	
			for(int i=0;i<20;i++)
				{
				cout<<".";
				Sleep(30);
							}		
			goto p;
			break;
		}
			
	}

}

	
	
	
	
	
	
	

