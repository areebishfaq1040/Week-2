#include <iostream>
#include <conio.h>
using namespace std;

// FUNCTION: NEW CUSTOMER REGISTRATION
void registerCustomer(string name[], string phone[], string address[],
                      string pass[], int id_no[], int &index)
{
    system("cls");
    cout << "=================================================" << endl;
    cout << "         *** New Customer Registration ***       " << endl;
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
    int temp; cin >> temp;
    index++;
}

// FUNCTION: FORGOT PASSWORD
void forgotPassword(string phone[], int id_no[], string pass[], int index)
{
    string temp_phone;
    cout << "Enter Your Phone Number: ";
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
        cout << "Phone Number Not Found!" << endl << endl;
    else
    {
        cout << "Your ID       : " << id_no[found] << endl;
        cout << "Your Password : " << pass[found] << endl << endl;
    }
}

// FUNCTION: PLACE ORDER
void placeOrder(string name[], string phone[], string address[],
                int quantity[], string gap[], string delivery_date[],
                int total_bill[], string bill_status[], int logged_index)
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
    int temp; cin >> temp;
}

// FUNCTION: UPDATE ORDER
void updateOrder(int quantity[], string gap[], string delivery_date[],
                 int total_bill[], string bill_status[], int logged_index)
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
    int choice; cin >> choice;
    cout << endl;
    if (choice == 1)
    {
        cout << "How Many Canes                             : ";
        cin >> quantity[logged_index];
        cout << "Delivery Gap (e.g., daily, 2 days, 5 days) : ";
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

// FUNCTION: BILL STATUS
void billStatus(string delivery_date[], int quantity[], string gap[],
                int total_bill[], int paid_amount[], string bill_status[],
                int logged_index)
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
    int temp; cin >> temp;
}

// FUNCTION: UPDATE PROFILE
void updateProfile(string name[], string phone[], string address[], int logged_index)
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
    int choice; cin >> choice;
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

// FUNCTION: VIEW CANE PRICE
void viewCanePrice()
{
    system("cls");
    cout << "=================================================" << endl;
    cout << "               *** Cane Price ***                " << endl;
    cout << "=================================================" << endl << endl;
    cout << "Price     : Rs. 200 Per Cane" << endl;
    cout << "Note      : Only Available Canes" << endl;
    cout << "Delivery  : Free Home Delivery Available" << endl;
    cout << "=================================================" << endl << endl;
    cout << "[0] Back" << endl;
    int temp; cin >> temp;
}

// FUNCTION: CUSTOMER DASHBOARD
void customerDashboard(string name[], string phone[], string address[],
                       int quantity[], string gap[], string delivery_date[],
                       int total_bill[], int paid_amount[], string bill_status[],
                       string pass[], int logged_index)
{
    int choice;
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
        if (choice == 1)
            placeOrder(name, phone, address, quantity, gap, delivery_date,
                       total_bill, bill_status, logged_index);
        else if (choice == 2)
            updateOrder(quantity, gap, delivery_date, total_bill, bill_status, logged_index);
        else if (choice == 3)
            billStatus(delivery_date, quantity, gap, total_bill, paid_amount, bill_status, logged_index);
        else if (choice == 4)
            updateProfile(name, phone, address, logged_index);
        else if (choice == 5)
            viewCanePrice();
        else if (choice == 0)
        {
            cout << "Logged Out Successfully!" << endl;
            break;
        }
    }
}

// FUNCTION: CUSTOMER LOGIN
void customerLogin(string name[], string phone[], string address[],
                   string pass[], int id_no[], int quantity[], string gap[],
                   string delivery_date[], int total_bill[], int paid_amount[],
                   string bill_status[], int index)
{
    system("cls");
    cout << "=================================================" << endl;
    cout << "              *** Customer Login ***             " << endl;
    cout << "=================================================" << endl << endl;
    int attempts = 0;
    while (attempts < 5)
    {
        int id;
        string password;
        cout << "Enter Your ID (Press 0 for Return) :  ";
        cin >> id;
        if (id == 0) break;
        cout << "Enter Password                     :  ";
        cin >> password;
        cout << endl;
        int login_choice;
        cout << "[0] Forgot Password" << endl;
        cout << "[1] Login" << endl;
        cout << "Enter Choice: ";
        cin >> login_choice;
        cout << endl;
        if (login_choice == 0)
        {
            forgotPassword(phone, id_no, pass, index);
        }
        else
        {
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
                attempts++;
                cout << "Invalid ID / Password!" << endl;
                cout << "Attempts Left: " << 5 - attempts << endl << endl;
                if (attempts == 5)
                {
                    cout << "Too Many Attempts! Program Closing..." << endl;
                    exit(0);
                }
            }
            else
            {
                customerDashboard(name, phone, address, quantity, gap,
                                  delivery_date, total_bill, paid_amount,
                                  bill_status, pass, logged_index);
                break;
            }
        }
    }
}

// FUNCTION: DAILY REPORT
void dailyReport(string report_date[], int report_total_canes[],
                 int report_paid_canes[], int report_labour1[],
                 int report_labour2[], int report_petrol[],
                 int report_earning[], int report_remaining[],
                 int &report_index)
{
    system("cls");
    cout << "=================================================" << endl;
    cout << "               *** Daily Report ***              " << endl;
    cout << "=================================================" << endl << endl;
    int r = report_index;
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
    report_earning[r] = report_paid_canes[r] * 200;
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
    report_index++;
    cout << "[0] Back" << endl;
    int temp; cin >> temp;
}

// FUNCTION: UPDATE CUSTOMER REPORTS
void updateCustomerReports(string name[], string phone[], int id_no[],
                           int quantity[], string bill_status[],
                           int total_bill[], int paid_amount[], int index)
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
        int cust_id; cin >> cust_id;
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
                string new_date, pay_status;
                int canes_delivered;
                cout << "Date                          : ";
                cin >> new_date;
                cout << "Canes Delivered               : ";
                cin >> canes_delivered;
                cout << "Payment Status (Paid/Pending) : ";
                cin >> pay_status;
                total_bill[cust_index] += canes_delivered * 200;
                if (pay_status == "Paid" || pay_status == "paid")
                {
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
    int temp; cin >> temp;
}

// FUNCTION: MONTHLY REPORT
void monthlyReport(string monthly_name[], int monthly_earning[],
                   int monthly_electric[], int monthly_labour[],
                   int monthly_petrol[], int monthly_others[],
                   int monthly_profit[], int &monthly_index)
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
    monthly_profit[m] = monthly_earning[m] - monthly_electric[m]
                      - monthly_labour[m] - monthly_petrol[m]
                      - monthly_others[m];
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
    if (monthly_profit[m] > 0)
        cout << "Profit         : Rs. " << monthly_profit[m] << endl;
    else if (monthly_profit[m] < 0)
        cout << "Loss           : Rs. " << monthly_profit[m] * -1 << endl;
    else
        cout << "No Profit / No Loss This Month" << endl;
    cout << "=================================================" << endl << endl;
    monthly_index++;
    cout << "[0] Back" << endl;
    int temp; cin >> temp;
}

// FUNCTION: UPDATE OWNER PASSWORD
void updateOwnerPassword(string &owner_username, string &owner_password)
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
        if (cur_user == "0") break;
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
                exit(0);
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
    int temp; cin >> temp;
}

// FUNCTION: OWNER DASHBOARD
void ownerDashboard(string name[], string phone[], int id_no[],
                    int quantity[], string bill_status[],
                    int total_bill[], int paid_amount[], int index,
                    string report_date[], int report_total_canes[],
                    int report_paid_canes[], int report_labour1[],
                    int report_labour2[], int report_petrol[],
                    int report_earning[], int report_remaining[],
                    int &report_index,
                    string monthly_name[], int monthly_earning[],
                    int monthly_electric[], int monthly_labour[],
                    int monthly_petrol[], int monthly_others[],
                    int monthly_profit[], int &monthly_index,
                    string &owner_username, string &owner_password)
{
    int choice;
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
        if (choice == 1)
            dailyReport(report_date, report_total_canes, report_paid_canes,
                        report_labour1, report_labour2, report_petrol,
                        report_earning, report_remaining, report_index);
        else if (choice == 2)
            updateCustomerReports(name, phone, id_no, quantity, bill_status,
                                  total_bill, paid_amount, index);
        else if (choice == 3)
            monthlyReport(monthly_name, monthly_earning, monthly_electric,
                          monthly_labour, monthly_petrol, monthly_others,
                          monthly_profit, monthly_index);
        else if (choice == 4)
            updateOwnerPassword(owner_username, owner_password);
        else if (choice == 0)
        {
            cout << "Logged Out Successfully!" << endl;
            break;
        }
    }
}

// FUNCTION: OWNER LOGIN
void ownerLogin(string name[], string phone[], int id_no[],
                int quantity[], string bill_status[],
                int total_bill[], int paid_amount[], int index,
                string report_date[], int report_total_canes[],
                int report_paid_canes[], int report_labour1[],
                int report_labour2[], int report_petrol[],
                int report_earning[], int report_remaining[],
                int &report_index,
                string monthly_name[], int monthly_earning[],
                int monthly_electric[], int monthly_labour[],
                int monthly_petrol[], int monthly_others[],
                int monthly_profit[], int &monthly_index,
                string &owner_username, string &owner_password)
{
    system("cls");
    cout << "=================================================" << endl;
    cout << "               *** Owner Login ***               " << endl;
    cout << "=================================================" << endl << endl;
    int attempts = 0;
    while (attempts < 5)
    {
        string o_user, o_pass;
        cout << "Enter Username (Press 0 for Return): ";
        cin >> o_user;
        if (o_user == "0") break;
        cout << "Enter Password                    : ";
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
                exit(0);
            }
        }
        else
        {
            ownerDashboard(name, phone, id_no, quantity, bill_status,
                           total_bill, paid_amount, index,
                           report_date, report_total_canes, report_paid_canes,
                           report_labour1, report_labour2, report_petrol,
                           report_earning, report_remaining, report_index,
                           monthly_name, monthly_earning, monthly_electric,
                           monthly_labour, monthly_petrol, monthly_others,
                           monthly_profit, monthly_index,
                           owner_username, owner_password);
            break;
        }
    }
}

// MAIN FUNCTION
int main()
{
    int choice;

    // CUSTOMER DATA
    int index = 0;
    string name[100];
    string phone[100];
    string address[100];
    string pass[100];
    int id_no[100];

    // ORDER DATA
    int quantity[100];
    string gap[100];
    string delivery_date[100];

    // BILL DATA
    int total_bill[100];
    int paid_amount[100];
    string bill_status[100];

    // OWNER DATA
    string owner_username = "admin";
    string owner_password = "123";

    // DAILY REPORT DATA
    int report_total_canes[100];
    int report_paid_canes[100];
    int report_labour1[100];
    int report_labour2[100];
    int report_petrol[100];
    int report_earning[100];
    int report_remaining[100];
    string report_date[100];
    int report_index = 0;

    // MONTHLY REPORT DATA
    int monthly_electric[100];
    int monthly_labour[100];
    int monthly_petrol[100];
    int monthly_others[100];
    int monthly_earning[100];
    int monthly_profit[100];
    string monthly_name[100];
    int monthly_index = 0;

    // Default values
    for (int i = 0; i < 100; i++)
    {
        quantity[i] = 0;
        total_bill[i] = 0;
        paid_amount[i] = 0;
        bill_status[i] = "Pending";
        gap[i] = "N/A";
        delivery_date[i] = "N/A";
    }

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
        if (choice == 0)
        {
            cout << "Goodbye!" << endl;
            break;
        }
        else if (choice == 2)
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
                if (choice == 1)
                    registerCustomer(name, phone, address, pass, id_no, index);
                else if (choice == 2)
                    customerLogin(name, phone, address, pass, id_no, quantity,
                                  gap, delivery_date, total_bill, paid_amount,
                                  bill_status, index);
                else if (choice == 0)
                    break;
            }
        }
        else if (choice == 1)
        {
            ownerLogin(name, phone, id_no, quantity, bill_status,
                       total_bill, paid_amount, index,
                       report_date, report_total_canes, report_paid_canes,
                       report_labour1, report_labour2, report_petrol,
                       report_earning, report_remaining, report_index,
                       monthly_name, monthly_earning, monthly_electric,
                       monthly_labour, monthly_petrol, monthly_others,
                       monthly_profit, monthly_index,
                       owner_username, owner_password);
        }
    }

    return 0;
}