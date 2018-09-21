#include"std_lib_facilities.h"
#include <iostream>
int main (){


string first_name;
string friend_name;
int age = 0;
char friend_sex = 0;


cout << " ENTER A FRIEND TO WRITE TO :" <<endl;
cin >> first_name;
cout << "ENTER AGE: " <<endl;
cin >> age;

if (0>= age >= 130)
{
cout << "You must be kidding me....right?! " <<endl;
}

cout << "INPUT A FRIEND'S NAME : " << endl;
cin >> friend_name;
cout << "INPUT THE FRIEND'S SEX : " << endl;
cin >> friend_sex;

cout << "Dear," << first_name <<endl;
cout << "How are you doing?\n" << "It's been long since I've heard of you. " <<endl;
cout << "Have you seen " << friend_name << "lately?" <<endl;

if(friend_sex == 'm')
{
cout << "If you see " << friend_name <<", please tell him to call me!" <<endl;
}
else if(friend_sex == 'f') 
{
cout << "If you see " << friend_name <<", please tell her to call me!" <<endl;
}

cout << "I heard you just had birthday, and you are " << age << "years old now." <<endl;
if(age < 12)
{
cout << "Next year you'll be " << age++ <<endl;
}

else if( age == 17)
{
cout << "Next year you'll be able to vote!" <<endl;
}

else if( age > 70 )
{
cout << " I hope you're enjoying your retirement!" <<endl;
}

cout << "Yours sincerely, " << "Remias David" <<endl;

}
