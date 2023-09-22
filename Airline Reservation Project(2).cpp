#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;
class Travelagency
{
public:
	void main_manu ()
	{
		cout << "\n\tBooking Office Name   :     Le Bon Voyoge Travel Agency" << endl << endl;
		cout << "\tCONTACT NUMBER        :     0300-1234567" << endl  << endl;
		cout << "\tADDRESS               :     Punjab" << endl << endl;
		cout << "\tPACKAGE 1             :     VISIT VISA" << endl << endl;
		cout << "\tPACKAGE 2             :     WORK VISA" << endl << endl;
		cout << "\tPACKAGE 3             :     FAMILY VISA" << endl << endl;
		cout << "\tPACKAGE 4             :     STUDY VISA" << endl << endl;
		cout << "\n\t**************************************************";
		cout << "\n\t\t\tVisa Prices" << endl;
		cout << "\t**************************************************" << endl << endl;
		cout << "\tVIST                  :     20000" << endl << endl;
		cout << "\tWORK                  :     25000" << endl << endl;
		cout << "\tFAMILY                :     30000" << endl << endl;
		cout << "\tSTUDENT               :     10000" << endl << endl;
		cout << "\t-----------------------------------------------" << endl << endl;
		cout << "\tPress any key to continue...";
	}
	void desig() 
	{
		system("color E4");
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                               AIRLINE RESERVATION SYSTEM                              |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                            Made by Muhammad Ahmad Saleem              |@@\n";
		cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
		
		cout << "Press any key to choose another option...";
		getch();
		system("cls");
	}
	
};
class registration:public Travelagency
{
	int regno;
	char visachoice [ 40 ] , ticketchoice [ 50 ];
	char  limit [ 40 ] , purpose [ 40 ] , regdate [ 30 ] , ftime [ 30 ] , dplace [ 40 ] , lplace [ 40 ];
public:
	void input()
	{
		cout << "\n\tEnter your registration no : ";
		cin >> regno;
		cin.ignore ();
		cout << "\n\t------------ VISA CHOICE --------------" << endl;
		cout << "\n\t1) VISIT VISA             " << endl << endl;
		cout << "\t2) WORK VISA              " << endl << endl;
		cout << "\t3) FAMILY VISA            " << endl << endl;
		cout << "\t4) STUDENT VISA           " << endl << endl;
		cout << "\tEnter the visa choice: ";
		gets (visachoice);
		system ("cls");
		cout << "\n\t**************************************************";
		cout << "\n\t\t\tTICKET CHOICES" << endl;
		cout << "\t**************************************************" << endl << endl;
		cout << "\t1) PIA                      :                20000" << endl << endl;
		cout << "\t2) SHAHEEN                  :                25000" << endl << endl;
		cout << "\t3) AIR-BLUE                 :                30000" << endl << endl;
		cout << "\t4) EMIRATES                 :                25000" << endl << endl;
		cout << "\tEnter the Ticket choice : ";
		gets (ticketchoice);
		//system ("cls");
		cout << "\n\n";
		
		cout << "\tEnter the Visa Limit (Month) : ";
		gets (limit);
		cout << endl;
		cout << "\tEnter the Purpose of Visiting : ";
		gets (purpose);
		lab3:
		cout << endl;
		cout << "\tEnter the Registration Date (DD-MM-YYYY) : ";
		gets (regdate);
		if (strlen(regdate) != 10) {
			cout << "\n\tEnter a valid Date" << endl;
			goto lab3;
		}
		if (strlen(regdate) == 10 && regdate[2] == '-'&&regdate[5] == '-') {
			cout << endl << "\t\tvalid" << endl << endl;
		}
		else
		{
			cout << "\tEnter a valid Date" << endl;
			goto lab3;
		}
		lab4:
		cout << "\tEnter the Registration Time (HH:MM) : ";
		gets (ftime);
		cout << endl;
		if (strlen(ftime) != 5) {
			cout << "\tEnter a valid Time pattern" << endl;
			cout << endl;
			goto lab4;
		}
		if (strlen(ftime) == 5 && ftime[2] == ':') {
			cout << endl << "\t\tvalid" << endl << endl;
		}
		else
		{
			cout << "\tEnter a valid CNIC_NO" << endl << endl;
			goto lab4;
		}
		cout << "\tEnter the Departure Place : ";
		gets (dplace);
		cout << endl;
		cout << "\tEnter the Landing Place : ";
		gets (lplace);
		cout << endl;
	}
	void show ()
	{
		cout << "\n\t**************************************************";
		cout << "\n\t\tDetails Of Customer Booking " << endl;
		cout << "\t**************************************************" << endl;
		cout << "\n\tRegistration no             :         " << regno << endl;
		cout << "\n\tVisa choice                 :         " << visachoice << endl;
		cout << "\n\tTicket choice               :         " << ticketchoice << endl;
		cout << "\n\tLimit of visa               :         " << limit << endl;
		cout << "\n\tpurpose of visa             :         " << purpose << endl;
		cout << "\n\tRegistration date           :         " << regdate << endl;
		cout << "\n\tregistration time           :         " << ftime << endl;
		cout << "\n\tDeparture place             :         " << dplace << endl;
		cout << "\n\tPlace of landing            :         " << lplace << endl << endl;	
	}
	int get_reg_id ()
	{
		return regno;
	}
};
class visitor :public Travelagency
{
	int id;
	char name [ 50 ] , address [ 50 ] , phone [ 40 ] , age [ 50 ] , email [ 60 ] , city [ 40 ] , cnic [ 50 ];
public:
	void input ()
	{
		int c = 0;
		cout << "\n\tEnter your id: ";
		cin >> id;
		cout << endl;
		cin.ignore ();
		cout << "\tEnter your name: ";
		gets (name);
		cout << endl;
		cout << "\tEnter your age: ";
		gets (age);
		cout << endl;
		lab1:
		cout << "\tEnter your phone number e.g(0333-0000686): ";
		gets (phone);
		cout << endl;
		if (strlen(phone) != 12) {
			cout << "\tEnter a valid Phone No" << endl << endl;
			goto lab1;
		}
		if (strlen(phone) == 12 && phone[4] == '-')
		{
			cout << endl << "\t\tvalid" << endl;
			cout << endl;
		}
		else
		{
			cout << "\tEnter a valid Phone No" << endl;
			cout << endl;
			goto lab1;
		}
		cout << "\tEnter your address: ";
		gets (address);
		cout << endl;
		lab:
		cout << "\tEnter your cnic number(XXXXX-XXXXXXX-X): ";
		gets (cnic);
		cout << endl;
		if (strlen(cnic) != 15) {
			cout << "\tEnter a valid CNIC NO" << endl;
			cout << endl;
			goto lab;
		}
		if (strlen(cnic) == 15 && cnic[5] == '-'&&cnic[13] == '-') {
			cout <<endl<< "\t\tvalid" << endl;
			cout << endl;
			Sleep(2500);
			system("cls");
		}
		else
		{
			cout << "\tEnter a valid CNIC NO" << endl;
			cout << endl;
			goto lab;
		}
		
	}
	void show ()
	{
		system("cls");
		cout << "\n\t**************************************************";
		cout << "\n\t\t\tCustomer Details" << endl;
		cout << "\t**************************************************" << endl;
		cout << "\n\tName     : " << name << endl;
		cout << "\n\tID       : " << id << endl;
		cout << "\n\tAge      : " << age << endl;
		cout << "\n\tPhone no : " << phone << endl;
		cout << "\n\tAddress  : " << address << endl;
		cout << "\n\tCNIC No  : " << cnic << endl << endl;
	}
	int get_cust_id ()
	{
		return id;
	}
};

int main () 
{
	system ("cls");
	fstream C , C1;
	fstream R , R1;
	visitor cust , cust2;
	registration reg , reg2;
	Travelagency tc;
	char choice,ch,ch1;
	int match;
	int mehroz = 0;
	tc.desig();
	cout << "\n\t**************************************************";
	cout << "\n\t\tWEL COME TO ONLINE AIR BOOKING SYSTEM " << endl;
	cout << "\t**************************************************" << endl;
	//Sleep (300);
	tc.main_manu ();
	ch1 = _getch ();
	while (1)
	{
		flag1:
		system("cls");
		cout << "\n\t**************************************************";
		cout << "\n\t\tWEL COME TO ONLINE AIR BOOKING SYSTEM " << endl;
		cout << "\t**************************************************" << endl;
		cout << "\n\t1) Enter data.\n\n\t2) Show data.\n\n\t3) Search data.\n\n\t4) Modify data.\n\n\t5) Delete data.\n\n\t6) Exit.\n" << endl;
		cout << "\tEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case '1':
			system("cls");
			cout << "\n\t**************************************************";
			cout << "\n\t\tENTER CUSTOMER'S DATA" << endl;
			cout << "\t**************************************************" << endl;
			C.open ("customer.dat" , ios::out | ios::app);
			cust.input ();
			C.write ((char*)&cust , sizeof (cust));
			C.close ();
			cout << "\n\t**************************************************";
			cout << "\n\t\tENTER CUSTOMER'S TICKET REGISTRATION DATA" << endl;
			cout << "\t**************************************************" << endl;
			R.open ("registration.dat" , ios::out | ios::app);
			reg.input ();
			R.write ((char*)& reg , sizeof (reg));
			R.close ();
			cout << endl << endl << "Press any key to return to main manu..." << endl;
			_getch ();
			break;
		case '2':
			system("cls");
			cout << "\n\t**************************************************";
			cout << "\n\t\tShowing Data" << endl;
			cout << "\t**************************************************" << endl;
			C.open ("customer.dat" , ios::in);
			R.open ("registration.dat" , ios::in);
			while (C.read ((char*)&cust , sizeof (cust)) )
			{
				cout << "\n\t**************************************************";
				cout << "\n\t\tCustomer information" << endl;
				cout << "\t**************************************************" << endl;
				cust.show ();
				
			}
			while (R.read ((char*)&reg , sizeof (reg)))
			{
				reg.show ();
				cout << endl << endl << endl << endl << endl << endl;
			}

			R.close ();
			C.close ();
			cout << "press any key to return to main manu..." << endl;
			_getch ();
			break;
		case '3':
			system("cls");
			//	cout << "------------Searching--------------------";
			L:
			system ("cls");
			cout << "\n\t**************************************************";
			cout << "\n\t\tSerching Data" << endl;
			cout << "\t**************************************************" << endl;
			cout << "\n\t1) Customer's Data.\n\n\t2) Customer's Registration Data.\n\n\t3) Return to Main Menu.\n";
			cout << "\n\tEnter your choice: ";
			cin >> choice;
			switch (choice)
			{
				case '1':
				system ("cls");
				cout << "\tEnter customer's id: ";
				cin >> match;
				cin.ignore ();
				C.open ("customer.dat" , ios::in);
				while (C.read ((char*)&cust , sizeof (cust)))
				{
					if (match == cust.get_cust_id ())
					{
						cust.show ();
					}
					
				}
				
				C.close ();
				cout << "\n\tPress any key to return..." << endl;
				_getch ();
				goto L;
				break;
				
				case '2':
				system ("cls");
				cout << "\tEnter customer's registration id: ";
				cin >> match;
				cin.ignore ();
				R.open ("registration.dat" , ios::in);
				while (R.read ((char*)&reg , sizeof (reg)))
				{
					if (match == reg.get_reg_id())
					{
						reg.show ();
					}
				}
				R.close ();
				cout<< "\tPress any key to return..." << endl;
				_getch ();
				goto L;
				break;
				
				case '3':
				goto flag1;
				break;
				default:
				cout << "Invalid Input..." << endl;
				getch();
			}

		case '4':
			La:
			system ("cls");
			cout << "\n\t**************************************************";
			cout << "\n\t\tModifying Data" << endl;
			cout << "\t**************************************************" << endl;
			cout << "\n\t1) Modify customer's data.\n\n\t2) Modify customer's registration data.\n\n\t3) return to main manu.\n";
			cout << "\n\tEnter your choice: ";
			cin >> choice;
			switch (choice)
			{
				case '1':
					system ("cls");
					cout << "\tEnter customer's id to be modified: ";
					cin >> match;
					cin.ignore ();
					while (cin.fail ())
					{
						cin.clear ();
						cin.ignore (100 , '\n');
					}
					mehroz = 0;
					C.open ("customer.dat" , ios::in|ios::out|ios::binary|ios::ate);
					C.seekg (0);
					while (C.read ((char*)&cust , sizeof (cust)))
					{
						if (match == cust.get_cust_id ())
						{
							int x = sizeof (cust);
							C.seekp (-x ,  ios::cur);
							system("cls");
							cout << "\n\tEnter new values:-" << endl << endl;
							cust2.input ();
							C.write ((char*)&cust2 , sizeof (cust2));
							cout << "\n\tData modified successfully..." << endl;
							++mehroz;
						}
						if (mehroz != 0)
							break;
					}
					C.close ();
					cout << "\n\tPress any key to return..." << endl;
					_getch ();
					goto La;
					break;
				case '2':
					system ("cls");
					mehroz = 0;
					cout << "\n\tEnter customer's registration id to be modified: ";
					cin >> match;
					cin.ignore ();
					R.open ("registration.dat" , ios::in | ios::out | ios::binary | ios::ate);
					R.seekg (0);
					while (R.read ((char*)&reg , sizeof (reg)))
					{
						if (match == reg.get_reg_id())
						{
							int x = sizeof (reg);
							R.seekp (-x , ios::cur);
							system("cls");
							cout << "\n\tEnter new values:-" << endl << endl;
							reg2.input ();
							R.write ((char*)&reg2 , sizeof (reg2));
							++mehroz;
							system("cls");
							cout << "\n\n\tData modified successfully..." << endl;
						}

						if (mehroz != 0)
							break;
					}
					R.close ();
					cout << "\n\tPress any key to return..." << endl;
					_getch ();
					goto La;
					break;
				case '3':
					goto flag1;
					break;
					default:
					cout << "Invalid Input..." << endl;

				}
			break;
		case '5':
			system ("cls");
			flag2:
			system ("cls");
			cout << "\n\t**************************************************";
			cout << "\n\t\tDeleting Data" << endl;
			cout << "\t**************************************************" << endl;
			cout << "\n\n\t1) Delete Customer's Data.\n\n\t2) Delete customer's Registration Data.\n\n\t3) Return to Main Menu.\n";
			cout << "\n\tEnter your choice: ";
			cin >> choice;
			cin.ignore ();
			switch (choice)
			{
				system("cls");
			case '1':
				system("cls");
				cout << "\n\tEnter the customer's id to delete data: ";
				cin >> match;
				C.open ("customer.dat" , ios::in|ios::binary);
				C1.open ("temp_customer.dat" , ios::out | ios::binary );
				while (C.read ((char*)&cust , sizeof (cust)))
				{
					if (match != cust.get_cust_id ())
					{
						C1.write ((char*)&cust , sizeof (cust));
					}
				}
				
				C1.close ();
				C.close ();
				remove ("customer.dat");
				rename ("temp_customer.dat" , "customer.dat");
				system("cls");
				cout << "\n\n\tData Deleted Successfully";
				Sleep(2000);
				goto flag2;
				break;
			case '2':
				system("cls");
				cout << "\n\tEnter the customer's registration id to delete data: ";
				cin >> match;
				R.open ("customer.dat" , ios::in | ios::binary);
				R1.open ("temp_registration.dat" , ios::out | ios::binary);
				while (R.read ((char*)&reg, sizeof (reg)))
				{
					if (match != reg.get_reg_id())
					{
						R1.write ((char*)&reg , sizeof (reg));
					}
				}

				R1.close ();
				R.close ();
				remove ("registration.dat");
				rename ("temp_registration.dat" , "registration.dat");
				system("cls");
				cout << "\n\n\tData Deleted Successfully";
				Sleep(2000);
				goto flag2;
				break;
			default:
				cout << "Invalid input..." << endl;
			}

			break;
				
		case '6':
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                           AIRLINE RESERVATION SYSTEM                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                 Muhammad Ahmad Saleem                 |@@\n";
			cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
			cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
			exit (0);
		default:
			cout << "Invalid input..." << endl;
		
		}
	}
		_getch ();
}
//With DataBase
