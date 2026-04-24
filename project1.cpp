#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int choice;

    // CUSTOMER DATA MEMORY

    int total_customer = 100;
    int index = 0;
    string name[100];    
    string phone[100];   
    string address[100]; 
    string pass[100];    
    int id_no[100];

    // ORDER DATA MEMORY

    int quantity[100];
    string gap[100];         
    string delivery_date[100];

    // BILL DATA MEMORY

    int total_bill[100];    
    int paid_amount[100]; 
    string bill_status[100]; 

    // OWNER DATA MEMORY

    string owner_username = "admin"; 
    string owner_password = "123";   

    // DAILY REPORT MEMORY

    int report_total_canes[100];
    int report_paid_canes[100];
    int report_labour1[100];
    int report_labour2[100];
    int report_petrol[100];
    int report_earning[100];
    int report_remaining[100];
    string report_date[100];
    int report_index = 0;

    // MONTHLY REPORT MEMORY

    int monthly_electric[12]; // bijli ka bill
    int monthly_labour[12];   // total labour cost
    int monthly_petrol[12];   // total petrol cost
    int monthly_others[12];   // other costs
    int monthly_earning[12];  // total earning
    int monthly_profit[12];   // earning - all costs
    string monthly_name[12];  // month ka naam
    int monthly_index = 0;    // kitne months save hain

    // Default values set karo sab arrays ki
    for (int i = 0; i < 100; i++)
    {
        quantity[i] = 0;
        total_bill[i] = 0;
        paid_amount[i] = 0;
        bill_status[i] = "Pending";
        gap[i] = "N/A";
        delivery_date[i] = "N/A";
    }

    // MAIN MENU LOOP

    while (true)
    {
        system("cls");
        cout << "=================================================" << endl;
        cout << "            WATER FILTRATION PLANT               " << endl;
        cout << "=================================================" << endl << endl;
        cout << "[1] OWNER" << endl;
        cout << "[2] CUSTOMER" << endl;
        cout << "[0] Exit" << endl << endl;
        cout << "=================================================" << endl;
        cout << "           Enter Your Choice: ";
        cin >> choice;
        cout << endl;

        // 0 press karo to program band
        if (choice == 0)
        {
            cout << "Goodbye!" << endl;
            break;
        }

        // =============================================
        // CUSTOMER PANEL
        // Registration aur Login yahan hoga
        // =============================================
        if (choice == 2)
        {
            while (true)
            {
                system("cls");
                cout << "================================================" << endl;
                cout << "           *** Customer Panel ***               " << endl;
                cout << "================================================" << endl << endl;
                cout << "[1] New Customer Registration" << endl;
                cout << "[2] Existing Customer Login" << endl;
                cout << "[0] Back" << endl << endl;
                cout << "=================================================" << endl;
                cout << "           Enter Your Choice: ";
                cin >> choice;
                cout << endl;

                // -----------------------------------------------
                // NEW CUSTOMER REGISTRATION
                // Customer apni info deta hai, ID automatically milti hai
                // -----------------------------------------------
                if (choice == 1)
                {
                    system("cls");
                    cout << "=================================================" << endl;
                    cout << "         *** New Customer Registration ***        " << endl;
                    cout << "=================================================" << endl << endl;

                    cout << "Enter Name                   : ";
                    cin >> name[index];
                    cout << "Enter Phone Number           : ";
                    cin >> phone[index];
                    cout << "Enter Complete Home Address  : ";
                    cin >> address[index];
                    cout << "Enter Password               : ";
                    cin >> pass[index];

                    id_no[index] = 1001 + index;

                    cout << endl;
                    cout << "Account Created! Your ID: | " << id_no[index] << " |" << endl << endl;
                    cout << "[0] Back" << endl;
                    cin >> choice;

                    index++; // agle customer ke liye index badho
                }

                // -----------------------------------------------
                // EXISTING CUSTOMER LOGIN
                // 5 galat tries ke baad program band ho jata hai
                // 0 press karo to wapis jao
                // -----------------------------------------------
                else if (choice == 2)
                {
                    system("cls");
                    cout << "=================================================" << endl;
                    cout << "              *** Customer Login ***              " << endl;
                    cout << "=================================================" << endl << endl;

                    int attempts = 0; // kitni baar galat dala

                    while (attempts < 5)
                    {
                        int id;
                        string password;

                        cout << "Enter Your ID (0 to Back) : ";
                        cin >> id;

                        // 0 press karo to wapis customer panel
                        if (id == 0)
                        {
                            break;
                        }

                        cout << "Enter Password            : ";
                        cin >> password;
                        cout << endl;

                        // -----------------------------------------------
                        // FORGOT PASSWORD OPTION
                        // Phone number se ID aur password dhundhta hai
                        // -----------------------------------------------
                        cout << "[0] Forgot Password" << endl;
                        cout << "[1] Login" << endl;
                        cout << "Enter Choice: ";
                        int login_choice;
                        cin >> login_choice;
                        cout << endl;

                        if (login_choice == 0)
                        {
                            cout << "Enter Your Phone Number: ";
                            string temp_phone;
                            cin >> temp_phone;

                            int found = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (temp_phone == phone[i])
                                {
                                    found = i;
                                    break;
                                }
                            }

                            if (found == -1)
                            {
                                cout << "Phone Number Not Found!" << endl << endl;
                            }
                            else
                            {
                                cout << "Your ID       : " << id_no[found] << endl;
                                cout << "Your Password : " << pass[found] << endl << endl;
                            }
                        }
                        else
                        {
                            // -----------------------------------------------
                            // LOGIN CHECK
                            // Poore array mein ID aur password dhundhta hai
                            // logged_index = -1 matlab koi nahi mila
                            // -----------------------------------------------
                            int logged_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (id == id_no[i] && password == pass[i])
                                {
                                    logged_index = i;
                                    break;
                                }
                            }

                            if (logged_index == -1)
                            {
                                // Galat password - attempts badho
                                attempts++;
                                cout << "Invalid ID / Password!" << endl;
                                cout << "Attempts Left: " << 5 - attempts << endl << endl;

                                // 5 baar galat - program band
                                if (attempts == 5)
                                {
                                    cout << "Too Many Attempts! Program Closing..." << endl;
                                    return 0;
                                }
                            }
                            else
                            {
                                // -----------------------------------------------
                                // CUSTOMER DASHBOARD
                                // Login hone ke baad yeh menu dikhega
                                // -----------------------------------------------
                                while (true)
                                {
                                    system("cls");
                                    cout << "=================================================" << endl;
                                    cout << "   Welcome, " << name[logged_index] << "!" << endl;
                                    cout << "=================================================" << endl << endl;
                                    cout << "[1] Place Order" << endl;
                                    cout << "[2] Update Order" << endl;
                                    cout << "[3] Bill Status" << endl;
                                    cout << "[4] Update Profile" << endl;
                                    cout << "[5] View Cane Price" << endl;
                                    cout << "[0] Logout" << endl << endl;
                                    cout << "=================================================" << endl;
                                    cout << "           Enter Your Choice: ";
                                    cin >> choice;
                                    cout << endl;

                                    // -----------------------------------------------
                                    // PLACE ORDER
                                    // Customer canes, gap aur date deta hai
                                    // Neeche order summary show hoti hai
                                    // -----------------------------------------------
                                    if (choice == 1)
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "               *** Place Order ***               " << endl;
                                        cout << "=================================================" << endl << endl;

                                        cout << "How Many Canes                             : ";
                                        cin >> quantity[logged_index];

                                        cout << "Delivery Gap (e.g., daily, 2 days, 5 days) : ";
                                        cin >> gap[logged_index];

                                        cout << "Start Date (e.g., 19-04-2026)              : ";
                                        cin >> delivery_date[logged_index];

                                        // Total bill calculate karo
                                        total_bill[logged_index] = quantity[logged_index] * 200;
                                        bill_status[logged_index] = "Pending";

                                        cout << endl;
                                        cout << "=================================================" << endl;
                                        cout << "              *** Order Summary ***              " << endl;
                                        cout << "=================================================" << endl;
                                        cout << "Name        : " << name[logged_index] << endl;
                                        cout << "Phone       : " << phone[logged_index] << endl;
                                        cout << "Address     : " << address[logged_index] << endl;
                                        cout << "Canes       : " << quantity[logged_index] << endl;
                                        cout << "Gap         : " << gap[logged_index] << endl;
                                        cout << "Start Date  : " << delivery_date[logged_index] << endl;
                                        cout << "Total/Order : Rs. " << total_bill[logged_index] << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "[0] Back" << endl;
                                        cin >> choice;
                                    }

                                    // -----------------------------------------------
                                    // UPDATE ORDER
                                    // Purana order dikhata hai, naya dene ka option
                                    // Cancel order se sab kuch reset ho jata hai
                                    // -----------------------------------------------
                                    else if (choice == 2)
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "              *** Update Order ***               " << endl;
                                        cout << "=================================================" << endl << endl;

                                        cout << "--- Current Order ---" << endl;
                                        cout << "Canes      : " << quantity[logged_index] << endl;
                                        cout << "Gap        : " << gap[logged_index] << endl;
                                        cout << "Start Date : " << delivery_date[logged_index] << endl << endl;

                                        cout << "[1] Update Order" << endl;
                                        cout << "[2] Cancel Order" << endl;
                                        cout << "[0] Back" << endl;
                                        cout << "Enter Choice: ";
                                        cin >> choice;
                                        cout << endl;

                                        if (choice == 1)
                                        {
                                            cout << "How Many Canes                             : ";
                                            cin >> quantity[logged_index];

                                            cout << "Delivery Gap (e.g., daily, 2 days, 5 days): ";
                                            cin >> gap[logged_index];

                                            cout << "Start Date                                 : ";
                                            cin >> delivery_date[logged_index];

                                            total_bill[logged_index] = quantity[logged_index] * 200;

                                            cout << endl << "Order Updated Successfully!" << endl << endl;
                                            cout << "[0] Back" << endl;
                                            cin >> choice;
                                        }
                                        else if (choice == 2)
                                        {
                                            // Order cancel - sab reset ho jata hai
                                            quantity[logged_index] = 0;
                                            gap[logged_index] = "N/A";
                                            delivery_date[logged_index] = "N/A";
                                            total_bill[logged_index] = 0;
                                            bill_status[logged_index] = "Pending";

                                            cout << "Order Cancelled Successfully!" << endl << endl;
                                            cout << "[0] Back" << endl;
                                            cin >> choice;
                                        }
                                    }

                                    // -----------------------------------------------
                                    // BILL STATUS
                                    // Owner jo update karta hai woh yahan dikhta hai
                                    // Total, paid, remaining, status sab show hoga
                                    // -----------------------------------------------
                                    else if (choice == 3)
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "               *** Bill Status ***               " << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "Start Date      : " << delivery_date[logged_index] << endl;
                                        cout << "Canes Per Order : " << quantity[logged_index] << endl;
                                        cout << "Delivery Gap    : " << gap[logged_index] << endl;
                                        cout << "Total Amount    : Rs. " << total_bill[logged_index] << endl;
                                        cout << "Amount Paid     : Rs. " << paid_amount[logged_index] << endl;
                                        cout << "Remaining       : Rs. " << total_bill[logged_index] - paid_amount[logged_index] << endl;
                                        cout << "Payment Status  : " << bill_status[logged_index] << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "[0] Back" << endl;
                                        cin >> choice;
                                    }

                                    // -----------------------------------------------
                                    // UPDATE PROFILE
                                    // Name, phone, address change kar sakte hain
                                    // -----------------------------------------------
                                    else if (choice == 4)
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "              *** Update Profile ***             " << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "[1] Update Name" << endl;
                                        cout << "[2] Update Phone" << endl;
                                        cout << "[3] Update Address" << endl;
                                        cout << "[0] Back" << endl;
                                        cout << "Enter Choice: ";
                                        cin >> choice;
                                        cout << endl;

                                        if (choice == 1)
                                        {
                                            cout << "Enter New Name: ";
                                            cin >> name[logged_index];
                                            cout << "Name Updated Successfully!" << endl;
                                        }
                                        else if (choice == 2)
                                        {
                                            cout << "Enter New Phone: ";
                                            cin >> phone[logged_index];
                                            cout << "Phone Updated Successfully!" << endl;
                                        }
                                        else if (choice == 3)
                                        {
                                            cout << "Enter New Address: ";
                                            cin >> address[logged_index];
                                            cout << "Address Updated Successfully!" << endl;
                                        }

                                        cout << endl << "[0] Back" << endl;
                                        cin >> choice;
                                    }

                                    // -----------------------------------------------
                                    // VIEW CANE PRICE
                                    // Fixed rate dikhata hai - 200 per cane
                                    // Free home delivery ka notice bhi hai
                                    // -----------------------------------------------
                                    else if (choice == 5)
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "               *** Cane Price ***               " << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "Price     : Rs. 200 Per Cane" << endl;
                                        cout << "Note      : Only Available Canes" << endl;
                                        cout << "Delivery  : Free Home Delivery Available" << endl;
                                        cout << "=================================================" << endl << endl;
                                        cout << "[0] Back" << endl;
                                        cin >> choice;
                                    }

                                    // Logout - customer dashboard band ho jata hai
                                    // Wapis customer panel pe aao
                                    else if (choice == 0)
                                    {
                                        cout << "Logged Out Successfully!" << endl;
                                        break; // customer dashboard se bahar, customer panel pe wapis
                                    }
                                }
                                break; // login loop band karo
                            }
                        }
                    }
                }

                // 0 press - wapis main menu
                else if (choice == 0)
                {
                    break; // customer panel se bahar, main menu pe wapis
                }
            }
        }

        // =============================================
        // OWNER PANEL
        // Admin login ke baad owner ka poora dashboard
        // =============================================
        else if (choice == 1)
        {
            system("cls");
            cout << "=================================================" << endl;
            cout << "               *** Owner Login ***               " << endl;
            cout << "=================================================" << endl << endl;

            // -----------------------------------------------
            // OWNER LOGIN CHECK
            // 5 galat tries ke baad program band ho jata hai
            // 0 likho to wapis main menu
            // -----------------------------------------------
            int attempts = 0;

            while (attempts < 5)
            {
                string o_user, o_pass;

                cout << "Enter Username (0 to Back): ";
                cin >> o_user;

                if (o_user == "0")
                {
                    break; // wapis main menu
                }

                cout << "Enter Password            : ";
                cin >> o_pass;
                cout << endl;

                if (o_user != owner_username || o_pass != owner_password)
                {
                    attempts++;
                    cout << "Invalid Username / Password!" << endl;
                    cout << "Attempts Left: " << 5 - attempts << endl << endl;

                    if (attempts == 5)
                    {
                        cout << "Too Many Attempts! Program Closing..." << endl;
                        return 0;
                    }
                }
                else
                {
                    // -----------------------------------------------
                    // OWNER DASHBOARD
                    // Sab options yahan hain
                    // -----------------------------------------------
                    while (true)
                    {
                        system("cls");
                        cout << "=================================================" << endl;
                        cout << "              *** Owner Dashboard ***             " << endl;
                        cout << "=================================================" << endl << endl;
                        cout << "[1] Daily Report" << endl;
                        cout << "[2] Update Customer Reports" << endl;
                        cout << "[3] Monthly Report" << endl;
                        cout << "[4] Update Username / Password" << endl;
                        cout << "[0] Logout" << endl << endl;
                        cout << "=================================================" << endl;
                        cout << "           Enter Your Choice: ";
                        cin >> choice;
                        cout << endl;

                        // -----------------------------------------------
                        // DAILY REPORT
                        // Owner date, canes, paid canes, labour, petrol deta hai
                        // System khud total, earning, remaining calculate karta hai
                        // -----------------------------------------------
                        if (choice == 1)
                        {
                            system("cls");
                            cout << "=================================================" << endl;
                            cout << "               *** Daily Report ***              " << endl;
                            cout << "=================================================" << endl << endl;

                            int r = report_index; // current report slot

                            cout << "Enter Date (e.g., 19-04-2026)  : ";
                            cin >> report_date[r];

                            cout << "Total Canes Delivered Today    : ";
                            cin >> report_total_canes[r];

                            cout << "Paid Canes (Price Received)    : ";
                            cin >> report_paid_canes[r];

                            cout << "Labour 1 Cost (Rs.)            : ";
                            cin >> report_labour1[r];

                            cout << "Labour 2 Cost (Rs.)            : ";
                            cin >> report_labour2[r];

                            cout << "Petrol Cost (Rs.)              : ";
                            cin >> report_petrol[r];

                            // Total earning = paid canes * 200
                            report_earning[r] = report_paid_canes[r] * 200;

                            // Remaining = earning - labour1 - labour2 - petrol
                            report_remaining[r] = report_earning[r] - report_labour1[r] - report_labour2[r] - report_petrol[r];

                            cout << endl;
                            cout << "=================================================" << endl;
                            cout << "              *** Report Summary ***             " << endl;
                            cout << "=================================================" << endl;
                            cout << "Date              : " << report_date[r] << endl;
                            cout << "Total Canes       : " << report_total_canes[r] << endl;
                            cout << "Paid Canes        : " << report_paid_canes[r] << endl;
                            cout << "Total Earning     : Rs. " << report_earning[r] << endl;
                            cout << "Labour 1 Cost     : Rs. " << report_labour1[r] << endl;
                            cout << "Labour 2 Cost     : Rs. " << report_labour2[r] << endl;
                            cout << "Petrol Cost       : Rs. " << report_petrol[r] << endl;
                            cout << "Daily Remaining   : Rs. " << report_remaining[r] << endl;
                            cout << "=================================================" << endl << endl;

                            report_index++; // agli report ke liye

                            cout << "[0] Back" << endl;
                            cin >> choice;
                        }

                        // -----------------------------------------------
                        // UPDATE CUSTOMER REPORTS
                        // Sab registered customers ki list dikhata hai
                        // Owner customer ID select karta hai aur update karta hai
                        // Jo update hoga woh customer ke bill status mein dikhega
                        // -----------------------------------------------
                        else if (choice == 2)
                        {
                            system("cls");
                            cout << "=================================================" << endl;
                            cout << "           *** Update Customer Reports ***        " << endl;
                            cout << "=================================================" << endl << endl;

                            if (index == 0)
                            {
                                cout << "No Customers Registered Yet!" << endl;
                            }
                            else
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    cout << "ID: " << id_no[i]
                                         << " | Name: " << name[i]
                                         << " | Phone: " << phone[i]
                                         << " | Canes: " << quantity[i]
                                         << " | Status: " << bill_status[i] << endl;
                                }

                                cout << endl;
                                cout << "Enter Customer ID to Update (0 to Back): ";
                                int cust_id;
                                cin >> cust_id;

                                if (cust_id != 0)
                                {
                                    int cust_index = -1;
                                    for (int i = 0; i < index; i++)
                                    {
                                        if (cust_id == id_no[i])
                                        {
                                            cust_index = i;
                                            break;
                                        }
                                    }

                                    if (cust_index == -1)
                                    {
                                        cout << "Customer Not Found!" << endl;
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "=================================================" << endl;
                                        cout << "Customer : " << name[cust_index] << endl;
                                        cout << "=================================================" << endl << endl;

                                        cout << "--- Previous Data ---" << endl;
                                        cout << "Canes Ordered  : " << quantity[cust_index] << endl;
                                        cout << "Total Bill     : Rs. " << total_bill[cust_index] << endl;
                                        cout << "Amount Paid    : Rs. " << paid_amount[cust_index] << endl;
                                        cout << "Status         : " << bill_status[cust_index] << endl << endl;

                                        cout << "--- Add New Delivery Data ---" << endl;

                                        string new_date;
                                        int canes_delivered;
                                        string pay_status;

                                        cout << "Date                          : ";
                                        cin >> new_date;

                                        cout << "Canes Delivered               : ";
                                        cin >> canes_delivered;

                                        cout << "Payment Status (Paid/Pending) : ";
                                        cin >> pay_status;

                                        // Total bill mein nai delivery add karo
                                        total_bill[cust_index] += canes_delivered * 200;

                                        if (pay_status == "Paid" || pay_status == "paid")
                                        {
                                            // Paid hai toh paid_amount mein add karo
                                            paid_amount[cust_index] += canes_delivered * 200;
                                            bill_status[cust_index] = "Paid";
                                        }
                                        else
                                        {
                                            bill_status[cust_index] = "Pending";
                                        }

                                        cout << endl << "Customer Report Updated!" << endl;
                                        cout << "New Total Bill : Rs. " << total_bill[cust_index] << endl;
                                        cout << "Amount Paid    : Rs. " << paid_amount[cust_index] << endl;
                                        cout << "Remaining      : Rs. " << total_bill[cust_index] - paid_amount[cust_index] << endl;
                                        cout << "Status         : " << bill_status[cust_index] << endl;
                                    }
                                }
                            }

                            cout << endl << "[0] Back" << endl;
                            cin >> choice;
                        }

                        // -----------------------------------------------
                        // MONTHLY REPORT
                        // Monthly costs aur earning track hoti hai
                        // Sab costs minus karke profit ya loss batata hai
                        // -----------------------------------------------
                        else if (choice == 3)
                        {
                            system("cls");
                            cout << "=================================================" << endl;
                            cout << "              *** Monthly Report ***             " << endl;
                            cout << "=================================================" << endl << endl;

                            int m = monthly_index;

                            cout << "Month Name (e.g., April-2026)  : ";
                            cin >> monthly_name[m];

                            cout << "Total Earning This Month (Rs.) : ";
                            cin >> monthly_earning[m];

                            cout << "Electric Cost (Rs.)            : ";
                            cin >> monthly_electric[m];

                            cout << "Labour Cost (Rs.)              : ";
                            cin >> monthly_labour[m];

                            cout << "Petrol Cost (Rs.)              : ";
                            cin >> monthly_petrol[m];

                            cout << "Other Costs (Rs.)              : ";
                            cin >> monthly_others[m];

                            // Profit = earning - sab costs
                            monthly_profit[m] = monthly_earning[m] - monthly_electric[m] - monthly_labour[m] - monthly_petrol[m] - monthly_others[m];

                            cout << endl;
                            cout << "=================================================" << endl;
                            cout << "            *** Monthly Summary ***              " << endl;
                            cout << "=================================================" << endl;
                            cout << "Month          : " << monthly_name[m] << endl;
                            cout << "Total Earning  : Rs. " << monthly_earning[m] << endl;
                            cout << "Electric Cost  : Rs. " << monthly_electric[m] << endl;
                            cout << "Labour Cost    : Rs. " << monthly_labour[m] << endl;
                            cout << "Petrol Cost    : Rs. " << monthly_petrol[m] << endl;
                            cout << "Other Costs    : Rs. " << monthly_others[m] << endl;
                            cout << "------------------------------------------------" << endl;

                            // Profit ya loss dikhao
                            if (monthly_profit[m] > 0)
                            {
                                cout << "Profit         : Rs. " << monthly_profit[m] << endl;
                            }
                            else if (monthly_profit[m] < 0)
                            {
                                // Loss positive number mein dikhao
                                cout << "Loss           : Rs. " << monthly_profit[m] * -1 << endl;
                            }
                            else
                            {
                                cout << "No Profit / No Loss This Month" << endl;
                            }

                            cout << "=================================================" << endl << endl;

                            monthly_index++;

                            cout << "[0] Back" << endl;
                            cin >> choice;
                        }

                        // -----------------------------------------------
                        // UPDATE USERNAME / PASSWORD
                        // Pehle purana verify karo, phir naya dene do
                        // 5 galat tries ke baad program band ho jata hai
                        // 0 likho to back jao
                        // -----------------------------------------------
                        else if (choice == 4)
                        {
                            system("cls");
                            cout << "=================================================" << endl;
                            cout << "          *** Update Username / Password ***      " << endl;
                            cout << "=================================================" << endl << endl;

                            int pass_attempts = 0;

                            while (pass_attempts < 5)
                            {
                                string cur_user, cur_pass;

                                cout << "Enter Current Username (0 to Back): ";
                                cin >> cur_user;

                                if (cur_user == "0")
                                {
                                    break;
                                }

                                cout << "Enter Current Password            : ";
                                cin >> cur_pass;
                                cout << endl;

                                if (cur_user != owner_username || cur_pass != owner_password)
                                {
                                    pass_attempts++;
                                    cout << "Invalid Current Username / Password!" << endl;
                                    cout << "Attempts Left: " << 5 - pass_attempts << endl << endl;

                                    if (pass_attempts == 5)
                                    {
                                        cout << "Too Many Attempts! Program Closing..." << endl;
                                        return 0;
                                    }
                                }
                                else
                                {
                                    cout << "Enter New Username : ";
                                    cin >> owner_username;
                                    cout << "Enter New Password : ";
                                    cin >> owner_password;
                                    cout << endl;
                                    cout << "Username / Password Updated Successfully!" << endl;
                                    break;
                                }
                            }

                            cout << endl << "[0] Back" << endl;
                            cin >> choice;
                        }

                        // Logout - owner dashboard band, wapis main menu
                        else if (choice == 0)
                        {
                            cout << "Logged Out Successfully!" << endl;
                            break; // owner dashboard se bahar
                        }
                    }
                    break; // owner login loop band karo
                }
            }
        }

    } // main menu while loop end

    return 0;
}