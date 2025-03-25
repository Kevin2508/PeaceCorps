#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;

class secret_code
{int code;
public:
    secret_code()
    {
    Retry:
        system("cls");
        
        cout << "PLEASE ENTER SECRET CODE : ";
        cin >> code;

        if (code != 2231)
        {
            cout << "ACCESS DENIED !\n";
            getch();
            goto Retry;
        }
    }
};
class account
{

public:
    void welcome()
    {
        system("cls");
        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWelcome to peace corps \nPlease create your account !" << endl;
    }
    int Account()
    {
        cout << "\nACCOUNT DETAILS : \n\n*************************\n\n";
        string username, email, password;
        fstream file;

        cout << "Enter username : ";
        cin >> username;

        cout << "Enter email address : ";
        cin >> email;
        cout << "Enter password : ";
        cin >> password;

        file.open("Account.txt", ios::out);
        file << username << endl;
        file << email << endl;
        file << password << endl;
        file.close();

        cout << "Account created successfully!" << endl;
    }
};

class buy
{
public:
    int Buy()
    {
    buys:
        int flag = 0;
        char c, c1;
        cout << "\n Do you want to buy this weapon ? (Y/N) : ";
        cin >> c;
        if (c == 'y' || c == 'Y')
        {
            flag = 1;
            cout << "Added to Cart ! ";
            getch();

            return flag;
        }
        else if (c == 'n' || c == 'N')
        {
            cout << "\n Are you sure ? (Y/N) : ";
            cin >> c1;
            if (c1 == 'n' || c1 == 'N')
            {
                goto buys;
                getch();
            }
            else if (c1 == 'y' || c1 == 'Y')
            {
                flag = 2;
                return flag;
            }
            else
            {
                cout << "\nEnter a valid character !";
            }
        }
        else
        {
            cout << "\nEnter a valid character !";
            goto buys;
        }
    }
};
class weapon : public buy
{
public:
    string wname;
    int price;
    int quantity;

    void getquantity()
    {
        cout << "\n\n Enter the quantity : ";
        cin >> quantity;
        cout << endl;
    }
};
class assault_rifles : public weapon, public buy
{
public:
    assault_rifles(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void AKM()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n\n Gun Name : AKM";
        cout << "\n Damage : 41HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 30";
    }

    void Beryl_M762()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : Beryl_M762";
        cout << "\n Damage : 47HP";
        cout << "\n Fire Rate : 620RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 30";
    }
    void GROZA()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : GROZA";
        cout << "\n Damage : 51HP";
        cout << "\n Fire Rate : 750RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 20";
    }
    void M416()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : M416";
        cout << "\n Damage : 40HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 30";
    }
    void SCAR_L()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : SCAR-L";
        cout << "\n Damage : 40HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 30";
    }
};
class sniper_rifles : public weapon, public buy
{
public:
    sniper_rifles(const string &s, int p)
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        wname = s;
        price = p;
    }
    void AWM()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : AWM ";
        cout << "\n Damage : 120HP";
        cout << "\n Fire Rate : 400RPM";
        cout << "\n Range : 1000m";
        cout << "\n Magazine Capacity : 5";
    }
    void Kar98k()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : Kar98k";
        cout << "\n Damage : 75HP";
        cout << "\n Fire Rate : 500RPM";
        cout << "\n Range : 800m";
        cout << "\n Magazine Capacity : 10";
    }
    void M24()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : M24";
        cout << "\n Damage : 70HP";
        cout << "\n Fire Rate : 400RPM";
        cout << "\n Range : 800m";
        cout << "\n Magazine Capacity : 10";
    }
};
class marksman_rifles : public weapon, public buy
{
public:
    marksman_rifles(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void SLR()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : SLR";
        cout << "\n Damage : 60HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 800m";
        cout << "\n Magazine Capacity : 20";
    }
    void SKS()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : SKS";
        cout << "\n Damage : 55HP";
        cout << "\n Fire Rate : 550RPM";
        cout << "\n Range : 800m";
        cout << "\n Magazine Capacity : 20";
    }
};
class submachine_guns : public weapon, public buy
{
public:
    submachine_guns(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void UMP9()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : UMP9";
        cout << "\n Damage : 35HP";
        cout << "\n Fire Rate : 800RPM";
        cout << "\n Range : 200m";
        cout << "\n Magazine Capacity : 30";
    }
    void Vector()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : Vector";
        cout << "\n Damage : 38HP";
        cout << "\n Fire Rate : 1200RPM";
        cout << "\n Range : 150m";
        cout << "\n Magazine Capacity : 30";
    }
    void UZI()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : UZI";
        cout << "\n Damage : 28HP";
        cout << "\n Fire Rate : 900RPM";
        cout << "\n Range : 100m";
        cout << "\n Magazine Capacity : 25";
    }
};
class shotguns : public weapon, public buy
{
public:
    shotguns(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void DBS()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : DBS";
        cout << "\n Damage : 120HP";
        cout << "\n Fire Rate : 300RPM";
        cout << "\n Range : 100m";
        cout << "\n Magazine Capacity : 8";
    }
    void S12K()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : S12K";
        cout << "\n Damage : 50HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 100m";
        cout << "\n Magazine Capacity : 12";
    }
};
class light_machine_guns : public weapon, public buy
{
public:
    light_machine_guns(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void M249()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : M249";
        cout << "\n Damage : 45HP";
        cout << "\n Fire Rate : 600RPM";
        cout << "\n Range : 500m";
        cout << "\n Magazine Capacity : 100";
    }
};
class pistols : public weapon, public buy
{
public:
    pistols(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void P92()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : P92";
        cout << "\n Damage : 25HP";
        cout << "\n Fire Rate : 350RPM";
        cout << "\n Range : 50m";
        cout << "\n Magazine Capacity : 15";
    }
    void R1895()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : R1895";
        cout << "\n Damage : 35HP";
        cout << "\n Fire Rate : 400RPM";
        cout << "\n Range : 50m";
        cout << "\n Magazine Capacity : 7";
    }
    void UZ()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\n Gun Name : UZ";
        cout << "\n Damage : 28HP";
        cout << "\n Fire Rate : 900RPM";
        cout << "\n Range : 100m";
        cout << "\n Magazine Capacity : 18";
    }
};

class Melee : public weapon, public buy
{
public:
    Melee(const string &s, int p)
    {
        wname = s;
        price = p;
    }
    void pan()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWeapon Name : Pan ";
    }
    void Crowbar()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWeapon Name : Crowbar ";
    }
    void Machete()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWeapon Name : Machete ";
    }
    void Crossbow()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWeapon Name : Crossbow ";
    }
};


class army
{
public:
    void soldier()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\n * Soldiers : ";
        cout << "\n * 1 Soldiers prices 200,000 USDTs ";
        cout << "\n * Each soldiers are Secially trained from \"CHECHNYA MILITARY BASE\"  ";
        cout << "\n\n * SPECIALIZATION : \n - Military Coup\n - Civil War\n - Civil Disobedience\n - Poilitical Advantage\n - Security\n - Proxy War";
    }
};

class submarine
{
public:
    void diesel()
    {

        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nDIESEL SUBMARINE :\n";
        cout << "\nPrice : 200M USDT";
        cout << "\nMade in SOVIET";
        cout << "\nFuel Duration : 9 months";
        cout << "\nFuel : Diesel Gas ";
        cout << "\nSilent Travelling Under water ";
    }
    void nuclear()
    {

        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nNUCLEAR SUBMARINE :\n";
        cout << "\nPrice : 21B USDT";
        cout << "\nMade in SOVIET";
        cout << "\nFuel Duration : 41 Years ";
        cout << "\nFuel : Plutonium and Uranium ";
        cout << "\nNoisy while Travelling Under water ";
    }
};

class tank
{
public:
    void heavy()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nHEAVY WEIGHT ATTACK TANKS :\n";
        cout << "\nPrice : 1.2M USDT";
        cout << "\nMade in SOVIET";
        cout << "\n\nSpecifications : ";
        cout << "\n- Heavy Armoured\n- Slow speed\n- More fuel consumption\n- Made with South Korean Technique\n- Kinetically Explosive Shells";
        cout << "\n ";
    }

    void light()
    {
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nLIGHT WEIGHT ATTACK TANKS :\n";
        cout << "\nPrice : 800,000 USDT";
        cout << "\nMade in SWEDEN in collaboration with BELARUS";
        cout << "\n\nSpecifications : ";
        cout << "\n- Less Armoured\n- High speed\n- Less fuel consumption\n- Made with South Korean Technique\n- Kinetically Explosive Shells";
        cout << "\n ";
    }
};

class icbm
{
public:
    void alpha104()
    {

        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nINTER-CONTINENTAL BALASTIC MISSILES :\n";
        cout << "\nALPHA - 104";
        cout << "\n10 Warheads";
        cout << "\nCapacity : 500TNTs per warheads";
        cout << "\nRange : 200KM";
    }
    void alpha104n()
    {

        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nINTER-CONTINENTAL BALASTIC MISSILES :\n";
        cout << "\nALPHA - 104 - N";
        cout << "\n6 Warheads ";
        cout << "\nEnriched with Thorium & Plutonium Substrates";
        cout << "\nCapacity : 500TNTs per warheads";
        cout << "\nRange : 400KM";
    }
};

class satellite
{
public:
    void resonance()
    {

        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nUNIDENTIFIED MILITARY :\n";
        cout << "\nRESONANCE SATELLITE";
        cout << "\nZS - GAMMA - 0396";
        cout << "\nLaunched from South China Sea to Somalian sea\nLaunch Vehicle : Failed Soviet 80B-ORBIT, Testing probe\n Price : 3M USDT \nDescription : It will provide INTELL, Photographs of classified Co-ordinates,\nscan for Disputed Resources, Other militaries and Peace Applications ";
    }
};

int main()
{
    secret_code c1;

    int num, a = 0, check = 0, login = 0, wp1, wp2, wp3, wp4, wp5, wp6, wp7, wp8, wp9, total = 0;
    char i;
    char yn;
    string Line;
    ofstream myfile("order.txt", ios ::app);
    ofstream aboutFile("peace_corps.txt", ios ::app);
home:

    system("cls");

    cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
    cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
    cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
    cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
    cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

    cout << "\nWelcome to Peace Corps !\n";

    cout << endl
         << "1. Account Details \n";
    cout << endl
         << "2. Order Equipments \n";
    cout << endl
         << "3. View Cart \n";
    cout << endl
         << "4. About Us ( Must Visit ) \n";
    cout << endl
         << "5. Exit \n\n";
    cout << "Choose an option : ";
    cin >> num;
    cout << endl
         << endl;

    if (num == 1)
    {
    account:
        system("cls");
        account a1, a2;
        a1.welcome();
        a2.Account();
        getch();

    show_account:
        string account_details;
        fstream afile;
        afile.open("account.txt", ios ::in);
        if (!afile.is_open())
        {
            cout << "\nFile is not opening !\n";
        }
        while (getline(afile, account_details))
        {
            cout << endl
                 << account_details << endl;
        }
        afile.close();
        goto home;
    }
    else if (num == 2)
    {
    equipments:
        system("cls");

        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nWelcome to equipment area ! \n\n*************************\n\n";
        cout << "(0) Go Back \n";
        cout << "\n(1) Assault Rifles \n";
        cout << "(2) Sniper Rifles \n";
        cout << "(3) Designated Marksman Rifles \n";
        cout << "(4) Submachine Guns \n";
        cout << "(5) Shotguns \n";
        cout << "(6) Light Machine Guns \n";
        cout << "(7) Pistols \n";
        cout << "(8) Melee Weapons \n\n";
        cout << "(A) Private Army \n";
        cout << "(S) SUBMARINE \n";
        cout << "(T) TANK \n";
        cout << "(I) ICBM ( Inter-Continental Balastic Missiles ) \n";
        cout << "(U) Unidentified Military \n";
        cout << "\n  Place Order ! (P)\n";

        cout << "\n Choose an option : ";

        cin >> i;
        if (i == '0')
        {
            goto home;
        }
        if (i == '1')
        {
        Assault_Rifles:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Asault Rifles ( ARs ) : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. AKM\t\t\t1000\n";
            cout << "2. Beryl M762\t\t1500\n";
            cout << "3. GROZA\t\t2000\n";
            cout << "4. M416\t\t\t1200\n";
            cout << "5. SCAR-L\t\t1000\n";

            cout << "\n Choose Your Option : ";
            cin >> wp1;

            if (wp1 == 1)
            {
                assault_rifles ar1("AKM", 1000);

                ar1.AKM();
                ar1.getquantity();
                buy b1;
                check = b1.Buy();
                a++;

                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << ar1.wname << "\t\t   " << ar1.quantity << "\t\t\t        " << ar1.price << endl;
                        myfile.close();
                    }
                    total = total + 1000 * ar1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp1 == 2)
            {
                assault_rifles ar2("M762", 1500);

                ar2.Beryl_M762();
                ar2.getquantity();
                buy b2;
                check = b2.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << "   " << ar2.wname << "\t   " << ar2.quantity << "\t\t\t        " << ar2.price << endl;
                        myfile.close();
                    }
                    total = total + 1500 * ar2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp1 == 3)
            {
                assault_rifles ar3("GROZA", 2000);

                ar3.GROZA();
                ar3.getquantity();
                buy b3;
                check = b3.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << "   " << ar3.wname << "\t   " << ar3.quantity << "\t\t\t        " << ar3.price << endl;
                        myfile.close();
                    }
                    total = total + 2000 * ar3.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp1 == 4)
            {
                assault_rifles ar4("m416", 1200);

                ar4.M416();
                ar4.getquantity();
                buy b4;
                check = b4.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << "   " << ar4.wname << "\t   " << ar4.quantity << "\t\t\t        " << ar4.price << endl;
                        myfile.close();
                    }
                    total = total + 1200 * ar4.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp1 == 5)
            {
                assault_rifles ar5("SCAR-L", 1000);

                ar5.SCAR_L();
                ar5.getquantity();
                buy b5;
                check = b5.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << "   " << ar5.wname << "\t   " << ar5.quantity << "\t\t\t        " << ar5.price << endl;
                        myfile.close();
                    }
                    total = total + 1000 * ar5.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Assault_Rifles;
            }
        }
        // Sniper rifles
        if (i == '2')
        {
        Sniper_rifles:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Sniper Rifles ( SRs ) : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. AWM\t\t\t3000\n";
            cout << "2. Kar98k\t\t2500\n";
            cout << "3. M24\t\t\t2000\n";

            cout << "\n Choose Your Option : ";
            cin >> wp2;

            if (wp2 == 1)
            {
                sniper_rifles sr1("AWM", 3000);

                sr1.AWM();
                sr1.getquantity();
                buy b6;
                check = b6.Buy();
                a++;

                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sr1.wname << "\t\t   " << sr1.quantity << "\t\t\t        " << sr1.price << endl;
                        myfile.close();
                    }
                    total = total + 3000 * sr1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp2 == 2)
            {
                sniper_rifles sr2("Kar98k", 2500);

                sr2.Kar98k();
                sr2.getquantity();
                buy b7;
                check = b7.Buy();
                a++;

                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sr2.wname << "\t   " << sr2.quantity << "\t\t\t        " << sr2.price << endl;
                        myfile.close();
                    }
                    total = total + 2500 * sr2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp2 == 3)
            {
                sniper_rifles sr3("M24", 2000);

                sr3.M24();
                sr3.getquantity();
                buy b8;
                check = b8.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sr3.wname << "\t\t   " << sr3.quantity << "\t\t\t        " << sr3.price << endl;
                        myfile.close();
                    }
                    total = total + 2000 * sr3.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Sniper_rifles;
            }
        }
        // Designated Marksman Rifles
        if (i == '3')
        {
        Marksman_Rifles:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Designated Marksman Rifles : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. SLR\t\t\t1500\n";
            cout << "2. SKS\t\t\t1200\n";

            cout << "\n Choose Your Option : ";
            cin >> wp3;

            if (wp3 == 1)
            {
                marksman_rifles mr1("SLR", 1500);

                mr1.SLR();
                mr1.getquantity();
                buy b9;
                check = b9.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << mr1.wname << "\t\t   " << mr1.quantity << "\t\t\t        " << mr1.price << endl;
                        myfile.close();
                    }
                    total = total + 1500 * mr1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp3 == 2)
            {
                marksman_rifles mr2("SKS", 1200);

                mr2.SKS();
                mr2.getquantity();
                buy b10;
                check = b10.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << mr2.wname << "\t\t   " << mr2.quantity << "\t\t\t        " << mr2.price << endl;
                        myfile.close();
                    }
                    total = total + 1200 * mr2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Marksman_Rifles;
            }
        }
        if (i == '4')
        {
        Submachine_Guns:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Submachine Guns : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. UMP9\t\t\t500\n";
            cout << "2. Vector\t\t750\n";
            cout << "3. UZI\t\t\t500\n";

            cout << "\n Choose Your Option : ";
            cin >> wp4;

            if (wp4 == 1)
            {
                submachine_guns sm1("UMP9", 500);

                sm1.UMP9();
                sm1.getquantity();
                buy b11;
                check = b11.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sm1.wname << "\t\t   " << sm1.quantity << "\t\t\t        " << sm1.price << endl;
                        myfile.close();
                    }
                    total = total + 500 * sm1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp4 == 2)
            {
                submachine_guns sm2("Vector", 750);

                sm2.Vector();
                sm2.getquantity();
                buy b12;
                check = b12.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sm2.wname << "\t   " << sm2.quantity << "\t\t\t        " << sm2.price << endl;
                        myfile.close();
                    }
                    total = total + 750 * sm2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp4 == 3)
            {
                submachine_guns sm3("UZI", 500);

                sm3.UZI();
                sm3.getquantity();
                buy b13;
                check = b13.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sm3.wname << "\t\t   " << sm3.quantity << "\t\t\t        " << sm3.price << endl;
                        myfile.close();
                    }
                    total = total + 500 * sm3.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Submachine_Guns;
            }
        }
        if (i == '5')
        {
        Shotguns:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Shotguns : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. DBS\t\t\t1000\n";
            cout << "2. S12K\t\t\t750\n";

            cout << "\n Choose Your Option : ";
            cin >> wp5;

            if (wp5 == 1)
            {
                shotguns sh1("DBS", 1000);

                sh1.DBS();
                sh1.getquantity();
                buy b14;
                check = b14.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sh1.wname << "\t\t   " << sh1.quantity << "\t\t\t        " << sh1.price << endl;
                        myfile.close();
                    }
                    total = total + 1000 * sh1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp5 == 2)
            {
                shotguns sh2("S12K", 750);

                sh2.S12K();
                sh2.getquantity();
                buy b15;
                check = b15.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << sh2.wname << "\t\t   " << sh2.quantity << "\t\t\t        " << sh2.price << endl;
                        myfile.close();
                    }
                    total = total + 750 * sh2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Shotguns;
            }
        }
        if (i == '6')
        {
        Machine_Guns:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Light Machine Guns : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. M249\t\t\t2000\n";

            cout << "\n Choose Your Option : ";
            cin >> wp5;

            if (wp5 == 1)
            {
                light_machine_guns lmg1("M249", 2000);

                lmg1.M249();
                lmg1.getquantity();
                buy b16;
                check = b16.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << lmg1.wname << "\t\t   " << lmg1.quantity << "\t\t\t        " << lmg1.price << endl;
                        myfile.close();
                    }
                    total = total + 2000 * lmg1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto Machine_Guns;
            }
        }
        if (i == '7')
        {
        pistols:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Pistols : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. P92\t\t\t250\n";
            cout << "2. R1895\t\t500\n";
            cout << "3. UZ\t\t\t500\n";

            cout << "\n Choose Your Option : ";
            cin >> wp6;

            if (wp6 == 1)
            {
                pistols p1("P92", 250);

                p1.P92();
                p1.getquantity();
                buy b17;
                check = b17.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << p1.wname << "\t\t   " << p1.quantity << "\t\t\t        " << p1.price << endl;
                        myfile.close();
                    }
                    total = total + 250 * p1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp6 == 2)
            {
                pistols p2("R1895", 500);

                p2.R1895();
                p2.getquantity();
                buy b18;
                check = b18.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << p2.wname << "\t\t   " << p2.quantity << "\t\t\t        " << p2.price << endl;
                        myfile.close();
                    }
                    total = total + 500 * p2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp6 == 3)
            {
                pistols p3("UZ", 500);

                p3.UZ();
                p3.getquantity();
                buy b19;
                check = b19.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << p3.wname << "\t\t   " << p3.quantity << "\t\t\t        " << p3.price << endl;
                        myfile.close();
                    }
                    total = total + 500 * p3.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto pistols;
            }
        }
        if (i == '8')
        {
        melee:
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

            cout << "\nHere is the list of Melee weapons : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. Pan\t\t\tFree\n";
            cout << "2. Crowbar\t\tFree\n";
            cout << "3. Machete\t\tFree\n";
            cout << "4. Crossbow\t\t1000\n";

            cout << "\n Choose Your Option : ";
            cin >> wp7;

            if (wp7 == 1)
            {
                Melee m1("Pan", 0);

                m1.pan();
                m1.getquantity();
                buy b20;
                check = b20.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << m1.wname << "\t\t   " << m1.quantity << "\t\t\t        " << m1.price << endl;
                        myfile.close();
                    }
                    total = total + 0 * m1.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp7 == 2)
            {
                Melee m2("Crowbar", 0);

                m2.Crowbar();
                m2.getquantity();
                buy b21;
                check = b21.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << m2.wname << "\t   " << m2.quantity << "\t\t\t        " << m2.price << endl;
                        myfile.close();
                    }
                    total = total + 0 * m2.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp7 == 3)
            {
                Melee m3("Machete", 0);

                m3.Machete();
                m3.getquantity();
                buy b22;
                check = b22.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << m3.wname << "\t   " << m3.quantity << "\t\t\t        " << m3.price << endl;
                        myfile.close();
                    }
                    total = total + 0 * m3.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else if (wp7 == 4)
            {
                Melee m4("Crossbow", 1000);

                m4.Crossbow();
                m4.getquantity();
                buy b23;
                check = b23.Buy();
                a++;
                if (check == 1)
                {
                    ofstream myfile("order.txt", ios ::app);

                    if (myfile.is_open())
                    {
                        myfile << a << " " << m4.wname << "\t   " << m4.quantity << "\t\t\t        " << m4.price << endl;
                        myfile.close();
                    }
                    total = total + 1000 * m4.quantity;
                    goto equipments;
                }
                if (check == 2)
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\nEnter a Valid Number !\n";
                getch();
                goto melee;
            }
        }

        else if (i == 'A' || i == 'a')
        {

        army:

            army Army;
            Army.soldier();
            char yn1;
            cout << "\n\nDo you want to Place Order ? (Y/N) :";
            cin >> yn1;
            if (yn1 == 'y' || yn1 == 'Y')
            {
                cout << "\n\n Order Placed !";
                cout << "\n\n NOTE : Bill of Army will not be generated due to security Breach Reasons.";
                getch();
                goto equipments;
            }
            else if (yn1 == 'n' || yn1 == 'N')
            {
                goto equipments;
            }
        }

        else if (i == 'S' || i == 's')
        {
        submarine:
            int sub;
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
            cout << "\nHere is the list of Submarines : \n\n";
            cout << "Items\t\t\t\tPrice\n\n";
            cout << "1. Diesel Submarine\t\t200M USDT\n";
            cout << "2. Nuclear Submarine\t\t21B USDT\n";
            cout << "\n Choose Your Option : ";
            cin >> sub;
            if (sub == 1)
            {
                submarine sbm;
                sbm.diesel();
                char yn2;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn2;
                if (yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this Submarine will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn2 == 'n' || yn2 == 'N')
                {
                    goto equipments;
                }
            }
            if (sub == 2)
            {
                submarine sbm;
                sbm.nuclear();
                char yn2;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn2;
                if (yn2 == 'y' || yn2 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this Submarine will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn2 == 'n' || yn2 == 'N')
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\n\nEnter a Valid Number !";
                getch();
                goto submarine;
            }
        }
        else if (i == 't' || i == 'T')
        {
        tank:
            int tnk;
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
            cout << "\nHere is the list of TANKS : \n\n";
            cout << "Items\t\t\tPrice\n\n";
            cout << "1. HWAT\t\t\t200M USDT\n";
            cout << "2. LWAT\t\t\t21B USDT\n";
            cout << "\n Choose Your Option : ";
            cin >> tnk;
            if (tnk == 1)
            {
                tank t1;
                t1.heavy();
                char yn3;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn3;
                if (yn3 == 'y' || yn3 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this tank will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn3 == 'n' || yn3 == 'N')
                {
                    goto equipments;
                }
            }
            if (tnk == 2)
            {
                tank t2;
                t2.light();
                char yn3;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn3;
                if (yn3 == 'y' || yn3 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this tank will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn3 == 'n' || yn3 == 'N')
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\n\nEnter a Valid Number !";
                getch();
                goto tank;
            }
        }

        else if (i == 'i' || i == 'I')
        {
        icbm:
            int alpha;
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
            cout << "\nHere is the list of ICBMs (Intercontinental Balastic Missiles) : \n\n";
            cout << "Items\t\t\t\tPrice\n\n";
            cout << "1. Alpha - 104\t\t\t20B USDT\n";
            cout << "2. Alpha - 104 - N\t\t31B USDT\n";
            cout << "\n Choose Your Option : ";
            cin >> alpha;
            if (alpha == 1)
            {
                icbm i1;
                i1.alpha104();
                char yn4;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn4;
                if (yn4 == 'y' || yn4 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this ICBM will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn4 == 'n' || yn4 == 'N')
                {
                    goto equipments;
                }
            }
            if (alpha == 2)
            {
                icbm i2;
                i2.alpha104n();
                char yn4;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn4;
                if (yn4 == 'y' || yn4 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this ICBM will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn4 == 'n' || yn4 == 'N')
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\n\nEnter a Valid Number !";
                getch();
                goto icbm;
            }
        }

        else if (i == 'u' || i == 'U')
        {
        satellite:
            int um;
            system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
            cout << "\nHere is the list of Unidentified Military : \n\n";
            cout << "Items\t\t\t\t\tPrice\n\n";
            cout << "1. Resonance Satellite\t\t\t300M USDT\n";
            cout << "\n Choose Your Option : ";
            cin >> um;
            if (um == 1)
            {
                satellite s1;
                s1.resonance();
                char yn5;
                cout << "\n\nDo you want to Place Order ? (Y/N) :";
                cin >> yn5;
                if (yn5 == 'y' || yn5 == 'Y')
                {
                    cout << "\n\n Order Placed !";
                    cout << "\n\n NOTE : Bill of this Satellite will not be generated due to security Breach Reasons.";
                    getch();
                    goto equipments;
                }
                else if (yn5 == 'n' || yn5 == 'N')
                {
                    goto equipments;
                }
            }
            else
            {
                cout << "\n\nEnter a Valid Number !";
                getch();
                goto satellite;
            }
        }

        else if (i == 'p' || i == 'P')
        {
            ifstream infile("account.txt");

            if (infile.peek() == EOF)
            {
                 system("cls");
            cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
            cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
            cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
            cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
            cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
                cout << "\n\nPlease enter your Account Details first.\n";
                getch();
                goto account;
            }
            else
            {
                goto checkout;
            }
            infile.close();
            ifstream nfile("order.txt");

            if (nfile.peek() == EOF)
            {
                cout << "\nPlease select some Equipments !";
                getch();
                goto home;
            }
            else
            {
                goto checkout;
            }
            nfile.close();
        }
        else
        {
            cout << "\n\nEnter a Valid Number ! \n";
            getch();
            goto equipments;
        }
    }
    else if (num == 3)
    {
        system("cls");
        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";
        cout << "\nNo.  Items\tQuantity\t\t\tPrice\n\n";

        ifstream inputFile("order.txt");

        string line;

        while (getline(inputFile, line))
        {
            cout << endl
                 << line << endl;
        }
        inputFile.close();

        cout << "\n\nPress any key to go back !";
        getch();
        goto home;
    }
    else if (num == 4)
    {
        system("cls");
        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n\n\n";
        ifstream aboutFile("peace_corps.txt");

        string lines;

        while (getline(aboutFile, lines))
        {
            cout << endl
                 << lines << endl;
        }
        aboutFile.close();
        cout << "\n\nPress any key to go back.";
        getch();
        goto home;
    }
    else if (num == 5)
    {
        system("cls");
        cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
        cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
        cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
        cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
        cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

        cout << "\nTHANKS FOR VISITING PEACE CORPS !\n\n";

        exit(0);
    }
    else
    {
        cout << "\n\nEnter a Valid Number ! \n";
        getch();
        goto home;
    }

checkout:

    system("cls");
    cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
    cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
    cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
    cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
    cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

    cout << endl
         << endl
         << "Are you sure you want to place order ? (Y/N) : ";
    cin >> yn;
    if (yn == 'Y' || yn == 'y')
    {
        goto bill;
    }
    else if (yn == 'n' || yn == 'N')
    {
        remove("order.txt");
        exit(0);
    }
    else
    {
        cout << "\n\nEnter a Valid Chararcter !";
        getch();
        goto checkout;
    }

bill:

    system("cls");
    int linecount = 0;
    cout << "  ____  _____    _    ____ _____    ____ ___  ____  ____  ____  \n";
    cout << " |  _ \\| ____|  / \\  / ___| ____|  / ___/ _ \\|  _ \\|  _ \\/ ___| \n";
    cout << " | |_) |  _|   / _ \\| |   |  _|   | |  | | | | |_) | |_) \\___ \\ \n";
    cout << " |  __/| |___ / ___ \\ |___| |___  | |__| |_| |  _ <|  __/ ___) |\n";
    cout << " |_|   |_____/_/   \\_\\____|_____|  \\____\\___/|_| \\_\\_|   |____/ \n";

    cout << endl;
    cout << "\n\n\t\t\tPEACE CORPS\n\n";
    cout << "Items\t\tQuantity\t\t\tPrice\n\n";

    ifstream inputFile("order.txt");

    string line;

    while (getline(inputFile, line))
    {
        cout << endl
             << line << endl;
    }
    inputFile.close();

    cout << "\n\n_____________________________________________________________\n\n";
    cout << "\t\tTotal : \t\t" << total << "\n\nExtra Charges may applied !\n\n\n";
exit:
    return 0;
}
//********* THE END *********