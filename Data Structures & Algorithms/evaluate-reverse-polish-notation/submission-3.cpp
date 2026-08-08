class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st; int res = 0 ; 
        for(auto token : tokens)
        {
            if(token == "+" || token == "-" || token == "*"|| token == "/" )
            {
                int t1 = st.top(); st.pop(); int t2 = st.top(); st.pop(); 
                if(token == "+")
                {   
                    st.push(t1+t2); 

                }
                else if(token == "-")
                { st.push(t2-t1); 
                }
                else if(token == "*")
                { st.push(t1*t2); 

                }
                else if( token == "/")
                { st.push(t2/t1); 

                }

            }
            else{
                st.push(stoi(token));
            }
        }

        return st.top() ; 


        
    }
};
