#ifndef MAP_TEMPLATE_H_INCLUDED
#define MAP_TEMPLATE_H_INCLUDED
#include <map>
#include <iostream>

using namespace std;

template <class ID, class type> class map_template
{
    map<ID, type> db;
public:

    type* Find(ID a)
    {
        auto temp = db.find(a);
        if(temp == db.end()) return NULL;
        return &temp->second;
    }

    void Add(ID key, type value)
    {
        db.insert(pair<ID, type>(key, value));
    };

    friend ostream& operator << (ostream &o, const map_template &tp)
    {
        for(auto x : tp.db)
            o << x.first << " " << x.second << endl << endl;
        return o;
    }
};
#endif
