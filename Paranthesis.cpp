using namespace std;
    
class Solution {
public:
    bool isValid(string s) {
        
        
        map<char, char> m;
        m['('] = ')';
        m[')'] = 'n';
        m['['] = ']';
        m[']'] = 'n';
        m['{'] = '}';
        m['}'] = 'n';
        
        stack<char> my_stack;
        for (char c: s){
            cout << c;
            if (my_stack.size() == 0){
                my_stack.push(c);
            } else if (c == m[my_stack.top()]){
                my_stack.pop();
            } else {
                my_stack.push(c);
            }
        }
        
        if (my_stack.size() != 0) {
            return false;
        }
        return true;
    }
};
