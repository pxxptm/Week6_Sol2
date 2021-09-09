#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

main()
{
    string s;
    cout << "Input String : ";
    cin >> s;

    std :: reverse (s.begin(),s.end());
    replace(s.begin(),s.end(),'a','0');
    replace(s.begin(),s.end(),'e','1');
    replace(s.begin(),s.end(),'i','2');
    replace(s.begin(),s.end(),'o','3');
    replace(s.begin(),s.end(),'u','4');
    s+="aca";
    cout << s;
    return 0;
}

