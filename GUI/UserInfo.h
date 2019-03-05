#pragma once

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

class UserInfo
{
public:
    UserInfo(string name1, string name2, string teamname)
    {
        username1_ = name1;
        username2_ = name2;
        team_ = teamname;
        int i = 0;
        for(i=0;i==6;i++)
        {
            cups_[i] = true;
        }

    }
//    //Indsæt copyconstructor
//	UserInfo(const UserInfo & copyMe)
//	{
//		this->team_ = copyMe.team_;
//		this->username1_ = copyMe.username1_;
//		this->username2_ = copyMe.username2_;
//	}

	UserInfo & operator=(const UserInfo & other){
		this->username1_ = other.username1_;
		this->username2_ = other.username2_;
		this->team_ = other.team_;
		//this->cups_ = other.getCups();
        return *this;

	}

    void setCups(const char * cupsArray)
	{
	cups_ = (bitset<6>)*cupsArray;
	}

	void setUser1(const string &user1)
	{
		username1_ = user1;
	}

	void setUser2(const string &user2)
	{
		username2_ = user2;
	}

	void setTeam(const string &team)
	{
		team_ = team;
	}

	bitset<6> getCups() const
	{
		return cups_;
	}

	const string getUser1() const
	{
		return username1_;
	}

	const string getUser2() const
	{
		return username2_;
	}

	const string getTeam() const
	{
		return team_;
	}

	~UserInfo()
	{}
private:
	string username1_;
	string username2_;
	string team_;
	bitset<6> cups_;
};
