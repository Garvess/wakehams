//Connection database
//To compile: g++ main.cpp -o output -L/usr/include/mariadb/mysql -lmysqlclient

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

void InsertFirstName();
//void InsertLastName();

//bool thingHappened = false;

//    void Update(){

//        if(!thingHappened && InsertFirstName){
//            thingHappened = true;
//            InsertFirstName();
//        }


//}

int main(){

    system("title Connect C++ to MYSQL");

    //Call Methods
    db_response::ConnectionFunction();


  //  Update();

    InsertFirstName();
    //InsertLastName();



    return 0;
}

void InsertFirstName()
    {
        //Initial load
        system("cls");

        string first_name = "";
        string town = "";

        cout << "School management system." << endl << endl;

        cout << "Kill program with ctrl c only." << endl << endl;
        cout << "Enter Client First Name:";

        getline(cin, first_name);

        cout << "Push that shit";
        getline(cin, town);
        //cout << "Enter Client ID Number:";
        //cin >> client_id)

        string insert_query1 = "INSERT INTO clients (first_name,town) VALUES ('"+ first_name + "','"+ town +"')";

        const char* q = insert_query1.c_str();

        qstate = mysql_query(conn,q);

// My shit under here.

        //system("cls");
        //string town = "";

        //cout << "Enter Client Town:" << endl << endl;
        //getline(cin, town);
        //insert_query1 = "INSERT INTO clients (town) VALUES ('"+ town +"')";
        //const char* u = insert_query1.c_str();

        //qstate = mysql_query(conn,u);

    }



//        if(!qstate)
  //          {
    //            cout << endl << "Registration success" << endl;
      //          system("pause");
      //          main();
       //     }
        //else
         //   {
          //      cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
           // }

//}

//void InsertLastName()
//    {
//        //Initial load
//        system("cls");

        //Variables
//        string last_name = "";
//       string town = "";

//        cout << "School management system." << endl << endl;

//        cout << "Enter Client Last Name:";

//        getline(cin, last_name);
        //cout << "Enter Client ID Number:";
        //cin >> client_id)

       //cout << "Enter Client Town:";


//        string insert_query1 = "INSERT INTO clients (last_name) VALUES ('"+ last_name +"')";

//        const char* q = insert_query1.c_str();

//        qstate = mysql_query(conn,q);

        //insert_query1 = "INSERT INTO clients (town) VALUES ('"+ town +"')";

        //if(!qstate)
        //    {
        //        cout << endl << "Registration success" << endl;
        //        system("pause");
        //        main();
        //    }
        //else
         //   {
         //       cout << "Query Execution Problem!" << mysql_errno(conn) << endl;
         //   }

//}
