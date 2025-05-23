



































#include<iostream>
#include<iomanip>
#define PI 3.14 //Symbolic constant 
 using namespace std;
 int main(){
 const int b=4;
 cout<<A;
 cout<<endl<<b;



 int r;
 cout<<"Enter the radius ";
 cin>>r;
 cout<<2*PI*r<<endl;


 int x=10
 x => Lvalue 
 10 =>Rvalue 


Assignment opertaer  =>  '='  

COMPOUND Assignment OPERATOR 

X=A=Y=30;
 int a=b=c=2;

Arithimatic assignment  operator 

A*=10;
 A+=10
 A=A+10

Increment 

int x=0,
x=a++;//postfix
x=0, a=1;
x=++a; //Preffix
x=1; a=1;

 Decrement 

int x=0; 
x=a--; //Postfix
x=0, a=-1;
x=--a; //Prefix 

int a,b,x,y;
a=b=x=y=0; 
 0=1 
b=a++; //B=0, a=1 //0=1;
x=++y;
cout<<a<<"  "<<b<<"     "<<"    "<<x<<"     "<<y;



 a=10 , b=20 , c=15 , d=8 , e=40
 r=a*b/(-c*31%13)*d;


 int a=5,b=2;
 float c=(float)a/b;//Explict type casting 

 cout<<c;

Size of ka ya kam ha Btyes batanan ka lia use hota ha 
cout<<sizeof(long double);

Masroor Ali

/*
Hi
how are you
Dude !

*/


cout<<"\a Masroor Ali"<<endl;

2 setprecision(2) ::> 3.22
cout<<setw(10)<<setfill('*')<<123;

t<<setw(10)<<123<<setw(4)<<setfill('&')<<1;
cout << left << setw(10) << "Left" << "End" << endl;


cout << boolalpha << true << " " << false << endl;
cout << noboolalpha << true << " " << false << endl;


float a=4.54854;
cout<<setprecision(2)<<a;

 float pi=3.14;
 cout<<pi<<endl;
 cout<<showpoint<<pi;


 float a = 100.0;
 float b = 50.5;

 cout << "Without showpoint:\n";
 cout << a << " " << b << endl;

 cout << "\nWith showpoint:\n";
 cout << showpoint << a << " " << b << endl;



 cout<<"Masroor"<<endl<<"Ali";

 string name ;
 string city;
 int age;
 cout<<"Enter the namme ";
 cin>>name;
 cout<<"Enter your city ";
 cin>>city;
 cout<<"Enter your age ";
 cin>>age;
 cout<<"Your name is "<<name<<endl;
 cout<<"Your city  is "<<city<<endl;
 cout<<"Your age is "<<age<<endl;


 char std[]="Opp using c++";
 cout<<setw(20)<<setfill('*')<<std<<endl;
 cout<<setw(20)<<setfill('@')<<std<<endl;
 cout<<setw(20)<<setfill('&')<<std<<endl;

 float  total,obt,per;
 cout<<"Enter the total marks marks ";
 cin>>total; 
 cout<<"Enter the obtained marks ";
 cin>>obt;
 per=obt*100/total;
 cout<<"Percantage is "<<per<<endl;


 float invest;
 float a,per,intam,yr;
 cout<<"Enter the amount ";
 cin>>invest;
 cout<<"Enter the interest percantage ";
  cin>>a;
 cout<<"Enter the year ";
 cin>>yr;
 per=invest*a/100;
 intam=per*yr;
 cout<<intam;


 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int num=ch;
 cout<<num;




 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int n=ch;
 cout<<n;

 char ch;
 cout<<"Enter the charachter";
 cin>>ch;
 cout<<int(ch);


 int n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<char(n);


 int a,b;
 cout<<"Enter the number ";
 cin>>a;
 cout<<"Enter the quetient ";
 cin>>b;
 int t=a%b;
 int l=a/b;
 cout<<"Reminder "<<t<<endl;
 cout<<"Queitent "<<l;


  int a,b;
  cout<<"Enter the two number ";
  cin>>a>>b;
 int temp=a;
 a=b;
 b=temp;
 cout<<"A = "<<a<<endl<<"B ="<<b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<a<<endl<<b;


 int sec;
 int h,m;
 cout<<"Enter the secounds ";
 cin>>sec;
 h=sec/3600;
 sec=sec%3600;
 m=sec/60;
 int s=sec%60;
 cout<<"Hours is "<<h<<endl<<"Minute is "<<m<<endl<<"Secounds is "<<s<<endl;



 int n,a,b,c;
 cout<<"Enter the three number ";
 cin>>n;
 a=n/100;
 n=n%100;
 b=n/10;
 n=n%10;

 cout<<"Reverse of the number is "<<n<<b<<a;

  :: >  OR (condition) 

 int n,sum=0,digit;
 cout<<"Enter the number ";
 cin>>n;
 while(n!=0){
     digit=n%10;
     sum=sum*10+digit;
     n=n/10;
 }
 cout<<sum;


 int even,odd,r;
 cout<<"Enter the evven number ";
 cin>>even;
 cout<<"Enter the odd number ";
 cin>>odd;
 r=1000-((even*5)+(odd*3));
 cout<<r;



 int n=10;
 cout<<n<<endl;
 n+=n;
 cout<<n<<endl;

 cout<<--n;


 int hours;
 cout<<"Enter the hours ";
 cin>>hours;
 int week=hours/168;
 hours=hours%168;
 int day=hours/24;
 hours=hours%24;

 cout<<"Weeks "<<week<<endl<<"Days "<<day<<endl<<"Hours "<<hours;


 long double  pet,ele,gas;
 cout<<"Enter the current price of petrol ";
 cin>>pet;
 cout<<"Enter the current price of Electricity ";
 cin>>ele;
 cout<<"Enter the current price of Gas ";
 cin>>gas;
 ele=ele+ele*0.10;
 pet=pet+pet*0.10;
 gas=gas+gas*0.10;
 cout<<"Current price of Electricity "<<ele<<endl;
 cout<<"Current price of petrol "<<pet<<endl;
 cout<<"Current price of gas "<<gas<<endl;




 float age;
 cout<<"Enter the age in years ";
 cin>>age;
 float  day=age*365;
 float month= age*12;
 cout<<day<<endl<<month;

 int page,read,day,r,ram;
 cout<<"Enter the total pages ";
 cin>>page;
 cout<<"Enter the number of page you read in one day ";
 cin>>read;
 cout<<"Enter the number of days ";
 cin>>day;
 r=read*day;
 ram=page-r;
 cout<<"The pages a person read = "<<r<<endl;
 cout<<"The remaning pages = "<<ram;





 1 liter cha 5.3 m   user liter *5.3   50 1000  


 int n,a,b,c;
 cout<<"Enter the number ";
 cin>>n;
    
    cout<<n<<endl;

 a=n/100;
 b=(n/10)%10;
 c=n%10;
 cout<<a<<endl<<b<<endl<<c;




 string n;
 cout<<"Enter the  digits ::> ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 string n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 int a,b,c;
 cout<<"ENTER The number ";
 cin>>a>>b>>c;
 int temp=a;
 a=b;
 b=c;
 c=a;
 c=temp;
 cout<<a<<endl<<b<<endl<<c;



 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 ch++;
 cout<<ch<<endl;
 ch++;
 cout<<ch<<endl;




 return 0;
 }

⬇#include<iostream>
#include<iomanip>
#define PI 3.14 //Symbolic constant 
 using namespace std;
 int main(){
 const int b=4;
 cout<<A;
 cout<<endl<<b;



 int r;
 cout<<"Enter the radius ";
 cin>>r;
 cout<<2*PI*r<<endl;


 int x=10
 x => Lvalue 
 10 =>Rvalue 


Assignment opertaer  =>  '='  

COMPOUND Assignment OPERATOR 

X=A=Y=30;
 int a=b=c=2;

Arithimatic assignment  operator 

A*=10;
 A+=10
 A=A+10

Increment 

int x=0,
x=a++;//postfix
x=0, a=1;
x=++a; //Preffix
x=1; a=1;

 Decrement 

int x=0; 
x=a--; //Postfix
x=0, a=-1;
x=--a; //Prefix 

int a,b,x,y;
a=b=x=y=0; 
 0=1 
b=a++; //B=0, a=1 //0=1;
x=++y;
cout<<a<<"  "<<b<<"     "<<"    "<<x<<"     "<<y;



 a=10 , b=20 , c=15 , d=8 , e=40
 r=a*b/(-c*31%13)*d;


 int a=5,b=2;
 float c=(float)a/b;//Explict type casting 

 cout<<c;

Size of ka ya kam ha Btyes batanan ka lia use hota ha 
cout<<sizeof(long double);

Masroor Ali

/*
Hi
how are you
Dude !

*/


cout<<"\a Masroor Ali"<<endl;

2 setprecision(2) ::> 3.22
cout<<setw(10)<<setfill('*')<<123;

t<<setw(10)<<123<<setw(4)<<setfill('&')<<1;
cout << left << setw(10) << "Left" << "End" << endl;


cout << boolalpha << true << " " << false << endl;
cout << noboolalpha << true << " " << false << endl;


float a=4.54854;
cout<<setprecision(2)<<a;

 float pi=3.14;
 cout<<pi<<endl;
 cout<<showpoint<<pi;


 float a = 100.0;
 float b = 50.5;

 cout << "Without showpoint:\n";
 cout << a << " " << b << endl;

 cout << "\nWith showpoint:\n";
 cout << showpoint << a << " " << b << endl;



 cout<<"Masroor"<<endl<<"Ali";

 string name ;
 string city;
 int age;
 cout<<"Enter the namme ";
 cin>>name;
 cout<<"Enter your city ";
 cin>>city;
 cout<<"Enter your age ";
 cin>>age;
 cout<<"Your name is "<<name<<endl;
 cout<<"Your city  is "<<city<<endl;
 cout<<"Your age is "<<age<<endl;


 char std[]="Opp using c++";
 cout<<setw(20)<<setfill('*')<<std<<endl;
 cout<<setw(20)<<setfill('@')<<std<<endl;
 cout<<setw(20)<<setfill('&')<<std<<endl;

 float  total,obt,per;
 cout<<"Enter the total marks marks ";
 cin>>total; 
 cout<<"Enter the obtained marks ";
 cin>>obt;
 per=obt*100/total;
 cout<<"Percantage is "<<per<<endl;


 float invest;
 float a,per,intam,yr;
 cout<<"Enter the amount ";
 cin>>invest;
 cout<<"Enter the interest percantage ";
  cin>>a;
 cout<<"Enter the year ";
 cin>>yr;
 per=invest*a/100;
 intam=per*yr;
 cout<<intam;


 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int num=ch;
 cout<<num;




 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int n=ch;
 cout<<n;

 char ch;
 cout<<"Enter the charachter";
 cin>>ch;
 cout<<int(ch);


 int n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<char(n);


 int a,b;
 cout<<"Enter the number ";
 cin>>a;
 cout<<"Enter the quetient ";
 cin>>b;
 int t=a%b;
 int l=a/b;
 cout<<"Reminder "<<t<<endl;
 cout<<"Queitent "<<l;


  int a,b;
  cout<<"Enter the two number ";
  cin>>a>>b;
 int temp=a;
 a=b;
 b=temp;
 cout<<"A = "<<a<<endl<<"B ="<<b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<a<<endl<<b;


 int sec;
 int h,m;
 cout<<"Enter the secounds ";
 cin>>sec;
 h=sec/3600;
 sec=sec%3600;
 m=sec/60;
 int s=sec%60;
 cout<<"Hours is "<<h<<endl<<"Minute is "<<m<<endl<<"Secounds is "<<s<<endl;



 int n,a,b,c;
 cout<<"Enter the three number ";
 cin>>n;
 a=n/100;
 n=n%100;
 b=n/10;
 n=n%10;

 cout<<"Reverse of the number is "<<n<<b<<a;

  :: >  OR (condition) 

 int n,sum=0,digit;
 cout<<"Enter the number ";
 cin>>n;
 while(n!=0){
     digit=n%10;
     sum=sum*10+digit;
     n=n/10;
 }
 cout<<sum;


 int even,odd,r;
 cout<<"Enter the evven number ";
 cin>>even;
 cout<<"Enter the odd number ";
 cin>>odd;
 r=1000-((even*5)+(odd*3));
 cout<<r;



 int n=10;
 cout<<n<<endl;
 n+=n;
 cout<<n<<endl;

 cout<<--n;


 int hours;
 cout<<"Enter the hours ";
 cin>>hours;
 int week=hours/168;
 hours=hours%168;
 int day=hours/24;
 hours=hours%24;

 cout<<"Weeks "<<week<<endl<<"Days "<<day<<endl<<"Hours "<<hours;


 long double  pet,ele,gas;
 cout<<"Enter the current price of petrol ";
 cin>>pet;
 cout<<"Enter the current price of Electricity ";
 cin>>ele;
 cout<<"Enter the current price of Gas ";
 cin>>gas;
 ele=ele+ele*0.10;
 pet=pet+pet*0.10;
 gas=gas+gas*0.10;
 cout<<"Current price of Electricity "<<ele<<endl;
 cout<<"Current price of petrol "<<pet<<endl;
 cout<<"Current price of gas "<<gas<<endl;




 float age;
 cout<<"Enter the age in years ";
 cin>>age;
 float  day=age*365;
 float month= age*12;
 cout<<day<<endl<<month;

 int page,read,day,r,ram;
 cout<<"Enter the total pages ";
 cin>>page;
 cout<<"Enter the number of page you read in one day ";
 cin>>read;
 cout<<"Enter the number of days ";
 cin>>day;
 r=read*day;
 ram=page-r;
 cout<<"The pages a person read = "<<r<<endl;
 cout<<"The remaning pages = "<<ram;





 1 liter cha 5.3 m   user liter *5.3   50 1000  


 int n,a,b,c;
 cout<<"Enter the number ";
 cin>>n;
    
    cout<<n<<endl;

 a=n/100;
 b=(n/10)%10;
 c=n%10;
 cout<<a<<endl<<b<<endl<<c;




 string n;
 cout<<"Enter the  digits ::> ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 string n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 int a,b,c;
 cout<<"ENTER The number ";
 cin>>a>>b>>c;
 int temp=a;
 a=b;
 b=c;
 c=a;
 c=temp;
 cout<<a<<endl<<b<<endl<<c;



 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 ch++;
 cout<<ch<<endl;
 ch++;
 cout<<ch<<endl;




 return 0;
 }

⬇#include<iostream>
#include<iomanip>
#define PI 3.14 //Symbolic constant 
 using namespace std;
 int main(){
 const int b=4;
 cout<<A;
 cout<<endl<<b;



 int r;
 cout<<"Enter the radius ";
 cin>>r;
 cout<<2*PI*r<<endl;


 int x=10
 x => Lvalue 
 10 =>Rvalue 


Assignment opertaer  =>  '='  

COMPOUND Assignment OPERATOR 

X=A=Y=30;
 int a=b=c=2;

Arithimatic assignment  operator 

A*=10;
 A+=10
 A=A+10

Increment 

int x=0,
x=a++;//postfix
x=0, a=1;
x=++a; //Preffix
x=1; a=1;

 Decrement 

int x=0; 
x=a--; //Postfix
x=0, a=-1;
x=--a; //Prefix 

int a,b,x,y;
a=b=x=y=0; 
 0=1 
b=a++; //B=0, a=1 //0=1;
x=++y;
cout<<a<<"  "<<b<<"     "<<"    "<<x<<"     "<<y;



 a=10 , b=20 , c=15 , d=8 , e=40
 r=a*b/(-c*31%13)*d;


 int a=5,b=2;
 float c=(float)a/b;//Explict type casting 

 cout<<c;

Size of ka ya kam ha Btyes batanan ka lia use hota ha 
cout<<sizeof(long double);

Masroor Ali

/*
Hi
how are you
Dude !

*/


cout<<"\a Masroor Ali"<<endl;

2 setprecision(2) ::> 3.22
cout<<setw(10)<<setfill('*')<<123;

t<<setw(10)<<123<<setw(4)<<setfill('&')<<1;
cout << left << setw(10) << "Left" << "End" << endl;


cout << boolalpha << true << " " << false << endl;
cout << noboolalpha << true << " " << false << endl;


float a=4.54854;
cout<<setprecision(2)<<a;

 float pi=3.14;
 cout<<pi<<endl;
 cout<<showpoint<<pi;


 float a = 100.0;
 float b = 50.5;

 cout << "Without showpoint:\n";
 cout << a << " " << b << endl;

 cout << "\nWith showpoint:\n";
 cout << showpoint << a << " " << b << endl;



 cout<<"Masroor"<<endl<<"Ali";

 string name ;
 string city;
 int age;
 cout<<"Enter the namme ";
 cin>>name;
 cout<<"Enter your city ";
 cin>>city;
 cout<<"Enter your age ";
 cin>>age;
 cout<<"Your name is "<<name<<endl;
 cout<<"Your city  is "<<city<<endl;
 cout<<"Your age is "<<age<<endl;


 char std[]="Opp using c++";
 cout<<setw(20)<<setfill('*')<<std<<endl;
 cout<<setw(20)<<setfill('@')<<std<<endl;
 cout<<setw(20)<<setfill('&')<<std<<endl;

 float  total,obt,per;
 cout<<"Enter the total marks marks ";
 cin>>total; 
 cout<<"Enter the obtained marks ";
 cin>>obt;
 per=obt*100/total;
 cout<<"Percantage is "<<per<<endl;


 float invest;
 float a,per,intam,yr;
 cout<<"Enter the amount ";
 cin>>invest;
 cout<<"Enter the interest percantage ";
  cin>>a;
 cout<<"Enter the year ";
 cin>>yr;
 per=invest*a/100;
 intam=per*yr;
 cout<<intam;


 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int num=ch;
 cout<<num;




 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 int n=ch;
 cout<<n;

 char ch;
 cout<<"Enter the charachter";
 cin>>ch;
 cout<<int(ch);


 int n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<char(n);


 int a,b;
 cout<<"Enter the number ";
 cin>>a;
 cout<<"Enter the quetient ";
 cin>>b;
 int t=a%b;
 int l=a/b;
 cout<<"Reminder "<<t<<endl;
 cout<<"Queitent "<<l;


  int a,b;
  cout<<"Enter the two number ";
  cin>>a>>b;
 int temp=a;
 a=b;
 b=temp;
 cout<<"A = "<<a<<endl<<"B ="<<b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<a<<endl<<b;


 int sec;
 int h,m;
 cout<<"Enter the secounds ";
 cin>>sec;
 h=sec/3600;
 sec=sec%3600;
 m=sec/60;
 int s=sec%60;
 cout<<"Hours is "<<h<<endl<<"Minute is "<<m<<endl<<"Secounds is "<<s<<endl;



 int n,a,b,c;
 cout<<"Enter the three number ";
 cin>>n;
 a=n/100;
 n=n%100;
 b=n/10;
 n=n%10;

 cout<<"Reverse of the number is "<<n<<b<<a;

  :: >  OR (condition) 

 int n,sum=0,digit;
 cout<<"Enter the number ";
 cin>>n;
 while(n!=0){
     digit=n%10;
     sum=sum*10+digit;
     n=n/10;
 }
 cout<<sum;


 int even,odd,r;
 cout<<"Enter the evven number ";
 cin>>even;
 cout<<"Enter the odd number ";
 cin>>odd;
 r=1000-((even*5)+(odd*3));
 cout<<r;



 int n=10;
 cout<<n<<endl;
 n+=n;
 cout<<n<<endl;

 cout<<--n;


 int hours;
 cout<<"Enter the hours ";
 cin>>hours;
 int week=hours/168;
 hours=hours%168;
 int day=hours/24;
 hours=hours%24;

 cout<<"Weeks "<<week<<endl<<"Days "<<day<<endl<<"Hours "<<hours;


 long double  pet,ele,gas;
 cout<<"Enter the current price of petrol ";
 cin>>pet;
 cout<<"Enter the current price of Electricity ";
 cin>>ele;
 cout<<"Enter the current price of Gas ";
 cin>>gas;
 ele=ele+ele*0.10;
 pet=pet+pet*0.10;
 gas=gas+gas*0.10;
 cout<<"Current price of Electricity "<<ele<<endl;
 cout<<"Current price of petrol "<<pet<<endl;
 cout<<"Current price of gas "<<gas<<endl;




 float age;
 cout<<"Enter the age in years ";
 cin>>age;
 float  day=age*365;
 float month= age*12;
 cout<<day<<endl<<month;

 int page,read,day,r,ram;
 cout<<"Enter the total pages ";
 cin>>page;
 cout<<"Enter the number of page you read in one day ";
 cin>>read;
 cout<<"Enter the number of days ";
 cin>>day;
 r=read*day;
 ram=page-r;
 cout<<"The pages a person read = "<<r<<endl;
 cout<<"The remaning pages = "<<ram;





 1 liter cha 5.3 m   user liter *5.3   50 1000  


 int n,a,b,c;
 cout<<"Enter the number ";
 cin>>n;
    
    cout<<n<<endl;

 a=n/100;
 b=(n/10)%10;
 c=n%10;
 cout<<a<<endl<<b<<endl<<c;




 string n;
 cout<<"Enter the  digits ::> ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 string n;
 cout<<"Enter the number ";
 cin>>n;
 cout<<n[0]<<endl;
 cout<<n[1]<<endl;
 cout<<n[2]<<endl;
 cout<<n[3]<<endl;
 cout<<n[4]<<endl;

 int a,b,c;
 cout<<"ENTER The number ";
 cin>>a>>b>>c;
 int temp=a;
 a=b;
 b=c;
 c=a;
 c=temp;
 cout<<a<<endl<<b<<endl<<c;



 char ch;
 cout<<"Enter the character ";
 cin>>ch;
 ch++;
 cout<<ch<<endl;
 ch++;
 cout<<ch<<endl;




 return 0;
 }

⬇
