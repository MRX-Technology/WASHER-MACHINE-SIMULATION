#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>

using namespace std;

class Machine{
	
	protected:
		int temperature;
		int time;
		int RPM;
		int i; // for loop in the function
	
	public:
	
	Machine() : temperature (50), time (60), RPM (800){};
	
	
	void WindowsFunction(){
		
		
cout<<"*            *      *********        *          *   "<<endl;
Sleep(700);
cout<<"*  *       * *      *       *         *        *    "<<endl;
Sleep(700);
cout<<"*   *     *  *      *       *           *     *     "<<endl;
Sleep(700);
cout<<"*    *   *   *      *       *             * *       "<<endl;
Sleep(700);
cout<<"*     * *    *      *********              *        "<<endl;
Sleep(700);
cout<<"*      *     *      *   *                *    *     "<<endl;
Sleep(700);
cout<<"*            *      *    *              *      *    "<<endl;
Sleep(700);;
cout<<"*            *      *     *            *        *   "<<endl;
Sleep(700);
cout<<"*            *      *      *          *          *  "<<endl;	
Sleep(3000);		
  system("cls");		

}
	
	
	
	void DisplayInfo(){
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"| REVOLUTION "<<RPM<<" [RPM]"<<endl;
	    cout<<"|_____________________________"<<endl;
	}
	
	void DisplayMessage(){
		MessageBox(NULL,"------ REMOVE YOUR LAUNDRY-------","CAUTION",MB_ICONWARNING);
	}
	
	void AudioFunction(){
		for(int i=0;i<3;i++){
			Beep(1100,1000); // first one is freq. of the audio and second one is time
			Sleep(1000); // 1 second delay 
		}
	}	
	
	
	void CaseInfo(){
		system("cls");
			    cout<<endl<<"REVOLUTION "<<RPM;
			    cout<<"GATE CLOSING.....";
			       system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    
				for (i=0;i<10;i++){
			    	cout<<" - ";
				}
		
	}
	
	
	
	void ChooseRpm(){
		
		cout<<"__________________________________________"<<endl;
		cout<<"|                                         |"<<endl;
		cout<<"|  [1] - 500       [2] - 600              |"<<endl;
		cout<<"|  [3] - 700       [4] - 800              |"<<endl;
		cout<<"|  [5] - 900       [6] - 1000             |"<<endl;
		cout<<"|  [7] - 1200      [8]-  1400             |"<<endl;
		cout<<"|_________________________________________|"<<endl<<endl;
		
		cout<<" Choose a revolution of the program : "<<endl;
		cin>>RPM;
		
		
		switch(RPM){
			
			case 1:
				system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
		   case 2:
		   	   system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			case 3:
			   system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			
					
		   case 4:
			    system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;   
			
			case 5:
			    system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			
			case 6:
			    system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			case 7:
			    system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			
			case 8:
			    system("cls");
				cout<<endl<<"REVOLUTION   "<<RPM<<endl;
			    cout<<"GATE CLOSING.....";
			    Sleep(3000);
				system("cls");
			    cout<<endl;
				cout<<endl<<"PROGRAM RUNNING...";
			    cout<<endl;
				for (i=0;i<10;i++){
			    	cout<<" - ";
			    	Sleep(1000);
				}
			    
			    system("cls");
			    cout<<endl<<"PROGRAM FINISHED....";
			    Sleep(2000);
				break;
			
			
			default:
				cout<<"WRONG CHOSEN !!";
			
		}
		
}
	
	
};

class Colors : public Machine{
  int temperature,time;
	
	
 public:
 	Colors():temperature(45),time(45){};
	
	    void DisplayInfoC(){
		
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"|_____________________________"<<endl;
       }
};


class Towels : public Machine{
   
 
 int temperature,time;
	
	public:
 	Towels() :temperature(45),time(45){};
	
	    void DisplayInfoT(){
		
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"|_____________________________"<<endl;
    }
	
};


class Silk : public Machine{
	
	int temperature,time;
	
	public:
 	Silk() :temperature(45),time(45){};
	
	    void DisplayInfoS(){
		
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"|_____________________________"<<endl;
    }
	
	
};

class Jeans : public Machine{

  int temperature,time;
  public:
 	
	 Jeans() :temperature(45),time(45){};
	
	    void DisplayInfoJ(){
		
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"|_____________________________"<<endl;
    }

};



class Cotton : public Machine{
	
 int temperature,time;
	
	public:
 	Cotton() :temperature(45),time(45){};
	
	    void DisplayInfoCC(){
		
		cout<<"-----------------------------"<<endl;
		cout<<"| TEMPERATURE "<<temperature<<endl;
		cout<<"| TIME "<<time<<" [Hour]"<<endl;
		cout<<"|_____________________________"<<endl;
   }
	
};


int main(){
	
	Machine M;
	Colors C;
	Towels T;
	Silk S;
	Jeans J;
	Cotton CT;
system("color 9");
	
	M.WindowsFunction();
	
	int selection;
	
	while(true){
	
system("cls");
cout<<endl;
cout<<" __________________________________________"<<endl;	
cout<<" |          MENU OF WASHER                |"<<endl;
cout<<" |  [1] - SILK                            |"<<endl;
cout<<" |  [2] - COLORS                          |"<<endl;	
cout<<" |  [3] - COTTON                          |"<<endl;	
cout<<" |  [4] - TOWEL                           |"<<endl;
cout<<" |  [5] - JEANS                           |"<<endl;
cout<<" |  [6] - BOILER CLEANING                 |"<<endl;
cout<<" |________________________________________|"<<endl<<endl;

cout<<" Please , Choose a program = ";
cin>>selection;	
		
	
	
	

	
	
	
		switch(selection){
		
		case 1:
		system("cls"); 
		S.DisplayInfoS();
		system("cls"); 
		S.ChooseRpm();
		S.AudioFunction();
		S.DisplayMessage();
		break;
		
		case 2:
		system("cls"); 
		C.DisplayInfoC();
		system("cls"); 
		C.ChooseRpm();
		C.AudioFunction();
		C.DisplayMessage();
		break;
		
		case 3:
		system("cls"); 
		CT.DisplayInfoCC();
		system("cls"); 
		CT.ChooseRpm();
		CT.AudioFunction();
		CT.DisplayMessage();
		break;
		
		case 4:
		system("cls"); 
		T.DisplayInfoT();
		system("cls"); 
		T.ChooseRpm();
		T.AudioFunction();
		T.DisplayMessage();
		break;
		
		case 5:
		system("cls"); 
		J.DisplayInfoJ();
		system("cls"); 
		J.ChooseRpm();
		J.AudioFunction();
		J.DisplayMessage();
		break;	
		
		case 6:
		system("cls"); 
		M.DisplayInfo();
		system("cls"); 
		M.CaseInfo();
		M.AudioFunction();
		system("cls");
		cout<<"PROGRAM FINISHED...";
			
			
		}
	}
   
   
   
   
   }  








































