 #include<iostream>
 #include<conio.h>
 #include<math.h>
 #include<string.h>
 #include<fstream>
 #include"MYhoroscope.h"
 using namespace std;
 int main();
 
 int flag=0;
 int year, month,date;
 char name[20];
 char gender;
 int dd,mm,yy;
	        
	        int get_data()
	         {
	         	system("cls");
	           cout<<"   ENTER YOUR DATE OF BIRTH :"<<endl;
			   cout<<"   YEAR :";
	    	   cin>>year;
	   		   cout<<"   MONTH :";
	           cin>>month;
	           cout<<"   DATE:";
	           cin>>date;
			 
			    if((month>12)|| (month==2 && date>29) || (month== 1,3,5,7,8,10,12  && date>31) || (month==2,4,6,9,11 && date>30)|| (2020-year>100) || year>2020 )
                   {
                 	flag=1;
        	        cout<<"\n YOU HAVE ENTERED INCORRECT DETAILS..!!! \n  press any key for continue....";
     	            getch();
	               }
	            else{
				   flag=0;
				   cout<<"\n PRESS ANY KEY TO CONTINUE.....";
				   getch();
				  }
			   return flag;
			 }
			 			   
			 int Logind()
	        {
	          cout<<"\n  REGISTRY DETAILS......";
              cout<<"\n  NAME:";
	          fflush(stdin);
	          gets(name);
              fflush(stdin);
	          cout<<"  GENDER: ";
	          gender=getchar();
	          if(gender=='F'|| gender=='f' || gender=='M' ||gender=='m') 
	           	flag=0;
			 
			  else{
			   	flag=1;
			   	cout<<endl<<"          YOU ENTERED INCORRECT GENDER.. PLEASE ENTER m/f OR M/F";
			   	cout<<endl<<"          PRESS ANY KEY FOR AGAIN REGISTRATION"<<endl;
			   }
	          return flag;
			}

      youhoro()
 	        {
	 
 	      	if( (month==3 && date>=21) || (month==4 && date<=19) )	
		     aries(date,year);
    
	    	if( (month==4 && date>=20) || (month==5 && date<=20) )
            taurus(date,year);
       
	    	if( (month==5 && date>=21) || (month==6 && date<=20) )
            gemini(date,year);
       
	    	if( (month==6&&date>=21) || (month==7&&date<=22))
            cancer(date,year);
       
	    	if( (month==7 && date>=23) || ( month==8 && date<=22) )
            leo(date,year);
       
	    	if( (month==8&&date>=23) || ( month==9 && date<=22) )
            virgo(date,year);
       
	    	if(( month==9 && date>=23) || (month==10&& date<=22))
            libra( date, year);
       
	    	if( ( month==10 && date>=23) || ( month==11 && date<=21))
            scorpio(date,year);
       
	    	if( (month==11 && date>=22) || ( month==12 && date<=21))
            saggitarius(date,year);
       
	    	if( (month==12 && date>=22) || (month==1 && date<=19))
            capricorn( date,year);
       
	    	if(( month==1 && date>=20) || ( month==2&& date<=18))
            aquarius( date,year);
       
	    	if( (month==2&& date>=19) || ( month==3&& date<=20))
            pisces( date,year);
        
           }

	
    int main()
     {
		
		do{  
		   int f = get_data();
		  } while(flag!=0);
		
		system("cls");
	
		do{
		
	     int f=Logind();
	     } while(flag!=0);
		
		system("cls");
		
	    youhoro();
		
		return 0;

      }

