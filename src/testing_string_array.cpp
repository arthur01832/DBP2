#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
#include <cstdint>
#include <set>
#include <sstream>


using namespace std;
int main(){
	/*
	vector<string> a1;
	deque<string> a2 = {"author","Jack"};
	//a1 = a2;
	//cout<< a1[0]<<endl;
	auto i = a2.size();
	cout<< i<< endl ;
	//string name = "ID";
	
	vector<int> data = {1,2,3,4,5};
	multiset<int> idata(data.begin(),data.end());
	multiset<int> ipair;
	ipair.insert({1,7,8,10,9});
	//cout<< data[0]<<endl;
	cout<< idata.size()<<endl;
	auto out = idata.find(4);
	auto ipair_it = ipair.find(9);
	for (multiset<int>::iterator idata_it = idata.begin;idata_it != idata.end;++idata_it){
		if(idata_it == ipair_it){
			cout << *idata_it << endl;
		}
	}
	
	cout << *out <<endl;
	//auto form = a1.empty();
	
	//map<string, vector<int>> attrlist;
	//attrlist.insert(name,data);
	/*string t1[3] = {"author","Jack"};
	string t2 = "book";
	string t3 = t1[0] + "." + t2;
	cout<< t3<< endl;
	if (t1[2] == ""){
		cout<< "Blank element"<< endl;
	}
	a1.push_back(t1[0]);
	a1.push_back(t1[1]);
	a1.push_back(t2);
	a1.push_back("testing");
	cout << a1[1]<<endl;
	*/
	/*struct Table
{
    vector<string> attrname={"BookID","BookName","Author"};
    map<string, int> attrsize = { {"BookID",1},
								  {"BookName",-20},
								  {"Author", -20}  };// 2. define the BookName type
    //map<string, multimap<string, int>> attrvar_i; //1.map<Name, multimap<Jack, back 1>>
    //map<string, vector<string>> attrvar; // 3.map<bookname, 1> output: ICE
    //map<string, multimap<int, int>> attrint_i;
    //map<string, vector<int>> attrint;
    //string primkey;
    //int rownum;
};
attrsize.find("BookID")*/
	/*
	map<string,string> attr;
	string alias[2] = {"s","a"};
	string table[2] = {"Student","Author"};
	
	attr.insert({alias[0],table[0]});
	attr.insert({alias[1],table[0]});
	string name ="Student";
	auto tmp = attr.find(name);
	cout << tmp;
	*/
	//set<int> set2;
	//set2.insert({1,3,5,7,1,3,5,7});
	
	// multimap::lower_bound/upper_bound


/*
  std::multimap<int,int> mymultimap;
  std::multimap<int,int>::iterator it,itlow,itup;

  mymultimap.insert(std::make_pair(1,0));
  mymultimap.insert(std::make_pair(2,1));
  mymultimap.insert(std::make_pair(3,2));
  mymultimap.insert(std::make_pair(4,3));
  mymultimap.insert(std::make_pair(5,4));
  mymultimap.insert(std::make_pair(6,5));

  int value = mymultimap.find(1)->second;
  cout<< value<<endl;
  itlow = mymultimap.lower_bound (3);  // itlow points to b
  itup = mymultimap.upper_bound (6);   // itup points to e (not d)

  // print range [itlow,itup):
  for (it=itlow; it!=itup; ++it)
    std::cout << (*it).first << " => " << (*it).second << '\n';*/
/*
set<int> iset = {0,1,2,3,4,5,6};
set<int>:: iterator set_it;
for (set_it = iset.begin(); set_it != iset.end();++set_it){
	cout << *set_it<<endl;
	int ap = *set_it;
	cout << ap << endl;
}
*/
/*
std::multimap<char,int> mymm;

  mymm.insert (std::make_pair('x',10));
  mymm.insert (std::make_pair('y',20));
  mymm.insert (std::make_pair('z',30));
  mymm.insert (std::make_pair('z',40));
  
  cout<< "z => " << mymm.find('z')->second << '\n';
 */
/*	
	stringstream ss;
	string numberStr = "654321";

	int num;

	ss << numberStr;

	ss >> num;

	ss.str("");
	ss.clear();
*/

vector<string> compare_alias_char_first;
compare_alias_char_first.push_back("100");
string tmp;
int compare_int_first;

stringstream convert_stoi;

convert_stoi << compare_alias_char_first[0];
convert_stoi >> compare_int_first;


cout<< "compare char is :" << compare_alias_char_first[0];
cout<< " The transform to int: "<< compare_int_first;

	convert_stoi.str("");
	convert_stoi.clear();

	
	
	
	return 0;
}