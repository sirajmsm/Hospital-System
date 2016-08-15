// Medicare Doctors Information System

// including libraries
#include<iostream>// to able to use input and output.
#include<string>// to able to use string value.
#include<iomanip>// headers provides for the parameter manuplators, and specially for setw.
#include<windows.h>//it is contains declarations for all of the functions in the Windows Application programming interface, such as color and other
#include<conio.h>//read a character directly from the console without buffer, such as getch.
#define max 20 // defining the max constant value
using namespace std;

// declaring all the types of function prototype
void welcome(); 
void login_role_choose(); 
void admin_login();
void user_login();
void error();
void granded();
void denied();
void admin_menu();
void user_menu(); 
double salary_Cul(double hrs, double sal);// parameter passing
void calsal();
void build_doctors_table();
void view_list();
void usr_view_list();
void insert_new_entry();
void delete_entry();
void update_entry();
void search();
void usr_search();
void user_info();
void help();
void about_us();
void admin_crt(); 
void user_crt(); 

// global data structure
struct admin
{
	string admin_id;
	string name;
	string admin_name;
	string admin_password;
}admin[1];

struct user
{
	string user_id;
	string name;
	string user_name;
	string user_password;
}user [5];;

struct doctor
{
	string first_name;
	string last_name;
	string Address;
	char contact_number[20];
	int age;
	int experiance;
	int refno;
	string department;
	double salary;
	char appointment_date[20];
	char arrival_time[20];
	char Departure_time[20];
};


// Global Variables
int num;
doctor doc[max],tempdoc[max]; // Setting Maximu Value

// Main Menu
void main()
{
	welcome();
	login_role_choose();
	getch();
}

// welcome screen for the system
void welcome()
{
	
	system("mode con:cols=85 lines=80"); // this code is for display screen size and it indicate columns and lines
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14); // This code for the color use of the text
	cout<<"\n\n\n";// This code is use for line brake
	cout<<"	......................................................................"<<endl;Sleep(50);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :     #     #                                                  :  | "<<endl;Sleep(50);
	cout<<"	|  :     ##   ## ###### #####  #  ####    ##   #####  ######      :  | "<<endl;Sleep(50);
	cout<<"	|  :     # # # # #      #    # # #    #  #  #  #    # #           :  | "<<endl;Sleep(50);
	cout<<"	|  :     #  #  # #####  #    # # #      #    # #    # #####       :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # #      #    # # #      ###### #####  #           :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # #      #    # # #    # #    # #   #  #           :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # ###### #####  #  ####  #    # #    # ######      :  | "<<endl;Sleep(50);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                              :  | "<<endl;Sleep(50);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :     #     #                                                  :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     #  ####   ####  #####  # #####   ##   #            :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # #    # #      #    # #   #    #  #  #            :  | "<<endl;Sleep(50);
	cout<<"	|  :     ####### #    #  ####  #    # #   #   #    # #            :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # #    #      # #####  #   #   ###### #            :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     # #    # #    # #      #   #   #    # #            :  | "<<endl;Sleep(50);
	cout<<"	|  :     #     #  ####   ####  #      #   #   #    # ######       :  | "<<endl;Sleep(50);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"	......................................................................"<<endl;Sleep(50);
	cout<<"	|  ::>> Developed By: Siraj Msm                                   :  | "<<endl;Sleep(50);
	cout<<"	......................................................................"<<endl;Sleep(50);
	cout<<endl; // endling line
	cout<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"\tPress any key to continue the Doctors Information System....."<<endl;
	getch(); // pause the function
}

// This Function is about the role Choosing
void login_role_choose()
{
	string option;
	string A, U;

		system("mode con:cols=135 lines=110");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"\n\n\n";
		cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
		cout<<"	|                                               .---------------------.                                             | "<<endl;
		cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
		cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
		cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                              ::>> Select the Option to show the Login Screen <<::                           :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :                 ::>> If You Want to Login the Admin Account Please Enter Letter [A]                         :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :                 ::>> If You Want to Login the User Account Please Enter Letter  [U]                         :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :                 ::>> If You Need Help    [H]                                                                :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :                 ::>> If You Want to Exit [E]                                                                :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                               ::>> Please Choose Your Option Below <<::                                     :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :.............................................................................................................:  | "<<endl;
		cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
		cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
		cout<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
		cout<<"\t\t\t\t\tThe Option is: ";cin>>option;

			//Setting Options
			if (option=="A" || option=="a")
			{
				cout<<"\n";						
				admin_login();						//calling Admin Menu
				Sleep (500);
			}
			else if (option=="U" || option=="u")
			{
				cout<<"\n";
				user_login();						//calling User Menu
			}
			else if (option=="H" || option=="h")
			{
				help();
				login_role_choose();				//calling Role Choose Menu
			}
			else if (option=="E" || option=="e")
			{
				exit(5);
			}
			else
			{
				cout<<"\n";
				error();							//calling Error Menu
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
				cout<<"\n\n\t\tYour Choosing The Wrong Option, Please Select the Right Option to Continue your Login......."<<endl;
				getch();							//Pause the function
				login_role_choose();				//calling Role Choose
			}

		
}


// This function is an admin login function
void admin_login()
{
	admin_crt(); //calling Hardcorder admin account information
	string un,pswd=" ";
	int count = 1;


	while(count<=3)
		{
			system("mode con:cols=135 lines=110");
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"\n\n\n";
			cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
			cout<<"	|                                               .---------------------.                                             | "<<endl;
			cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
			cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
			cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
			cout<<"	|  :                                    ::>> Welcome to Admin Account Login <<::                                 :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
			cout<<"	|  :                        Please Enter the Correct Username and Password for the Below Option                  :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :.............................................................................................................:  | "<<endl;
			cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
			cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);

			cout<<"\t\t\t Enter the Username : "; cin>>un;
			cout<<"\t\t\t Enter the Password : "; cin>>pswd;
		
			if ((un==admin[0].admin_name)&&(pswd==admin[0].admin_password))
			{
				system("cls");
				granded();				// calling granded Message
				system("cls");
				admin_menu();			// calling Administror Menu
				break;
				cout<<"\n";
			}
			else
			{
				system("cls");
				denied();				// calling denied Message
			}
			count++;
	}
			if (count>3)
			{
				system("cls");
				error();				// calling Error Message
				login_role_choose();	// calling Role Choose
			}	

}

// This function is about User Login
void user_login()
{
	user_crt(); //calling Hardcorder User account information
	string un,pswd;
	int count=1;
		
	while(count<=3)
		{	
			system("mode con:cols=135 lines=110");
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"\n\n\n";
			cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
			cout<<"	|                                               .---------------------.                                             | "<<endl;
			cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
			cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
			cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
			cout<<"	|  :                                    ::>> Welcome to User Account Login <<::                                  :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
			cout<<"	|  :                        Please Enter the Correct Username and Password for the Below Option                  :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :.............................................................................................................:  | "<<endl;
			cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
			cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);

			/* User level will decide the users authority so in future we can update it */
			int i=0;
			cout<<"\t\t\t Enter User Level :";cin>>i; // Entering Userlevel
			i=i-1;
			cout<<"\t\t\t Enter the Username : "; cin>>un;
			cout<<"\t\t\t Enter the Password : "; cin>>pswd;
			
				// Checking Hardcoded data with Condition
				if ((user[i].user_name==un)&&(user[i].user_password==pswd))
				{
				user_menu(); // calling user menu
				break;
				cout<<"\n";
				}
				else
				{
				system("cls");
				denied();  // calling Denied Message
				}	

			count++;
		}
			if (count>3)
			{
				system("cls");
				error();	// calling Error Message			
				login_role_choose(); // calling Role Choose Menu
			}	

}

// Hardcoded administration account information
void admin_crt()
{
	//administrator
	admin[0].admin_id		= "1001";
	admin[0].admin_name		= "siraj";					// admin User name
	admin[0].name			= "Siraj Msm";
	admin[0].admin_password	= "1234";					// admin Password
}

// Hardcoded User accounts information
void user_crt()
{
	//user level 1
	user[0].user_id			= "2001";
	user[0].user_name		= "fainan";					// Username
	user[0].name			= "fainan farook";
	user[0].user_password	= "2345";					// Password

	//user level 2
	user[1].user_id			= "2002";
	user[1].user_name		= "zahran";					// Username
	user[1].name			= "Zahran Liyakath ali";
	user[1].user_password	= "2345";					// Password

	//user level 3
	user[2].user_id			= "2003";
	user[2].user_name		= "hisam";					// Username
	user[2].name			= "Hisham Nawas";
	user[2].user_password	= "2345";					// Password

	//user level 4
	user[3].user_id			= "2004";
	user[3].user_name		= "farasath";				// Username
	user[3].name			= "Farazath Firsan";
	user[3].user_password	= "2345";					// Password

	//user level 5
	user[4].user_id			= "2005";
	user[4].user_name		= "zaid";					// Username
	user[4].name			= "Zang Zaid";
	user[4].user_password	= "2345";					// Password

}

     
// Additional Function Messages

//Error Message
void error()
{
	system("mode con:cols=155 lines=90");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	system("cls");
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),012);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                    ***** **                                                                                 :  | "<<endl;                                                      
	cout<<"	|  :                    ******  **** *                                                                           :  | "<<endl;                                                   
	cout<<"	|  :                **   *  * ****                                                                               :  | "<<endl;                                                    
	cout<<"	|  :                *    *  *   **                                                                               :  | "<<endl;                                                     
	cout<<"	|  :                    *  *         ***  ****    ***  ****       ****    ***  ****                              :  | "<<endl;    
	cout<<"	|  :                    ** **          **** **** *  **** **** *   * ***  *  **** **** *                          :  | "<<endl; 
	cout<<"	|  :                    ** **           **   ****    **   ****   *   ****    **   ****                           :  | "<<endl;  
	cout<<"	|  :                    ** ******       **           **         **    **     **                                  :  | "<<endl;         
	cout<<"	|  :                    ** *****        **           **         **    **     **                                  :  | "<<endl;         
	cout<<"	|  :                    ** **           **           **         **    **     **                                  :  | "<<endl;         
	cout<<"	|  :                    *  **           **           **         **    **     **                                  :  | "<<endl;         
	cout<<"	|  :                    *            **           **         **    **     **                                     :  | "<<endl;         
	cout<<"	|  :                ****         *   ***          ***         ******      ***                                    :  | "<<endl;        
	cout<<"	|  :                    *  ***********     ***          ***         ****        ***                              :  | "<<endl;       
	cout<<"	|  :                *     ******                                                                                 :  | "<<endl;                                                       
	cout<<"	|  :                *                                                                                            :  | "<<endl;                                                                 
	cout<<"	|  :                **                                                                                           :  | "<<endl; 
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
	getch();
}

// Granded Message
void granded()
{
	    system("mode con:cols=155 lines=120");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14); 
		cout<<"\n\n\n";
		cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
		cout<<"	|                                               .---------------------.                                             | "<<endl;
		cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
		cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
		cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :               * ***                                                                    **                   :  | "<<endl;    
		cout<<"	|  :            *  ****  *                                            *                     **                   :  | "<<endl;  
		cout<<"	|  :           *  *  ****                                            **                     **                   :  | "<<endl;   
		cout<<"	|  :         *  **   **                                             **                     **                    :  | "<<endl;   
		cout<<"	|  :         *  ***          ***  ****                             ********                 **                   :  | "<<endl;  
		cout<<"	|  :        **   **           **** **** *    ****    ***  ****    ********     ***      *** **                   :  | "<<endl;   
		cout<<"	|  :        **   **   ***      **   ****    * ***  *  **** **** *    **       * ***    *********                 :  | "<<endl; 
		cout<<"	|  :        **   **  ****  *   **          *   ****    **   ****     **      *   ***  **   ****                  :  | "<<endl;  
		cout<<"	|  :        **   ** *  ****    **         **    **     **    **      **     **    *** **    **                   :  | "<<endl;   
		cout<<"	|  :        **   ***    **     **         **    **     **    **      **     ********  **    **                   :  | "<<endl;   
		cout<<"	|  :         **  **     *      **         **    **     **    **      **     *******   **    **                   :  | "<<endl;   
 		cout<<"	|  :         ** *      *      **         **    **     **    **      **     **        **    **                    :  | "<<endl;   
 		cout<<"	|  :          ***     *       ***        **    **     **    **      **     ****    * **    **                    :  | "<<endl;   
		cout<<"	|  :            *******         ***        ***** **    ***   ***      **     *******   *****                     :  | "<<endl;     
		cout<<"	|  :              ***                       ***   **    ***   ***             *****     ***                      :  | "<<endl; 
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :.............................................................................................................:  | "<<endl;
		cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
		cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;    
        Sleep (200);
		getch();
}

// Denied Message
void denied()
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14); 
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
    cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),013);
    cout<<"	|  :                               ***** **                                                  **                  :  | "<<endl;    
    cout<<"	|  :                            ******  ***                             *                     **                 :  | "<<endl;   
    cout<<"	|  :                          **    *  * ***                           ***                    **                 :  | "<<endl;   
    cout<<"	|  :                         *     *  *   ***                           *                     **                 :  | "<<endl;   
    cout<<"	|  :                              *  *     ***                                                **                 :  | "<<endl;   
    cout<<"	|  :                             ** **      **    ***    ***  ****    ***        ***      *** **                 :  | "<<endl;   
    cout<<"	|  :                             ** **      **   * ***    **** **** *  ***      * ***    *********               :  | "<<endl; 
    cout<<"	|  :                             ** **      **  *   ***    **   ****    **     *   ***  **   ****                :  | "<<endl;  
    cout<<"	|  :                             ** **      ** **    ***   **    **     **    **    *** **    **                 :  | "<<endl;   
    cout<<"	|  :                             ** **      ** ********    **    **     **    ********  **    **                 :  | "<<endl;   
    cout<<"	|  :                             *  **      ** *******     **    **     **    *******   **    **                 :  | "<<endl;   
    cout<<"	|  :                                *       *  **          **    **     **    **        **    **                 :  | "<<endl;   
    cout<<"	|  :                            *****       *   ****    *   **    **     **    ****    * **    **                :  | "<<endl;   
    cout<<"	|  :                           *   *********     *******    ***   ***    *** *  *******   *****                  :  | "<<endl;     
    cout<<"	|  :                          *       ****        *****      ***   ***    ***    *****     ***                   :  | "<<endl;      
    cout<<"	|  :                          *                                                                                  :  | "<<endl;                                                                     
    cout<<"	|  :                           **                                                                                :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14); 
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;  
	getch();
}

//Authendication Menu Part

// Administrator Menu
void admin_menu()
{
	int admin_option;

		system("mode con:cols=135 lines=110");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"\n\n\n";
		cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
		cout<<"	|                                               .---------------------.                                             | "<<endl;
		cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
		cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
		cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                                                ::>> Admin Menu <<::                                         :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<"	|  :                                          1.  Build The Doctors Information Table                            :  | "<<endl;
		cout<<"	|  :                                          2.  view The List of Available Doctors                             :  | "<<endl;
		cout<<"	|  :                                          3.  Update The Specific Doctor Information                         :  | "<<endl;
		cout<<"	|  :                                          4.  Insert The New Record                                          :  | "<<endl;
		cout<<"	|  :                                          5.  Search The Record                                              :  | "<<endl;
		cout<<"	|  :                                          6.  Delete The Record                                              :  | "<<endl;
		cout<<"	|  :                                          7.  View User Details                                              :  | "<<endl;
		cout<<"	|  :                                          8.  Logout                                                         :  | "<<endl;
		cout<<"	|  :                                          9.  Exit                                                           :  | "<<endl;
		cout<<"	|  :                                          10. Help                                                           :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                                         ::>> Please Choose Your Option Below <<::                           :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :.............................................................................................................:  | "<<endl;
		cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
		cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
		cout<<"\t\t\t Enter Your Option : "; cin>>admin_option;
		
		// Multiway Selection
		switch (admin_option)
		{
			case 1:
				system ("cls");
				build_doctors_table();	//calling Built Function
			break;

			case 2:
				system ("cls");
				view_list();			//calling View Function
			break;

			case 3:
				system ("cls");
				update_entry();			//calling Update Function
			break;

			case 4:
				system ("cls");
				insert_new_entry();		//calling Insert Function
			break;

			case 5:
				system ("cls");
				search();				//calling Search Function
			break;

			case 6:
				system ("cls");
				delete_entry();			//calling Delete Function
			break;

			case 7:
				system ("cls");
				user_info();			//calling User information 
			break;

			case 8:
				system ("cls");
				login_role_choose();	//calling Role Choose Function
			break;

			case 9:
				exit(0);				// Ending Function
			break;

			case 10:
				system ("cls");
				help();					//calling Help Menu
				admin_menu();

			default:
				error();
				admin_menu();			// Calling Admin menu
			break;
		}

		getch(); // pause the function
}

// User Menu
void user_menu()
{
	int user_option;

		system("mode con:cols=135 lines=110");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"\n\n\n";
		cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
		cout<<"	|                                               .---------------------.                                             | "<<endl;
		cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
		cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
		cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                                                ::>> User  Menu <<::                                         :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);;
		cout<<"	|  :                                          1.  view The List of Available Doctors                             :  | "<<endl;
		cout<<"	|  :                                          2.  Search The Record                                              :  | "<<endl;
		cout<<"	|  :                                          3.  Help                                                           :  | "<<endl;
		cout<<"	|  :                                          4.  about Us                                                       :  | "<<endl;
		cout<<"	|  :                                          5.  Additional Salary Calculator                                   :  | "<<endl;
		cout<<"	|  :                                          6.  Sign Out                                                       :  | "<<endl;
		cout<<"	|  :                                          7.  Exit                                                           :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"	|  :                                         ::>> Please Choose Your Option Below <<::                           :  | "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :                                                                                                             :  | "<<endl;
		cout<<"	|  :.............................................................................................................:  | "<<endl;
		cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
		cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
		cout<<"\t\t\t Enter Your Option : "; cin>>user_option;

		// Multiway Selection
		switch (user_option)
		{
			case 1:
				system ("cls");
				usr_view_list();	//calling view function 
			break;

			case 2:
				system ("cls");
				usr_search();		// calling search function
			break;

			case 3:
				system ("cls");
				help();				// calling help menu
				user_menu();		// calling user menu
			break;

			case 4:
				system ("cls");
				about_us();			// calling about us menu
			break;

			case 5:
				system ("cls");
				calsal();			// calling calculate salary function

			case 6:
				system ("cls");
				login_role_choose(); // calling Role Choose
			break;

			case 7:
				exit(0);			// Ending function
			break;

			default:
				error();			// calling error message
				user_menu();		// calling user menu
			break;
		}

		getch();
}

// Function Part
// Doctor information System, Doctors Record inserting part 
void build_doctors_table()
{
	system("mode con:cols=135 lines=110");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\n\n\n";
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                              ::>> Welcome to Doctors Record Building System <<::                            :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                    ::>> In This System You Have Only 20 maximum Entry at a Time                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                            ::>> Please Choose Your Entries and Enter it <<::                                :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;

	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);

	// set the Record count entries part
	cout<<"   Number of Enteries: "; cin>>num;

	if (num>max)				
	{
		error();				 // error message
		build_doctors_table();	// calling Built record function
	}

	system("cls"); // clear the screan
	
	//Record Entering part
	for(int i=0; i<=num-1; i++)
	{
		system("cls");
		cout<<"\n\n\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
		cout<<"                                            ::>> Please Fill the following informations <<::"<<endl;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"\n";
		cout<<"\t\tEnter your "<<"'"<<i+1<<"'"<<" Entry."<<endl;
		cout<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
		cout<<"\t::>> First Name                   : "; cin>>doc[i].first_name;
		cout<<"\t::>> Last Name                    : "; cin>>doc[i].last_name;
		cout<<"\t::>> Doctor Ref No                : "; cin>>doc[i].refno;
		cout<<"\t::>> Deparment Name               : "; cin>>doc[i].department;
		cout<<"\t::>> Email Address                : "; cin>>doc[i].Address;
		cout<<"\t::>> Contact Number               : "; cin>>doc[i].contact_number;
		cout<<"\t::>> Age                          : "; cin>>doc[i].age;
		cout<<"\t::>> Year of Experience           : "; cin>>doc[i].experiance;
		cout<<"\t::>> Monthly Salary               : "; cin>>doc[i].salary;
		cout<<"\t::>> Appointment Date <DD-MM-YYYY>: "; cin>>doc[i].appointment_date;
		cout<<"\t::>> Arrival Time <HH:MM AM/PM>   : "; cin>>doc[i].arrival_time;
		cout<<"\t::>> Departure Time <HH:MM AM/PM> : "; cin>>doc[i].Departure_time;
		cout<<"\n\n";

	}
	
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"\t\t\tData Entered Completed............Going to Main Menu.......";
	admin_menu();		// calling admin menu
}

// Doctors complete Record View part in admin menu
void view_list()
{
	
	cout<<"\n\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"                                            ::>> Viewing The Doctors Information <<::"<<endl;
	cout<<"                                                        ::>> Admin Menu <<::"<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);


	//viewving code part
	for(int i=0;i<=num-1;i++)
	{
		cout<<"\n";
		cout<<"\t\tEntry "<<"'"<<i+1<<"'"<<endl;
		cout<<"\n";
		cout<<"First Name                   : "; cout<<doc[i].first_name<<endl;
		cout<<"Last Name                    : "; cout<<doc[i].last_name<<endl;
		cout<<"Full Name                    : "; cout<<doc[i].first_name+doc[i].last_name<<endl;
		cout<<"Doctor Ref No                : "; cout<<doc[i].refno<<endl;
		cout<<"Deparment Name               : "; cout<<doc[i].department<<" Department"<<endl;
		cout<<"Email Address                : "; cout<<doc[i].Address<<endl;
		cout<<"Contact Number               : "; cout<<doc[i].contact_number<<endl;
		cout<<"Age                          : "; cout<<doc[i].age<<" Years"<<endl;
		cout<<"Year of Experience           : "; cout<<doc[i].experiance<<" Years"<<endl;
		cout<<"Total Salary                 : "; cout<<doc[i].salary*doc[i].experiance<<" LKR"<<endl;
		cout<<"Appointment Date <DD-MM-YYYY>: "; cout<<doc[i].appointment_date<<endl;
		cout<<"Arrival Time <HH:MM AM/PM>   : "; cout<<doc[i].arrival_time<<endl;
		cout<<"Departure Time <HH:MM AM/PM> : "; cout<<doc[i].Departure_time<<endl;
		cout<<"\n\n";;
	}

	cout<<"going to main menu";
	getch();
	admin_menu(); // calling admin menu
 }

// Doctors complete Record View part in user menu
void usr_view_list()
{
	
	cout<<"\n\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"                                            ::>> Viewing The Doctors Information <<::"<<endl;
	cout<<"                                                        ::>> User Menu <<::"<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);

	//viewving code part
	for(int i=0;i<=num-1;i++)
	{
		cout<<"\n";
		cout<<"\t\tEntry "<<"'"<<i+1<<"'"<<endl;
		cout<<"\n";
		cout<<"First Name                   : "; cout<<doc[i].first_name<<endl;
		cout<<"Last Name                    : "; cout<<doc[i].last_name<<endl;
		cout<<"Full Name                    : "; cout<<doc[i].first_name+doc[i].last_name<<endl;
		cout<<"Doctor Ref No                : "; cout<<doc[i].refno<<endl;
		cout<<"Deparment Name               : "; cout<<doc[i].department<<" Department"<<endl;
		cout<<"Email Address                : "; cout<<doc[i].Address<<endl;
		cout<<"Contact Number               : "; cout<<doc[i].contact_number<<endl;
		cout<<"Age                          : "; cout<<doc[i].age<<" Years"<<endl;
		cout<<"Year of Experience           : "; cout<<doc[i].experiance<<" Years"<<endl;
		cout<<"Total Salary                 : "; cout<<doc[i].salary*doc[i].experiance<<" LKR"<<endl;
		cout<<"Appointment Date <DD-MM-YYYY>: "; cout<<doc[i].appointment_date<<endl;
		cout<<"Arrival Time <HH:MM AM/PM>   : "; cout<<doc[i].arrival_time<<endl;
		cout<<"Departure Time <HH:MM AM/PM> : "; cout<<doc[i].Departure_time<<endl;
		cout<<"\n\n";;
	}

	cout<<"going to main menu";
	getch();
	user_menu(); // calling user menu
}

// Doctors Record update part 
void update_entry()
{
	int i;
	char upd_option;
	int jobcode;


	//declaring sub functions
	void edit_firstname(int);
	void edit_lastname(int);
	void edit_ref_no(int);
	void edit_dep(int);
	void edit_e_address(int);
	void edit_contactno(int);
	void edit_age(int);
	void edit_exp(int);
	void edit_sal(int);
	void edit_appdate(int);
	void edit_arrivtm(int);
	void edit_deptm(int);
	void edit_menu();


		cout<<"\n\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"\t\t\t ::>> Please Enter your Ref_No: ";  // Entering Ref.no 
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
		cin>>jobcode;
		edit_menu();
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"\t\t\t ::>> Please Enter your option "; // Entering option
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
		cin>>upd_option;

		for(i=0;i<=num-1;i++)
		{
			if(doc[i].refno==jobcode) // checking Entering Ref.no 
			{
				switch(upd_option)
				{
					case 'F':
						edit_firstname(i); // calling sub function
						break;

					case 'L':
						edit_lastname(i); // calling sub function
						break;

					case 'R':
						edit_ref_no(i); //calling sub function
						break;

					case 'D':
						edit_dep(i);	//calling sub function
						break;

					case 'E':
						edit_e_address(i);	//calling sub function
						break;

					case 'C':
						edit_contactno(i); //calling sub function
						break;

					case 'G':
						edit_age(i);		//calling sub function
						break;

					case 'X':
						edit_exp(i);		//calling sub function
						break;

					case 'S':
						edit_sal(i);		//calling sub function
						break;

					case 'I':
						edit_appdate(i);	//calling sub function
						break;

					case 'T':
						edit_arrivtm(i);	//calling sub function	
						break;

					case 'U':
						edit_deptm(i);		//calling sub function
						break;

					case 'Q':
						admin_menu();		//calling sub function
						break;

	
					default:
						 error();			//calling Error Message
						 admin_menu();		// calling admin menu
				}

				admin_menu(); // calling admin menu
			}
			
		}
		if(doc[i].refno!=jobcode)
			{
				error();
				cout<<"Your Entered Ref.no is Wrong Please Check the data";
				admin_menu();
			}
}

// Subfunction Update Menu
void edit_menu()
{
	system("mode con:cols=135 lines=110");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\n\n\n";
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                                                ::>> Update Menu <<::                                        :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                          F.  Update First Name                                              :  | "<<endl;
	cout<<"	|  :                                          L.  Update Last Name                                               :  | "<<endl;
	cout<<"	|  :                                          R.  Update Ref_No                                                  :  | "<<endl;
	cout<<"	|  :                                          D.  Update Department                                              :  | "<<endl;
	cout<<"	|  :                                          E.  Update Email Address                                           :  | "<<endl;
	cout<<"	|  :                                          C.  Update Contact Number                                          :  | "<<endl;
	cout<<"	|  :                                          G.  Update Age                                                     :  | "<<endl;
	cout<<"	|  :                                          X.  Update Experiance                                              :  | "<<endl;
	cout<<"	|  :                                          S.  Update Salary                                                  :  | "<<endl;
	cout<<"	|  :                                          I.  Update Appointment Date                                        :  | "<<endl;
	cout<<"	|  :                                          T.  Update Arrival Time                                            :  | "<<endl;
	cout<<"	|  :                                          U.  Update Departure Time                                          :  | "<<endl;
	cout<<"	|  :                                          Q.  Going to Main Menu                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                                         ::>> Please Choose Your Option Below <<::                           :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"	|  :  ::>> Please Use Block letter for Choosing Option, Eg: If you want to Choose Update age, Please Enter 'G'.  :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
		
}

// Subfunction for Updating First Name
void edit_firstname( int i) // parameter passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New First Name----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].first_name;
}

// Subfunction for Updating Salary
void edit_sal(int i)	// Parameter passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Salary---->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].salary;
}

// Subfunction for Updating Last Name
void edit_lastname( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Last Name----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].last_name;
}

// Subfunction for Updating Refno
void edit_ref_no( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Ref_No----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].refno;
}

// Subfunction for Updating Department
void edit_dep( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Ref_No----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].department;
}

// Subfunction for Updating Email id
void edit_e_address( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Email Address----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].Address;
}

// Subfunction for Updating Contact Number
void edit_contactno( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Contact Number----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].contact_number;
}

// Subfunction for Updating Age
void edit_age( int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Age----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].age;
}

// Subfunction for Updating Experiance
void edit_exp(int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Year of Experiance----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].experiance;
}

// Subfunction for Updating Appointment Date
void edit_appdate(int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Appointment Date----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].appointment_date;
}

// Subfunction for Updating Arrival Time
void edit_arrivtm(int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Arrival Time----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].arrival_time;
}

// Subfunction for Updating Departure Time
void edit_deptm(int i) // Parameter Passing
{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\tEnter New Departure Time----->	";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cin>>doc[i].Departure_time;
}

// Doctors New Record Insert part 
void insert_new_entry()
{
	system("cls");
	int i = num;
	num+=1;

	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n\n";
	cout<<"                                            ::>> Please Fill the following informations <<::"<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\t::>> First Name                   : "; cin>>doc[i].first_name;
	cout<<"\t::>> Last Name                    : "; cin>>doc[i].last_name;
	cout<<"\t::>> Doctor Ref No                : "; cin>>doc[i].refno;
	cout<<"\t::>> Deparment Name               : "; cin>>doc[i].department;
	cout<<"\t::>> Email Address                : "; cin>>doc[i].Address;
	cout<<"\t::>> Contact Number               : "; cin>>doc[i].contact_number;
	cout<<"\t::>> Age                          : "; cin>>doc[i].age;
	cout<<"\t::>> Year of Experience           : "; cin>>doc[i].experiance;
	cout<<"\t::>> Salary                       : "; cin>>doc[i].salary;
	cout<<"\t::>> Appointment Date <DD-MM-YYYY>: "; cin>>doc[i].appointment_date;
	cout<<"\t::>> Arrival Time <HH:MM AM/PM>   : "; cin>>doc[i].arrival_time;
	cout<<"\t::>> Departure Time <HH:MM AM/PM> : "; cin>>doc[i].Departure_time;
	cout<<"\n\n";
	
	cout<<"going to main menu";
	getch(); // pause function
	admin_menu(); // calling admin menu
}

// Doctors Record Search part in Admin Menu
void search()
{
	int jobcode;
	
	system("cls");
	cout<<"\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\t ::>> Please Enter the Search Ref_No: ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cin>>jobcode;	
	cout<<"\n\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t\t ::>> Search Result <::";

	for(int i=0; i<=num-1;i++)
	{
		if (doc[i].refno==jobcode) // checking Ref.no
		{
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"\n\n\n";
			cout<<"\t\t:>> First Name                   : "; cout<<doc[i].first_name<<endl;
			cout<<"\t\t:>> Last Name                    : "; cout<<doc[i].last_name<<endl;
			cout<<"\t\t:>> Full Name                    : "; cout<<doc[i].first_name+doc[i].last_name<<endl;
			cout<<"\t\t:>> Deparment Name               : "; cout<<doc[i].department<<" Department"<<endl;
			cout<<"\t\t:>> Email Address                : "; cout<<doc[i].Address<<endl;
			cout<<"\t\t:>> Contact Number               : "; cout<<doc[i].contact_number<<endl;
			cout<<"\t\t:>> Age                          : "; cout<<doc[i].age<<" Years"<<endl;
			cout<<"\t\t:>> Experience                   : "; cout<<doc[i].experiance<<" Years"<<endl;
			cout<<"\t\t:>> Total Salary                 : "; cout<<doc[i].salary*doc[i].experiance<<" LKR"<<endl;
			cout<<"\t\t:>> Appointment Date <DD-MM-YYYY>: "; cout<<doc[i].appointment_date<<endl;
			cout<<"\t\t:>> Arrival Time <HH:MM AM/PM>   : "; cout<<doc[i].arrival_time<<endl;
			cout<<"\t\t:>> Departure Time <HH:MM AM/PM> : "; cout<<doc[i].Departure_time<<endl;
			cout<<"\n\n";;	
		}

	}

	cout<<"\t\t\t\t Going to Main Menu.......";
	getch();// pause the function
	admin_menu(); // calling admin menu
	
	/* if the record is not found it shows the blank part. */
}

// Doctors Record Search part in User menu
void usr_search()
{
	int jobcode;
	
	system("cls");
	cout<<"\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"\t\t\t ::>> Please Enter the Search Ref_No: ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cin>>jobcode;	
	cout<<"\n\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\t\t\t\t ::>> Search Result <::";
	for(int i=0; i<=num-1;i++)
	{
		if (doc[i].refno==jobcode) // checking menu
		{
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"\n\n\n";
			cout<<"\t\t:>> First Name                   : "; cout<<doc[i].first_name<<endl;
			cout<<"\t\t:>> Last Name                    : "; cout<<doc[i].last_name<<endl;
			cout<<"\t\t:>> Full Name                    : "; cout<<doc[i].first_name+doc[i].last_name<<endl;
			cout<<"\t\t:>> Deparment Name               : "; cout<<doc[i].department<<" Department"<<endl;
			cout<<"\t\t:>> Email Address                : "; cout<<doc[i].Address<<endl;
			cout<<"\t\t:>> Contact Number               : "; cout<<doc[i].contact_number<<endl;
			cout<<"\t\t:>> Age                          : "; cout<<doc[i].age<<" Years"<<endl;
			cout<<"\t\t:>> Experience                   : "; cout<<doc[i].experiance<<" Years"<<endl;
			cout<<"\t\t:>> Total Salary                 : "; cout<<doc[i].salary*doc[i].experiance<<" LKR"<<endl;
			cout<<"\t\t:>> Appointment Date <DD-MM-YYYY>: "; cout<<doc[i].appointment_date<<endl;
			cout<<"\t\t:>> Arrival Time <HH:MM AM/PM>   : "; cout<<doc[i].arrival_time<<endl;
			cout<<"\t\t:>> Departure Time <HH:MM AM/PM> : "; cout<<doc[i].Departure_time<<endl;
			cout<<"\n\n";;
			
		}

	}

	cout<<"\t\t\t\t Going to Main Menu.......";
	getch(); // pause function
	user_menu(); // calling user menu

	/* if the record is not found it shows the blank part. */
}

// Doctors Record Delete part 
void delete_entry()
{
	int code;
	int check=num-1;
	int i;

	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	system("cls");
	cout<<"\t\t\t Delete Entry"<<endl;
	cout<<"\t\t Enter the Ref_no to Delete that Entry: "; 
	cin>>code;
	
	/* in Delete function if the Entered Ref.No and Stored Refno is Same Then Subract the Array function */
	for (int i=0; i<=num-1 ; i++)
	{		
		if (doc[i].refno==code)// check the Ref.no
		{
			check=i; // check array part
		}
	}

	for (int i=0; i<=num-1 ; i++)
	{
		if (i==check)
		{
			continue; 
		}
		else
		{
		if (i>check)
		{
			tempdoc[i-1]=doc[i]; //deleting array levels
		}
		else
		{
			tempdoc[i]=doc[i];
		}
		}
	}

	num--;
	
	for (int i=0; i<=num-1 ; i++)
	{
		doc[i]=tempdoc[i];
	}
		
	system("cls");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"\n\n\t\t Entry Deleted"<<endl;
	getch(); // pause function
	admin_menu(); // calling admin menu 
}

// Users information Viewing Part
void user_info()
{
	user_crt();
	cout<<"\n\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"                                            ::>> Viewing The Doctors Information <<::"<<endl;
	cout<<"                                                  ::>> User Information Panel <<::"<<endl;
	cout<<"\n\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);

	for(int i=0;i<=4; i++)
	{
		cout<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
		cout<<"\t\t\tUser Level: "<<i+1<<endl;
		cout<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
		cout<<"\t\t::>> User Id             : "; cout<<user[i].user_id<<endl;
		cout<<"\t\t::>> User Name           : "; cout<<user[i].user_name<<endl;
		cout<<"\t\t::>> User Full Name      : "; cout<<user[i].name<<endl;
		cout<<"\t\t::>> User Full Password  : "; cout<<user[i].user_password<<endl;
	}

	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"\n\n\t\t\tPress Any Key to Continue the Admin Menu..............";
	getch(); // pause function
	admin_menu(); // calling admin menu
}

// Help instruction Part
void help()
{
	system("mode con:cols=135 lines=110");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\n\n\n";
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                                         ::>> Welcome to Help Menu <<::                                      :  | "<<endl;
	cout<<"	|  :                        ::>> It Gives Instructions to the Doctors Information System <<::                    :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                         ::>> 01. Choosing Your Role <<::                                    :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"	|  :  :>> After the Welcome Menu, you are going to enter the Role Choose Menu.                                   :  | "<<endl;
	cout<<"	|  :  :>> In this Menu You Have to Select Your Role, If you are Admin you select [A], and User you select [U].   :  | "<<endl;
	cout<<"	|  :  :>> In this Menu You Wish to Exit the System Enter [E]                                                     :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                         ::>> 02. Login Account <<::                                         :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"	|  :  :>> After you choose your role, you are in the Account Login Part.                                         :  | "<<endl;
	cout<<"	|  :  :>> In this part if you are in admin part, You have to Enter Admin Username and Password.                  :  | "<<endl;
	cout<<"	|  :  :>> Or In this part if you are in user part, You have to Enter User Level, Users Username and Password.    :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                         ::>> 03. Admin Menu <<::                                            :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"	|  :  :>> After you login your account, you are in the Admin Menu.                                               :  | "<<endl;
	cout<<"	|  :  :>> In Admin Menu there are total 09 Options. and Admin have the Full Authority and Control.               :  | "<<endl;
	cout<<"	|  :  :>> The Option and Functions Below.                                                                        :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"	|  :    Option     Functions                                                                                     :  | "<<endl;
	cout<<"	|  :   _________   ___________                                                                                   :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"	|  :      1      - In This Function you can Build the Doctors Information Table, The Maximum Entry is 20.        :  | "<<endl;
	cout<<"	|  :      2      - In This Function you can View the All Doctors with There Complete Information.                :  | "<<endl;
	cout<<"	|  :      3      - In This Function you can Update the Information but it's case sensitive,Using with the Ref.No.:  | "<<endl;
	cout<<"	|  :      4      - In This Function you can Insert the New Entry or Record Freshly.                              :  | "<<endl;
	cout<<"	|  :      5      - In This Function you can Search any Specific Doctors Information,Using with the Ref.No.       :  | "<<endl;
	cout<<"	|  :      6      - In This Function you can Delete any Specific Doctors Information,Using with the Ref.No.       :  | "<<endl;
	cout<<"	|  :      7      - In This Function you can view all Users Details.                                              :  | "<<endl;
	cout<<"	|  :      8      - In This Function you can Sign out or Get out from the admin menu.                             :  | "<<endl;
	cout<<"	|  :      9      - In This Function you can Exit the Entire System.                                              :  | "<<endl;
	cout<<"	|  :     10     -  In This Function you can get Helps and Tips to Operate the Complete System                    :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                         ::>> 03. User Menu <<::                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"	|  :  :>> After you login your account, you are in the User Menu.                                                :  | "<<endl;
	cout<<"	|  :  :>> In User Menu there are total 06 Options. and Users have the Limited Control for the Privacy.           :  | "<<endl;
	cout<<"	|  :  :>> They Cannot Add, Update or Delete the Doctor Information, They can Just View and Search information    :  | "<<endl;
	cout<<"	|  :  :>> The Option and Functions Below.                                                                        :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"	|  :    Option     Functions                                                                                     :  | "<<endl;
	cout<<"	|  :   _________   ___________                                                                                   :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"	|  :      1      - In This Function you can View the All Doctors with There Complete Information.                :  | "<<endl;
	cout<<"	|  :      2      - In This Function you can Search any Specific Doctors Information,Using with the Ref.No.       :  | "<<endl;
	cout<<"	|  :      3      - In This Function you can get Helps and Tips to Operate the Complete System                    :  | "<<endl;
	cout<<"	|  :      4      - In This Function you can get More Information about the system and the Development team.      :  | "<<endl;
	cout<<"	|  :      5      - In This Function you can calculate salary for additional use ( Hours x Salary).               :  | "<<endl;
	cout<<"	|  :      6      - In This Function you can Sign out or Get out from the user menu.                              :  | "<<endl;
	cout<<"	|  :      7      - In This Function you can Exit the Entire System.                                              :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :  ::>>> Thank You for using our Doctors information Help Menu, If You have any doubts and Errors,            :  | "<<endl;
	cout<<"	|  :  ::>>> Please visit our Website, www.sirajmsm.net.                                                          :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
	cout<<"\n\n";
	system("pause");
}

// About our information view part
void about_us()
{
	char optn;

	system("mode con:cols=135 lines=110");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"\n\n\n";
	cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
	cout<<"	|                                               .---------------------.                                             | "<<endl;
	cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
	cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
	cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"	|  :                                        ::>>> Welcome to About Us Menu <<<::                                 :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                           ::>> Developer Information <<::                                   :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"	|  :                                        NO 102'B Mathrasa Road Kalmunaikudy-10.                              :  | "<<endl;
	cout<<"	|  :                                        Contact No   : +94777850966                                          :  | "<<endl;
	cout<<"	|  :                                        Facebook Id  : Siraj Msm                                             :  | "<<endl;
	cout<<"	|  :                                        Email        : msmsiraj4u@gmail.com                                  :  | "<<endl;
	cout<<"	|  :                                        Website      : www.sirajmsm.net                                      :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"	|  :                                           ::>> Company Information <<::                                     :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"	|  :                          ||-----------------------------------------------------------||                    :  | "<<endl; 
	cout<<"	|  :                          | > Developed By               : MS.Mohamed Siraj             |                    :  | "<<endl;
	cout<<"	|  :                          | > Software Name              : Doctors Information System   |                    :  | "<<endl;
	cout<<"	|  :                          | > Software Version           : V 1.0(2015)                  |                    :  | "<<endl;
	cout<<"	|  :                          | > Company                    : MS Software Solution         |                    :  | "<<endl;
	cout<<"	|  :                          | > Email                      : sirajms@mssol.com            |                    :  | "<<endl;
	cout<<"	|  :                          | > Website                    : www.mssoftwaresolution.com   |                    :  | "<<endl;
	cout<<"	|  :                          | >:>>(C) Copy Rights 2015, Siraj Msm, ALL Rights Reserved <<:|                    :  | "<<endl;
	cout<<"	|  :                          ||-----------------------------------------------------------||                    :  | "<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"	|  :                                                                                                             :  | "<<endl;
	cout<<"	|  :.............................................................................................................:  | "<<endl;
	cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
	cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
	getch();
	cout<<"\n\n";

		cout << "If you Want to continue the System Press 'Y' or You Want To Quit Press 'N' " << endl;
		cout << "                             ::>> Enter Your Option : "; cin >> optn; cout << "<<:: " << endl;
		if (optn == 'y' || optn == 'Y')
		{
			system("cls");
			user_menu();                                                          //calling user menu function 
		}
		if (optn == 'n' || optn == 'N')
		{
			system("cls");
			exit(1);															//Ending Function
		}
		else
		{
		system("Cls");
		error();															// calling Error Msg
		about_us();															// calling about us
		}

	
}

// salary Culculation Part

// Equation Part
double salary_Cul(double hrs, double sal) // parameter passing 
{	
	double total;
	total = hrs * sal; // setting Equation
	return total;
	
}

// Execution Part.
void calsal()
{
		double hours;
		double salary;
		double totall;
		char option;

			system("mode con:cols=135 lines=110");
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"\n\n\n";
			cout<<"	 .-----------------------------------------------------------------------------------------------------------------.  "<<endl;
			cout<<"	|                                               .---------------------.                                             | "<<endl;
			cout<<"	|.............................................__| Doctors Information |__...........................................| "<<endl;
			cout<<"	|                         :             .---''          system             ''---.            :                      | "<<endl;
			cout<<"	|                         :            '----------------------------------------'            :                      | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),12);
			cout<<"	|  :                           ::>> Welcome to Addional Salary Calculation System<<::                            :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
			cout<<"	|  :                        Please Enter the Working Hours and Salary to the System                              :  | "<<endl;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),14);
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :                                                                                                             :  | "<<endl;
			cout<<"	|  :.............................................................................................................:  | "<<endl;
			cout<<"	|  Developed by: Siraj Msm                                                                                          | "<<endl;
			cout<<"	`-------------------------------------------------------------------------------------------------------------------' "<<endl;
			cout<<"\n\n";
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),13);
			cout<<"\t\tEnter the Doctor's Working Hours : ";
			cin>>hours;
			cout<<"\t\tEnter the Doctor's Salary        : ";
			cin>>salary;
			totall = salary_Cul(hours,salary); // parameter passing

			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
			cout<<"\t\tTotal Salary is: "<<totall<<endl;
			getch();
			
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
				cout << "\n\n\t\tIf you Want to continue the System Press 'Y' or You Want To Go to User Menu 'N' " << endl;
				cout << "\t\t::>> Enter Your Option : "; cin >> option; cout << "<<:: " << endl;
				if (option == 'y' || option == 'Y')
				{
					system("cls");
					calsal();                                                        //calling Calculation Salary Function 
				}
				else if (option == 'n' || option == 'N')
				{
					system("cls");
					user_menu();													//calling User Menu Function 
				}
				else
				{
					system("CLS");
					error();														//Calling Error Msg
					user_menu();													//Calling User Menu
				}
}





           