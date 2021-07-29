//Connection database


#include<iostream>
#include<mysql/mysql.h>
#include<sstream>

using namespace std;

//Global Variable
int qstate;
MYSQL* conn;

class db_response
{
    public:
    static void ConnectionFunction()
    {

        conn = mysql_init(0);
    if(conn)
        {
            cout << "Database Connected" << endl;
            cout << "Press any key to continue" << endl;
            system("cls");
        }
    else
        cout << "Failed To Connect" << mysql_errno(conn) << endl;
    conn = mysql_real_connect(conn, "localhost", "root","","wakehams",3306,NULL,0);
    if (conn)
        {
        cout << "Database Connected to MySQL" << conn << endl;
        system("pause");
        }
        else
            cout << "Failed to Connect" << mysql_errno(conn) << endl;

    }

};

void RegisterStudent();

int main(){

    system("title Connect C++ to MYSQL");

    //Call Methods
    db_response::ConnectionFunction();
    RegisterStudent();

    return 0;
}

void RegisterStudent()
    {
        //Initial load
        system("cls");

        //Variables
        string client_id = "";
        string first_name = "";


        cout << "School management system." << endl << endl;

        cout << "Enter Client First Name:";

        getline(cin, first_name);
        //cout << "Enter Client ID Number:";
        //cin >> client_id)

        string insert_query1 = "INSERT INTO clients (first_name) VALUES ('"+ first_name +"')";

        const char* q = insert_query1.c_str();

        qstate = mysql_query(conn,q);

        if(!qstate)
            {
                cout << endl << "Registration success" << endl;
                system("pause");
                main();
            }
        else
            {
                cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
            }

}
