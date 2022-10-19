// Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        if(s.empty())
            return true; // no parentheses 
        std::stack<char> mystack{};// creating (stack)stack of characters
        for(const auto& element:s){ //iterate through the string s
       
            
            if(element=='(' or element=='[' or element=='{')
                mystack.push(element);
        else if(element==')'){
if (mystack.empty())
    return false;
            
            else if (mystack.top()!='(')
            return false;
            else 
                mystack.pop();
            }
         else if(element=='}'){
if (mystack.empty())
    return false;
            
            else if (mystack.top()!='{')
            return false;
            else 
                mystack.pop();
            }
         else if(element==']'){
if (mystack.empty())
    return false;
            
            else if (mystack.top()!='[')
            return false;
            else 
                mystack.pop();
            }
    }
    if (mystack.empty())
        return true;
    else false;
        return 0;
  
    } 
        
};


