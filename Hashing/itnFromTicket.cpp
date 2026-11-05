#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void printItinerary(unordered_map<string,string>tickets){
    unordered_set<string>to;
    for(pair<string,string> ticket : tickets){
        to.insert(ticket.second);
    }

    string start = "";
    for
}

int main(){
    unordered_map<string , string> tickets;
    tickets["Chennai"] = "Bengaluru";
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";
    return 0;
}