#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h >
#include<iomanip>
using namespace std;

class Colleges{
	
	//variables
	public:
		char clgName[100];
		int seatOBC[5];
		int seatSC[5];
		int seatGEN[5];
	
		int totalSeats[5];
		char wom;
		char courseName[5][50];
		
		int marksOBC[5];
		int marksGEN[5];
		int marksSC[5];
		//course name
	
		
		//marks required in each category
		
	
		
		}c;
	
		
		
		
		void  getclg()
		{system("CLS");
			ofstream ifl("collegedata.txt",ios::app|ios::binary);
			
			for(int j=0;j<1;j++)
			{
			
		cin>>c.clgName;	
		for(int i=0;i<5;i++)
		{
		cin>>c.seatOBC[i];
		cin>>c.seatSC[i];
		cin>>c.seatGEN[i];
		c.totalSeats[i]=c.seatOBC[i]+c.seatSC[i]+c.seatGEN[i];
		cin>>c.marksOBC[i]>>c.marksGEN[i]>>c.marksSC[i];
		 }
			cin>>c.wom;
		strcpy(c.courseName[0],"BSC CS(Hons)");
		strcpy(c.courseName[1],"BSC Physical Science");
		strcpy(c.courseName[2],"BA Program");
 		strcpy(c.courseName[3],"BCOM (Hons)");
		strcpy(c.courseName[4],"Math (Hons)");
		
		ifl.write((char *)&c,sizeof(c));
 	
		}
		ifl.close();
		}
		
		
		
			
			
			
		void showClg()
			{ 
			 ifstream ofl("collegedata.txt");			
			while(ofl.read((char *)&c, sizeof(c)))
			{cout<<"--------------------------------------------------------------------------------------------------------------------\n";
			cout<<"      Name      "<<"    Courses    "<<"   General Seats"<<"   OBC Seats";
			cout<<"  SC Seats"<<"   General Marks"<<"   OBC Markss"<<"  SC Marks";		
			strcpy(c.courseName[0]," BSC C.S (Hons)");
			cout<<endl<<endl<<setw(11)<<c.clgName;
			if(c.wom=='F'||c.wom=='f')
			cout<<setw(105)<<"FEMALE";
		
			cout<<endl<<endl;
			for(int i=0;i<5;i++)
			{
		
			cout<<setw(30)<<c.courseName[i]<<setw(12)<<c.seatGEN[i]<<setw(12)<<c.seatOBC[i]<<setw(12)<<c.seatSC[i]<<setw(12);
			{
				if(c.marksSC[i]==101&&c.marksOBC[i]==101&&c.marksGEN[i]==101)
			cout<<"-"<<setw(14)<<"-"<<setw(14)<<"-";
			else
			if(c.marksSC[i]==101&&c.marksOBC[i]==101)
			cout<<c.marksGEN[i]<<setw(14)<<"-"<<setw(14)<<"-";
			else
			if(c.marksGEN[i]==101)
			cout<<"-"<<setw(14)<<c.marksOBC[i]<<setw(14)<<c.marksSC[i];
			else
			if(c.marksOBC[i]==101)
			cout<<c.marksGEN[i]<<setw(14)<<"-"<<setw(14)<<c.marksSC[i];
			else
			if(c.marksSC[i]==101)
			cout<<c.marksGEN[i]<<setw(14)<<c.marksOBC[i]<<setw(14)<<"-";
			else
			cout<<c.marksGEN[i]<<setw(14)<<c.marksOBC[i]<<setw(14)<<c.marksSC[i];
																
			}
		cout<<endl;
	}
}ofl.close();

getch();}
		
class user
{
public:
char name[20],username[20],pass1[20],pass2[20],caste[10],college[30],course[30];

float marks1,marks2,marks3,marks4,othermarks,best_4_percentage;

int urcourse,strm;
char s;


user()
{
best_4_percentage=0;
}

	void bestfour()
	{  best_4_percentage=marks1+marks2+marks3+marks4+othermarks;
	float min=marks1;
		if(min>marks2)
		min=marks2;
		if(min>marks3)
		min=marks3;
		if(min>marks4)
		min=marks4;
		if(min>othermarks)
		min=othermarks;
		
		best_4_percentage-=min;
		best_4_percentage/=4;
	}
void getuser()
{system("CLS");
strcpy(college,"NULL");
strcpy(course,"NULL"); 	
cout<<endl<<endl<<"                                        Create Your Account in DU portal"<<endl;
	cout<<endl<<"             Enter your name :- ";
	cin.ignore();
	cin.getline(name,20,'\n');
	gen:
	cout<<endl<<endl<<"             Enter your Gender(M or F) :- ";
	cin>>s;
	if(s!='M'&&s!='f'&&s!='m'&&s!='F')
	goto gen;
	cout<<endl<<endl<<"             Enter Username :- ";
	cin>>username;
	p:
	cout<<endl<<endl<<"             Create Password (6 characters only):-";
	for(int i=0;i<6;i++)
	{pass1[i]=getch();
	cout<<"*";
	}
	pass1[6]='\0';
	getch();
	
	cout<<endl<<endl<<"             Renter your Password :- ";
	for(int i=0;i<6;i++)
	{pass2[i]=getch();
	cout<<"*";
	}
	pass2[6]='\0';
	for(int i=0;i<6;i++)
	if(pass1[i]!=pass2[i])
	{
		cout<<endl<<"              Passwords Does not matched, Type again";
		goto p;
	break;
	}
	cas:
	cout<<endl<<endl<<"             Enter Your Caste (GEN,OBC or SC):-";
	cin>>caste;
	
	if(strcmpi(caste,"GEN")!=0&&strcmpi(caste,"OBC")!=0&&strcmpi(caste,"SC")!=0)
	goto cas;
	  
		cout<<endl<<endl<<endl<<"                       Select your stream\n";
	str:
	cout<<"                           1.Science\n" ;
	cout<<"                           2.Commerce\n";
	cout<<"                           3.Humanities\n";
	cout<<"enter your choice :-"<<endl;
	cin>>strm;
	if(strm<1||strm>3)
	goto str;
	switch(strm){
		
		case 1:
			cout<<"           Enter your marks\n";
			cout<<"             Physics: ";
			cin>>marks1;
			cout<<"\n            Chemistry: ";
			cin>>marks2;		
			cout<<"\n            Maths: ";
			cin>>marks3;
			cout<<"\n            English: ";
			cin>>marks4;
			cout<<"\n            Other Subject: ";
			cin>>othermarks;
			break;
		
		case 2:
			cout<<"           Enter your marks\n";
			cout<<"\n            Maths: ";
			cin>>marks1;
			cout<<"\n            Economics: ";
			cin>>marks2;		
			cout<<"\n            Business Studies: ";
			cin>>marks3;
			cout<<"\n            English: ";
			cin>>marks4;
			cout<<"\n            Other Subject: ";
			cin>>othermarks;
			break;
			
		case 3:
			cout<<"            Enter your marks\n";
			cout<<"               Hindi: ";
			cin>>marks1;
			cout<<"\n             History: ";
			cin>>marks2;		
			cout<<"\n             Political Science: ";
			cin>>marks3;
			cout<<"\n             English: ";
			cin>>marks4;
			cout<<"\n             Other Subject: ";
			cin>>othermarks;

			break;
		}
	cout<<endl<<endl<<"         You have successfully created your account at DU portal, Now You can go for admission"<<endl<<endl;
	getch();
	bestfour();
strcpy(college,"NULL");
strcpy(course,"NULL");
	}
	
	
void putuser();


}u;
	
int registration(user &U)
{
	fstream ofl("collegedata.txt");
	ofl.read((char *)&c,sizeof(c));
	cout<<endl<<endl<<"                  Choose any of the following Course";
	int v;
	h:
		cout<<endl<<endl;
	for(int i=0;i<5;i++)
	cout<<"                         "<<i+1<<"."<<c.courseName[i]<<endl<<endl;
	char coursee[30];
	cin>>v;
	system("CLS");
	if(v==1)
	strcpy(coursee,c.courseName[0]);
	else
	if(v==2)
	strcpy(coursee,c.courseName[1]);
	else
	if(v==3)
	strcpy(coursee,c.courseName[2]);
	else
	if(v==4)
	strcpy(coursee,c.courseName[3]);
	else
	if(v==5)
	strcpy(coursee,c.courseName[4]);
	else
	{cout<<endl<<"                 Wrong Choice, Choose again ";
	goto h;
	}
	
	ofl.close();
	cout<<endl<<endl;
	cout<<"                You Can Take Admission in one of these Colleges only "<<endl<<endl;
	fstream ifl("collegedata.txt");
	int y=0,ki=0;
	char name[10][30];
	while(ifl.read((char *)&c,sizeof(c)))
	{	
	if(U.s=='M'||U.s=='m')
		if(c.wom=='M'||c.wom=='m')
		if(strcmpi(U.caste,"GEN")==0)
		{
			if(U.best_4_percentage>=c.marksGEN[v-1])
					{
					cout<<"          "<<c.clgName<<endl;			
					strcpy(name[ki++],c.clgName);		
			 y=1;}
		}
		if(U.s=='F'||U.s=='f')
		if(strcmpi(U.caste,"GEN")==0)
		{
			if(U.best_4_percentage>=c.marksGEN[v-1])
				{strcpy(name[ki++],c.clgName);	
					y=1;	cout<<"           "<<c.clgName<<endl;			
		}
		}
		if(U.s=='M'||U.s=='m')
		if(c.wom=='M'||c.wom=='m')
		if(strcmpi(U.caste,"OBC")==0)
		{
			if(U.best_4_percentage>=c.marksOBC[v-1])
					{strcpy(name[ki++],c.clgName);	
					cout<<"           "<<c.clgName<<endl;			
			 			y=1;
			 		}
		}
		if(U.s=='F'||U.s=='f')
		if(strcmpi(U.caste,"OBC")==0)
		{strcpy(name[ki++],c.clgName);	
			if(U.best_4_percentage>=c.marksOBC[v-1])
					{strcpy(name[ki++],c.clgName);	
					cout<<"           "<<c.clgName<<endl;			
			 y=1;}
		}
		if(U.s=='M'||U.s=='m')
		if(c.wom=='M'||c.wom=='m')
		if(strcmpi(U.caste,"SC")==0)
		{
			if(U.best_4_percentage>=c.marksSC[v-1])
					{cout<<"           "<<c.clgName<<endl;			
			 			y=1;
			 		strcpy(name[ki++],c.clgName);	}
		}
		if(U.s=='F'||U.s=='f')
		if(strcmpi(U.caste,"SC")==0)
		{
			if(U.best_4_percentage>=c.marksSC[v-1])
					{strcpy(name[ki++],c.clgName);	y=1;
					cout<<"           "<<c.clgName<<endl;			
		}
		}
		}int k=0;
		y:
		if(y==0)
		{cout<<endl<<endl<<"     Your marks are too low to take admission in any college";
		return 1;
	}
		ifl.close();
		n:
		cout<<" enter name of college you want to choose :-"; 
		char clgg[40];
		
		cin>>clgg;
		
		int q=0;
		for(int i=0;i<ki;i++)
		{ q=0;
		if(strcmpi(clgg,name[i])==0)
			{q=1;
		break;}}
		if(q==0)
		{cout<<"             Enter from above list only"<<endl;
		goto n;
		}
		fstream old("collegedata.txt");
		ofstream ne("rename.txt");
		while(old.read((char *)&c,sizeof(c)))
		{	if(strcmpi(clgg,c.clgName)==0)
				{k=1;if(strcmpi(U.caste,"GEN")==0)
					if(c.seatGEN[v-1]>0)
						{c.seatGEN[v-1]--;
						system("CLS");
						strcpy(U.college,clgg);
						strcpy(U.course,coursee);
						cout<<endl<<endl<<endl<<endl<<"                 Congrats, Admission Successfully done in "<<U.college<<" College";
						
						}
						else
							{
							cout<<"All seats are booked for this college"<<endl<<endl;
							goto n;
						}
						if(strcmpi(U.caste,"OBC")==0)
						if(c.seatOBC[v-1]>0)
						{c.seatOBC[v-1]--;
						system("CLS");
						strcpy(U.college,clgg);
						strcpy(U.course,coursee);
						cout<<endl<<endl<<endl<<endl<<"                 Congrats, Admission Successfully done in "<<U.college<<" College";
						}else
							{
							cout<<"All seats are booked for this college"<<endl<<endl;
							goto n;
						}
						
						if(strcmpi(U.caste,"SC")==0)
						if(c.seatSC[v-1]>0)
						{c.seatSC[v-1]--;
						system("CLS");
						strcpy(U.college,clgg);
						strcpy(U.course,coursee);
						cout<<endl<<endl<<endl<<endl<<"                 Congrats, Admission Successfully done in "<<U.college<<" College";
						}
						else
							{
							cout<<"All seats are booked for this college"<<endl<<endl;
							goto n;
						}
				}
				
			ne.write((char *)&c,sizeof(c));
		}
		if(k==0)
		{cout<<endl<<endl<<"          Please Type college name correctly   "<<endl<<endl;
			getch();
			goto y;
			
	}
		ne.close();
		old.close();
		remove("collegedata.txt");
		rename("rename.txt","collegedata.txt");

}

void user :: putuser()
	{
		system("CLS");
		
		cout<<endl<<endl<<"********************************* Your Account Details**************************"<<endl;
	cout<<endl<<"      Your Name :- "<<setw(25);
	cout<<name;
	
	cout<<endl<<endl<<"      Gender(M or F) :- "<<setw(16);
	cout<<s;
	cout<<endl<<endl<<"      Username :- "<<setw(26);
	cout<<username;
	
	cout<<endl<<endl<<"      Caste :-"<<setw(27);
	cout<<caste;
	
	
	switch(strm){
		
		case 1:
			cout<<endl<<endl<<"                   Your Marks\n";
			cout<<"   Physics: "<<setw(22);
			cout<<marks1;
			cout<<"\n   Chemistry: "<<setw(20);
			cout<<marks2;		
			cout<<"\n   Maths: "<<setw(24);
			cout<<marks3;
			cout<<"\n   English: "<<setw(22);
			cout<<marks4;
			cout<<"\n   Other Subject: "<<setw(16);
			cout<<othermarks;
			break;
		
		case 2:
			cout<<endl<<endl<<"                     Your Marks\n";
			cout<<"\n   Maths: "<<setw(24);
			cout<<marks1;
			cout<<"\n   Economics: "<<setw(20);
			cout<<marks2;		
			cout<<"\n   Business Studies: "<<setw(13);
			cout<<marks3;
			cout<<"\n   English: "<<setw(22);
			cout<<marks4;
			cout<<"\n   Other Subject: "<<setw(16);
			cout<<othermarks;
			break;
			
		case 3:
			cout<<endl<<endl<<"                     Your Marks\n";
			cout<<"   Hindi: "<<setw(24);
			cout<<marks1;
			cout<<"\n   History: "<<setw(22);
			cout<<marks2;		
			cout<<"\n   Political Science: "<<setw(12);
			cout<<marks3;
			cout<<"\n   English: "<<setw(22);
			cout<<marks4;
			cout<<"\n   Other Subject: "<<setw(16);
			cout<<othermarks;

			break;
		}bestfour();
				if(s=='M'||s=='m')
			cout<<endl<<endl<<"          Your best 4 percentage is :-          "<<best_4_percentage;
			else
			if(s=='F'||s=='f')
			{best_4_percentage+=2;
			if(best_4_percentage>100)
			best_4_percentage=100;
			cout<<endl<<endl<<"          Your best 4 percentage is :-             "<<best_4_percentage<<"         extra 2 % for women";
	
		} cout<<endl<<endl<<"     College name :=        "<<college;
		  cout<<endl<<"     Course Name :=       "<<course;	
	}
	
	cancel()
	{int f,v;
		cout<<endl<<endl<<" PRESS 1 TO CANCEL YOUR SEAT, 0 for Menu :- ";
		cin>>f;
		if(f==1)
		{
			ifstream q("collegedata.txt");
			ofstream r("temp.txt");
			while(q.read((char *)&c,sizeof(c)))
			{
					if(strcmpi(u.college,c.clgName)==0)
					{strcpy(u.college,"NULL");
					
					for(int i=0;i<5;i++)
					{	if(strcmpi(u.course,c.courseName[i])==0)
							{
								if(strcmpi(u.caste,"GEN")==0)
								{c.seatGEN[i]++;
								system("CLS");
								cout<<endl<<endl<<" Your Seat is successfully cancelled";
								strcpy(u.course,"NULL");
								}
								if(strcmpi(u.caste,"OBC")==0)
								{c.seatOBC[i]++;
								system("CLS");
								cout<<endl<<endl<<" Your Seat is successfully cancelled";
								strcpy(u.course,"NULL");
								}
								if(strcmpi(u.caste,"SC")==0)
								{c.seatSC[i]++;
								system("CLS");
								cout<<endl<<endl<<" Your Seat is successfully cancelled";
								strcpy(u.course,"NULL");
								}
							break;}
						
						
					}
				}
				r.write((char *)&c,sizeof(c));
			}
				
					q.close();
					r.close();
					
					remove("collegedata.txt");
					rename("temp.txt","collegedata.txt");
		
		}
		
		
	}
int main()
{
	while(1)
	{int n;
	system("CLS");
		cout<<endl<<endl<<" *****************************DU ADMISSION PORTAL***************************";
		cout<<endl<<"                   1. Create Acoount";
		cout<<endl<<"                   2. Take Admission";
		cout<<endl<<"                   3. Show College"<<endl;
		cout<<"                   4. Cancel Your Admission"<<endl;
		cout<<"                   5. Show User Details"<<endl;
		cout<<"                   6. Exit"<<endl;
		cout<<" enter your choice :-";
		cin>>n;
    
	if(n==1)
		{
		u.getuser();
		fstream ifl("user.txt",ios::app);
		ifl.write((char *)&u,sizeof(u));
		ifl.close();
		}

	if(n==2)
		{	
		re:
			int flag=0;
			char usr[20],pass[20],ch;
			system("CLS");
			cout<<endl<<endl<<"                 Enter Login Details";
			cout<<endl<<endl<<"                          Username :- ";
			cin>>usr;
			cout<<endl<<"                          Enter Password :- ";
			for(int i=0;i<6;i++)
			{ch=getch();
			pass[i]=ch;
			cout<<'*';
		}pass[6]='\0';
			
			
				ofstream p("user1.txt");
		fstream ifl("user.txt");
		while(ifl.read((char *)&u,sizeof(u)))
		{if(strcmpi(u.username,usr)==0&&strcmpi(u.pass1,pass)==0)
				{if(strcmpi(u.college,"NULL")==0)
				{u.putuser();
				registration(u);
				}
				else
				{cout<<endl<<"          You need to Cancel previous admission before aplly for new";
				}
				flag=1;
				getch();
					
				}
				p.write((char *)&u,sizeof(u));
				
		}
		if(flag==0)
		{cout<<endl<<" Wong username or password, try again";
		getch();
		ifl.close();
		p.close();
		remove("user.txt");
		rename("user1.txt","user.txt");
		goto re;
		}else
		{
		ifl.close();
		p.close();
		remove("user.txt");
		rename("user1.txt","user.txt");
		}
		}
		
		
		if(n==3)
		{system("CLS");
//	getclg();
		showClg();
		getch();}
//	registration();
	

if(n==4)
{
		he:
			int flag=0;
			char usr[20],pass[20],ch;
			system("CLS");
			cout<<endl<<endl<<"                 Enter Login Details";
			cout<<endl<<endl<<"                          Username :- ";
			cin>>usr;
			cout<<endl<<"                          Enter Password :- ";
			for(int i=0;i<6;i++)
			{ch=getch();
			pass[i]=ch;
			cout<<'*';
		}pass[6]='\0';
				ofstream p("user1.txt");
		fstream ifl("user.txt");
		while(ifl.read((char *)&u,sizeof(u)))
		{if(strcmpi(u.username,usr)==0&&strcmpi(u.pass1,pass)==0)
				{if(strcmpi(u.college,"NULL")!=0)
				{u.putuser();
				cancel();
				}
				else
				{cout<<endl<<"          You need to take admission in any college";
				}flag=1;
				getch();
					
				}
				p.write((char *)&u,sizeof(u));
				
		}
		if(flag==0)
		{cout<<endl<<" Wong username or password, try again";
		getch();
		ifl.close();
		p.close();
		remove("user.txt");
		rename("user1.txt","user.txt");
		goto he;
		}else
		{
		ifl.close();
		p.close();
		remove("user.txt");
		rename("user1.txt","user.txt");
		}
	
	
	
}
if(n==5)
{
	
		te:
			int flag=0;
			char usr[20],pass[20],ch;
			system("CLS");
			cout<<endl<<"                         Enter Login Details";
			cout<<endl<<"                            Username :-";
			cin>>usr;
			cout<<endl<<"                            Enter Password :- ";
			{for(int i=0;i<6;i++)
			{ch=getch();
			pass[i]=ch;
			cout<<"*";
			}pass[6]='\0';
			}
		fstream ifl("user.txt");
		while(ifl.read((char *)&u,sizeof(u)))
		{if(strcmpi(u.username,usr)==0&&strcmpi(u.pass1,pass)==0)
				{u.putuser();
				flag=1;
				getch();
					
				}
				
		}
		if(flag==0)
		{cout<<endl<<endl<<" Wong username or password, try again"<<endl;
		getch();
		ifl.close();
		goto te;
		}else
		{
		ifl.close();
		}
	
}
if(n==6)
{
	exit(1);
}
}
	return 1;
} 
