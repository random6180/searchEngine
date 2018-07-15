#include "../include/WebQuery.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace jjx;


int main(int argc, char *argv[]) {
	string offset = "/home/nzj/wkspace2/search/lib/indexfile.lib";
	string page = "/home/nzj/wkspace2/search/lib/pagefile.lib";
	string invert = "/home/nzj/wkspace2/search/lib/invertfile.lib";

	WebQuery web(page, offset, invert);
	
//	map<string, map<int, double>> invertindex = web._invertIndex;

//	for (auto it = invertindex.begin(); it != invertindex.end(); it++) {
//		cout << "key: " << it->first << "  value: ";
//		for (auto u = it->second.begin(); u != it->second.end(); u++) {
//			cout << "(" << u->first << " , " << u->second << ")  "; 
//		}
//		cout << endl;
//	}
		
	shared_ptr<vector<string>> words(new vector<string>);
	words->push_back("疯狂");
	words->push_back("爱上");
	words->push_back("女人");

	string res;
	web.queryWord(words, res);
	cout << res << endl;

	return 0;
}
