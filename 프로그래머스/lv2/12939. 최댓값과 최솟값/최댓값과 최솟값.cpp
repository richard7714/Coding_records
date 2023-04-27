#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector <int> temp;
    
    stringstream ss(s);
    ss.str(s);
    
    string temp2;
    
    while(ss>>temp2)
    {
        temp.push_back(stoi(temp2));
    }
    
    sort(temp.begin(),temp.end());
    
    int min = *temp.begin();
    int max = *(temp.end()-1);
    
    cout<<min<<endl;
    cout<<max<<endl;

    answer+=to_string(min);
    answer+=' ';
    
    answer+=to_string(max);
    
    return answer;
}