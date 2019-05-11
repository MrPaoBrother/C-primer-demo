#include "tabtenn.h"

using std::cout;
using std::endl;
using std::string;

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
{
    firstname = fn;
    lastname = ln;
    hasTable = ht;
}

TableTennisPlayer::TableTennisPlayer(const TableTennisPlayer &tp)
{
    this->firstname = tp.firstname;
    this->lastname = tp.lastname;
    this->hasTable = tp.hasTable;
    cout << "use copy constructor!" << endl;
}

void TableTennisPlayer::Name() const
{
    cout << "firstname:" << firstname << " lastname:" << lastname << endl;
}

bool TableTennisPlayer::HasTable() const
{
    return hasTable;
}
void TableTennisPlayer::ResetTable(bool ht)
{
    hasTable = ht;
}

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) : TableTennisPlayer(tp)
{
    rating = r;
}
