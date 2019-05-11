#ifndef TABTENN_H_
#define TABTENN_H_
#include <iostream>
#include <string>

using std::string;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string &fn = "None", const string &ln = "None", bool ht = false);
    TableTennisPlayer(const TableTennisPlayer &);
    void Name() const;
    bool HasTable() const;
    void ResetTable(bool);
};

class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int r = 0, const string &fn = "None", const string &ln = "None", bool ht = false);
    RatedPlayer(unsigned int, const TableTennisPlayer &);
    unsigned int Rating() const { return rating; }
    void ResetRating(unsigned int r) { rating = r; }
};
#endif