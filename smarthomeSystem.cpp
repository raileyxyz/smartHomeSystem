#include <iostream>
using namespace std;
int main()

{
	int choice;
    
	cout << "==================Welcome!==================\n" << endl;
    cout << "     >> Smart Home Automation System <<" << endl;
    cout << "============================================" << endl;
    cout << "\n[1] Light Control" << endl;
    cout << "[2] Thermostat Settings " << endl;
    cout << "[3] Energy Usage Calculation " << endl;
    cout << "[4] Security System Login " << endl;
    cout << "[5] Appliance Control " << endl;
    cout << "[6] Exit " << endl;
    cout << "\n============================================" << endl;
	
	cout << "Enter your choice: ";
    cin >> choice;
    
    system("cls");
    if (choice == 1) {
    	
    int choice1;
    
	cout << "===================================================" << endl;
    cout << "\t\t>> Light Control <<" << endl;
    cout << "===================================================" << endl;
	
    cout << "Enter the current hour (0-23): ";
    cin >> choice1;
    
    if (choice1 < 0 || choice1 > 23) {
    	cout << "\nInvalid hour. Please enter a number between 0 and 23.\n" << endl;
    	cout << "---------------------------------------------------" << endl;
    	cout << "\t\tExiting the program." << endl;
    	cout << "---------------------------------------------------" << endl;
    	system("pause");
		system("cls");
		main();
		return 0;
	}

    if (choice1 >= 18 || choice1 <= 6) {
        cout << "\nIt's between 6 PM and 6 AM. The lights should be ON.\n\n";
        cout << "---------------------------------------------------" << endl;
    	cout << "\t\tExiting the program." << endl;
    	cout << "---------------------------------------------------" << endl;
        system("pause");
		system("cls");
		main();
    } 
		else {
        cout << "\nIt's outside 6 PM to 6 AM. The lights remain OFF.\n\n";
        cout << "---------------------------------------------------" << endl;
    	cout << "\t\tExiting the program." << endl;
    	cout << "---------------------------------------------------" << endl;
        system("pause");
		system("cls");
		main();
    }
    
		return 0;
	}
		else if (choice == 2) {
			
		int choice2;
			
		cout << "=========================================================" << endl;
    	cout << "\t\t >> Thermostat Settings <<" << endl;
   		cout << "=========================================================" << endl;
   		cout << "\n\t  [1] Cool, [2] Heat, [3] Fan, [4] Off " << endl;
    	cout << "---------------------------------------------------------" << endl;
    	cout << "Select a mode: ";
    	cin >> choice2;
    
    	switch (choice2) {
    		case 1:
    			cout << "\nCool mode activated.\n" << endl;
    			cout << "---------------------------------------------------------" << endl;
    			cout << "\t\t  Exiting the program." << endl;
    			cout << "---------------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
    			break;
    		case 2:
    			cout << "\nHeat mode activated.\n" << endl;
    			cout << "---------------------------------------------------------" << endl;
    			cout << "\t\t  Exiting the program." << endl;
    			cout << "---------------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
    			break;
    		case 3:
    			cout << "\nFan mode activated.\n" << endl;
    			cout << "---------------------------------------------------------" << endl;
    			cout << "\t\t  Exiting the program." << endl;
    			cout << "---------------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
    			break;
    		case 4:
    			cout << "\nThermostat turned off.\n" << endl;
    			cout << "---------------------------------------------------------" << endl;
    			cout << "\t\t  Exiting the program." << endl;
    			cout << "---------------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
    			break;
    		default:
            	cout << "\nInvalid choice! Please enter a number between 1 and 4.\n" << endl;
            	cout << "---------------------------------------------------------" << endl;
    			cout << "\t\t  Exiting the program." << endl;
    			cout << "---------------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
            	break;
	}
		}
		else if (choice == 3) {
			
		int choice3, x;
		double totalEnergy = 0;
			
    		cout << "================================================" << endl;
    		cout << "\t >> Energy Usage Calculation <<" << endl;
    		cout << "================================================\n" << endl;

    		for ( x = 1; x <= 7; x++) {
        	cout << "Enter energy consumption for day " << x << " (in kWh): ";
        	cin >> choice3;
        	totalEnergy = totalEnergy + choice3;
    	}
    			cout << "------------------------------------------------" << endl;
    			cout << "\nTotal energy usage for the week: " << totalEnergy << " kWh\n\n";
    			cout << "------------------------------------------------" << endl;
    			cout << "\t     Exiting the program." << endl;
    			cout << "------------------------------------------------" << endl;
        		system("pause");
				system("cls");
				main();
		}
		else if (choice == 4) {
			
		int choice4, attempts = 3, correctPIN = 123;
			
		cout << "===============================================" << endl;
    	cout << "\t  >> Security System Login <<" << endl;
    	cout << "===============================================" << endl;
	
   		while (attempts > 0) {
        	cout << "Enter your PIN: ";
        	cin >> choice4;

        if (choice4 == correctPIN) {
            cout << "Access Granted.\n\n";
            cout << "-----------------------------------------------" << endl;
    		cout << "\t\t   WELCOME! " << endl;
    		cout << "-----------------------------------------------" << endl;
            system("pause");
			system("cls");
			main();
            return 0;
        } else {
            attempts--;
            cout << "Incorrect PIN. Remaining attempts: " << attempts << "\n";
            cout << "\n-----------------------------------------------" << endl;
            
        }
    }
		if (attempts == 0){
    	cout << "\nSystem locked due to too many failed attempts.\n";
    	cout << "\n-----------------------------------------------" << endl;
    	cout << "\t     Exiting the program.\n" << endl;
		system("pause");
		system("cls");
	}
		}
		else if (choice == 5) {
			
		int choice5;
			
			cout << "===========================================" << endl;
    		cout << "\t>> Appliance Control Menu<<" << endl;
    		cout << "===========================================" << endl;
        	
        do {
        	
       		cout << "\n[1] Turn ON the TV" << endl;
        	cout << "[2] Turn ON the Air Conditioner" << endl;
        	cout << "[3] Turn ON the Refrigerator" << endl;
        	cout << "[4] Exit" << endl;
        	cout << "\n-------------------------------------------" << endl;
        	cout << "Enter your choice (1-4): ";
        	cin >> choice5;

      
        	switch (choice5) {
            	case 1:
                	cout << "\nThe TV is now ON." << endl;
                	cout << "\n-------------------------------------------" << endl;
                	break;
            	case 2:
                	cout << "\nThe Air Conditioner is now ON." << endl;
                	cout << "\n-------------------------------------------" << endl;
                	break;
            	case 3:
                	cout << "\nThe Refrigerator is now ON." << endl;
                	cout << "\n-------------------------------------------" << endl;
                	break;
            	case 4:
            		cout << "\n-------------------------------------------" << endl;
                	cout << "\t   Exiting the program." << endl;
                	cout << "-------------------------------------------" << endl;
                	system("pause");
					system("cls");
					main();
                	break;
            	default:
            		cout << "-------------------------------------------" << endl;
                	cout << "\n\tInvalid choice! Please enter" << endl;
                	cout << " \t   a number between 1 and 4." << endl;
                	cout << "\n-------------------------------------------" << endl;
                	break;
        		}
    		} while (choice5 != 4);
		}
		
		else if (choice == 6) {
			cout << "===========================================" << endl;
            cout << "\t    >> EXIT PROGRAM <<" << endl;
            cout << "===========================================\n" << endl;
            cout << "\t\t THANKYOU!\n\n";
            system("pause");
			system("cls");
		}
		
		else {
			cout << "===================================================================" << endl;
			cout << "\n\tInvalid choice. Please enter a number between 1 and 6." << endl;
			cout << "\n===================================================================" << endl;
			cout << "\t\t\t     THANKYOU!\n\n";
			system("pause");
			system("cls");
			main();
		}
    return 0;
}
