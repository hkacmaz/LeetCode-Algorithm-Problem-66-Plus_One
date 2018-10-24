//
//  main.cpp
//  p66-Plus_one
//


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int transfer=1;
        
        if(digits.size()==0)
            return digits;
        else
        {
            for(int i=n-1; i>=0;--i)
            {
                digits[i]=transfer+digits[i];
                if(digits[0]==10)
                {
                    digits[0]=0;
                    digits.insert(digits.begin(), transfer);
                }
                else if(digits[i]==10)
                {
                    digits[i]=0;
                    transfer=1;
                }
                else
                    transfer=0;
                
            }
            
        }
        return digits;
    }
};

int main() {
    
    Solution so;
    
    vector<int> v={1,2,3,4};
    vector<int> v2={9};
    vector<int> answer;
    
    answer = so.plusOne(v);
    
    for(auto itr=answer.begin(); itr!=answer.end();++itr)
    {
        cout << *itr;
    }
    
    cout <<"\n";
    
    answer= so.plusOne(v2);
    
    for(auto itr=answer.begin(); itr!=answer.end();++itr)
    {
        cout << *itr;
    }
    
    return 0;
}
