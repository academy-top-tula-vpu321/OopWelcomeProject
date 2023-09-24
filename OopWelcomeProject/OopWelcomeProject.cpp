#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Money
{
    int rub;
    int kop;

public:
    void SetRub(int r)
    {
        rub = r;
    }

    int GetRub()
    {
        return rub;
    }

    void SetKop(int k)
    {
        k = abs(k);
        rub += k / 100;
        kop = k % 100;
    }

    int GetKop()
    {
        return kop;
    }

    void AddRub(int r)
    {
        rub += r;
    }

    void Print()
    {
        std::cout << rub << "rub, " << kop << "kop\n";
    }
};

struct SMoney
{
    int rub;
    int kop;
};


enum ErrorType
{
    DivByZero,
    DivModFloat,
    OutOfRange
};

enum UserRole
{
    Admin,
    Editor,
    Member,
    Guest
};

struct Date
{
    int day;
    int month;
    int year;
};

struct User
{
    char name[50];
    Date birthDate;
    UserRole role;
};

void UserPrint(User user)
{
    std::cout << user.name << "\n";
    std::cout << user.birthDate.day << "."
        << user.birthDate.month << "."
        << user.birthDate.year << "\n";
}

int main()
{
    /*
    int count;

    Date currDate;
    currDate.day = 24;
    currDate.month = 9;
    currDate.year = 2023;

    Date newDate;

    Date dates[10];
    dates[2].day = 15;

    User user;
    strcpy(user.name, "Bobby");
    user.birthDate.day = 12;
    user.birthDate.month = 5;
    user.birthDate.year = 1998;

    User bobby = user;
    UserPrint(bobby);

    UserRole role = UserRole::Editor;
    */

    SMoney m1;
    m1.rub = 3;
    m1.kop = 56;

    Money m2;
    m2.SetRub(10);
    m2.SetKop(34421);
    m2.Print();

    //m2.SetRub(m2.GetRub() + 100);
    m2.AddRub(-100);
    m2.Print();
}
