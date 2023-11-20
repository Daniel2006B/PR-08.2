#include <iostream>
#include <string>

using namespace std;

string Remove( string s)
{
    bool open = false;
    string ns = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' && !open && s.find(")",i)!=-1) {
            open = true;
        }
        if (!open)
            ns += s[i];
        if (s[i] == ')' && open) {
            open = false;
        }
      
    }
  
    return ns;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Changed string: " << Remove(str) << endl;
    return 0;
}
